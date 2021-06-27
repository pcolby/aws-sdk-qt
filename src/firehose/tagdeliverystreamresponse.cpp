/*
    Copyright 2013-2021 Paul Colby

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

#include "tagdeliverystreamresponse.h"
#include "tagdeliverystreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::TagDeliveryStreamResponse
 * \brief The TagDeliveryStreamResponse class provides an interace for Firehose TagDeliveryStream responses.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::tagDeliveryStream
 */

/*!
 * Constructs a TagDeliveryStreamResponse object for \a reply to \a request, with parent \a parent.
 */
TagDeliveryStreamResponse::TagDeliveryStreamResponse(
        const TagDeliveryStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new TagDeliveryStreamResponsePrivate(this), parent)
{
    setRequest(new TagDeliveryStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TagDeliveryStreamRequest * TagDeliveryStreamResponse::request() const
{
    return static_cast<const TagDeliveryStreamRequest *>(FirehoseResponse::request());
}

/*!
 * \reimp
 * Parses a successful Firehose TagDeliveryStream \a response.
 */
void TagDeliveryStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagDeliveryStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Firehose::TagDeliveryStreamResponsePrivate
 * \brief The TagDeliveryStreamResponsePrivate class provides private implementation for TagDeliveryStreamResponse.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a TagDeliveryStreamResponsePrivate object with public implementation \a q.
 */
TagDeliveryStreamResponsePrivate::TagDeliveryStreamResponsePrivate(
    TagDeliveryStreamResponse * const q) : FirehoseResponsePrivate(q)
{

}

/*!
 * Parses a Firehose TagDeliveryStream response element from \a xml.
 */
void TagDeliveryStreamResponsePrivate::parseTagDeliveryStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagDeliveryStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Firehose
} // namespace QtAws
