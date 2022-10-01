// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdeliverystreamsresponse.h"
#include "listdeliverystreamsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::ListDeliveryStreamsResponse
 * \brief The ListDeliveryStreamsResponse class provides an interace for Firehose ListDeliveryStreams responses.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::listDeliveryStreams
 */

/*!
 * Constructs a ListDeliveryStreamsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDeliveryStreamsResponse::ListDeliveryStreamsResponse(
        const ListDeliveryStreamsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new ListDeliveryStreamsResponsePrivate(this), parent)
{
    setRequest(new ListDeliveryStreamsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDeliveryStreamsRequest * ListDeliveryStreamsResponse::request() const
{
    Q_D(const ListDeliveryStreamsResponse);
    return static_cast<const ListDeliveryStreamsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Firehose ListDeliveryStreams \a response.
 */
void ListDeliveryStreamsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDeliveryStreamsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Firehose::ListDeliveryStreamsResponsePrivate
 * \brief The ListDeliveryStreamsResponsePrivate class provides private implementation for ListDeliveryStreamsResponse.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a ListDeliveryStreamsResponsePrivate object with public implementation \a q.
 */
ListDeliveryStreamsResponsePrivate::ListDeliveryStreamsResponsePrivate(
    ListDeliveryStreamsResponse * const q) : FirehoseResponsePrivate(q)
{

}

/*!
 * Parses a Firehose ListDeliveryStreams response element from \a xml.
 */
void ListDeliveryStreamsResponsePrivate::parseListDeliveryStreamsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeliveryStreamsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Firehose
} // namespace QtAws
