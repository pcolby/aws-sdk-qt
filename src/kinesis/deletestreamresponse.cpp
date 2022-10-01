// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestreamresponse.h"
#include "deletestreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DeleteStreamResponse
 * \brief The DeleteStreamResponse class provides an interace for Kinesis DeleteStream responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::deleteStream
 */

/*!
 * Constructs a DeleteStreamResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStreamResponse::DeleteStreamResponse(
        const DeleteStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new DeleteStreamResponsePrivate(this), parent)
{
    setRequest(new DeleteStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStreamRequest * DeleteStreamResponse::request() const
{
    Q_D(const DeleteStreamResponse);
    return static_cast<const DeleteStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis DeleteStream \a response.
 */
void DeleteStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::DeleteStreamResponsePrivate
 * \brief The DeleteStreamResponsePrivate class provides private implementation for DeleteStreamResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a DeleteStreamResponsePrivate object with public implementation \a q.
 */
DeleteStreamResponsePrivate::DeleteStreamResponsePrivate(
    DeleteStreamResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis DeleteStream response element from \a xml.
 */
void DeleteStreamResponsePrivate::parseDeleteStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
