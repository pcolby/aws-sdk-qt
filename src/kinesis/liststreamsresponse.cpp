// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststreamsresponse.h"
#include "liststreamsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::ListStreamsResponse
 * \brief The ListStreamsResponse class provides an interace for Kinesis ListStreams responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::listStreams
 */

/*!
 * Constructs a ListStreamsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStreamsResponse::ListStreamsResponse(
        const ListStreamsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new ListStreamsResponsePrivate(this), parent)
{
    setRequest(new ListStreamsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStreamsRequest * ListStreamsResponse::request() const
{
    Q_D(const ListStreamsResponse);
    return static_cast<const ListStreamsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis ListStreams \a response.
 */
void ListStreamsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStreamsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::ListStreamsResponsePrivate
 * \brief The ListStreamsResponsePrivate class provides private implementation for ListStreamsResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a ListStreamsResponsePrivate object with public implementation \a q.
 */
ListStreamsResponsePrivate::ListStreamsResponsePrivate(
    ListStreamsResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis ListStreams response element from \a xml.
 */
void ListStreamsResponsePrivate::parseListStreamsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStreamsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
