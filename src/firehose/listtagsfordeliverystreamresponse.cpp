// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
