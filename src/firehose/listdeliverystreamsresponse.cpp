/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
 *
 * \brief The ListDeliveryStreamsResponse class provides an interace for Firehose ListDeliveryStreams responses.
 *
 * \ingroup Firehose
 *
 *  <fullname>Amazon Kinesis Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Firehose is a fully managed service that delivers real-time streaming data to destinations such as Amazon
 *  Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), and Amazon
 *
 * \sa FirehoseClient::listDeliveryStreams
 */

/*!
 * @brief  Constructs a new ListDeliveryStreamsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const ListDeliveryStreamsRequest * ListDeliveryStreamsResponse::request() const
{
    Q_D(const ListDeliveryStreamsResponse);
    return static_cast<const ListDeliveryStreamsRequest *>(d->request);
}

/*!
 * @brief  Parse a Firehose ListDeliveryStreams response.
 *
 * @param  response  Response to parse.
 */
void ListDeliveryStreamsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListDeliveryStreamsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListDeliveryStreamsResponsePrivate
 *
 * \brief Private implementation for ListDeliveryStreamsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListDeliveryStreamsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDeliveryStreamsResponse instance.
 */
ListDeliveryStreamsResponsePrivate::ListDeliveryStreamsResponsePrivate(
    ListDeliveryStreamsResponse * const q) : FirehoseResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Firehose ListDeliveryStreamsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDeliveryStreamsResponsePrivate::parseListDeliveryStreamsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeliveryStreamsResponse"));
    /// @todo
}

} // namespace Firehose
} // namespace QtAws
