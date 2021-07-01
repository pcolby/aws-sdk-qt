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
