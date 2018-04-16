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

#include "listconfigurationsresponse.h"
#include "listconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::ListConfigurationsResponse
 *
 * \brief The ListConfigurationsResponse class encapsulates MQ ListConfigurations responses.
 *
 * \ingroup MQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MQClient::listConfigurations
 */

/*!
 * @brief  Constructs a new ListConfigurationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListConfigurationsResponse::ListConfigurationsResponse(
        const ListConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MQResponse(new ListConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListConfigurationsRequest(request));
    setReply(reply);
}

const ListConfigurationsRequest * ListConfigurationsResponse::request() const
{
    Q_D(const ListConfigurationsResponse);
    return static_cast<const ListConfigurationsRequest *>(d->request);
}

/*!
 * @brief  Parse a MQ ListConfigurations response.
 *
 * @param  response  Response to parse.
 */
void ListConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListConfigurationsResponsePrivate
 *
 * \brief Private implementation for ListConfigurationsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListConfigurationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListConfigurationsResponse instance.
 */
ListConfigurationsResponsePrivate::ListConfigurationsResponsePrivate(
    ListConfigurationsResponse * const q) : MQResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MQ ListConfigurationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListConfigurationsResponsePrivate::parseListConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConfigurationsResponse"));
    /// @todo
}

} // namespace MQ
} // namespace QtAws
