// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsforstreamresponse.h"
#include "listtagsforstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::ListTagsForStreamResponse
 * \brief The ListTagsForStreamResponse class provides an interace for Kinesis ListTagsForStream responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::listTagsForStream
 */

/*!
 * Constructs a ListTagsForStreamResponse object for \a reply to \a request, with parent \a parent.
 */
ListTagsForStreamResponse::ListTagsForStreamResponse(
        const ListTagsForStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new ListTagsForStreamResponsePrivate(this), parent)
{
    setRequest(new ListTagsForStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTagsForStreamRequest * ListTagsForStreamResponse::request() const
{
    Q_D(const ListTagsForStreamResponse);
    return static_cast<const ListTagsForStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis ListTagsForStream \a response.
 */
void ListTagsForStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTagsForStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::ListTagsForStreamResponsePrivate
 * \brief The ListTagsForStreamResponsePrivate class provides private implementation for ListTagsForStreamResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a ListTagsForStreamResponsePrivate object with public implementation \a q.
 */
ListTagsForStreamResponsePrivate::ListTagsForStreamResponsePrivate(
    ListTagsForStreamResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis ListTagsForStream response element from \a xml.
 */
void ListTagsForStreamResponsePrivate::parseListTagsForStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
