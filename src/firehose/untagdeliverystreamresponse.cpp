/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "untagdeliverystreamresponse.h"
#include "untagdeliverystreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::UntagDeliveryStreamResponse
 * \brief The UntagDeliveryStreamResponse class provides an interace for Firehose UntagDeliveryStream responses.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::untagDeliveryStream
 */

/*!
 * Constructs a UntagDeliveryStreamResponse object for \a reply to \a request, with parent \a parent.
 */
UntagDeliveryStreamResponse::UntagDeliveryStreamResponse(
        const UntagDeliveryStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new UntagDeliveryStreamResponsePrivate(this), parent)
{
    setRequest(new UntagDeliveryStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UntagDeliveryStreamRequest * UntagDeliveryStreamResponse::request() const
{
    Q_D(const UntagDeliveryStreamResponse);
    return static_cast<const UntagDeliveryStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Firehose UntagDeliveryStream \a response.
 */
void UntagDeliveryStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UntagDeliveryStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Firehose::UntagDeliveryStreamResponsePrivate
 * \brief The UntagDeliveryStreamResponsePrivate class provides private implementation for UntagDeliveryStreamResponse.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a UntagDeliveryStreamResponsePrivate object with public implementation \a q.
 */
UntagDeliveryStreamResponsePrivate::UntagDeliveryStreamResponsePrivate(
    UntagDeliveryStreamResponse * const q) : FirehoseResponsePrivate(q)
{

}

/*!
 * Parses a Firehose UntagDeliveryStream response element from \a xml.
 */
void UntagDeliveryStreamResponsePrivate::parseUntagDeliveryStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagDeliveryStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Firehose
} // namespace QtAws
