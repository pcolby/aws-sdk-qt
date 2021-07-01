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

#include "listtagsfordeliverystreamresponse.h"
#include "listtagsfordeliverystreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::ListTagsForDeliveryStreamResponse
 * \brief The ListTagsForDeliveryStreamResponse class provides an interace for Firehose ListTagsForDeliveryStream responses.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::listTagsForDeliveryStream
 */

/*!
 * Constructs a ListTagsForDeliveryStreamResponse object for \a reply to \a request, with parent \a parent.
 */
ListTagsForDeliveryStreamResponse::ListTagsForDeliveryStreamResponse(
        const ListTagsForDeliveryStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new ListTagsForDeliveryStreamResponsePrivate(this), parent)
{
    setRequest(new ListTagsForDeliveryStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTagsForDeliveryStreamRequest * ListTagsForDeliveryStreamResponse::request() const
{
    Q_D(const ListTagsForDeliveryStreamResponse);
    return static_cast<const ListTagsForDeliveryStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Firehose ListTagsForDeliveryStream \a response.
 */
void ListTagsForDeliveryStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTagsForDeliveryStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Firehose::ListTagsForDeliveryStreamResponsePrivate
 * \brief The ListTagsForDeliveryStreamResponsePrivate class provides private implementation for ListTagsForDeliveryStreamResponse.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a ListTagsForDeliveryStreamResponsePrivate object with public implementation \a q.
 */
ListTagsForDeliveryStreamResponsePrivate::ListTagsForDeliveryStreamResponsePrivate(
    ListTagsForDeliveryStreamResponse * const q) : FirehoseResponsePrivate(q)
{

}

/*!
 * Parses a Firehose ListTagsForDeliveryStream response element from \a xml.
 */
void ListTagsForDeliveryStreamResponsePrivate::parseListTagsForDeliveryStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForDeliveryStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Firehose
} // namespace QtAws
