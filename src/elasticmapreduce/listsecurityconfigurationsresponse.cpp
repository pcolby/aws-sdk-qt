/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listsecurityconfigurationsresponse.h"
#include "listsecurityconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EMR {

/**
 * @class  ListSecurityConfigurationsResponse
 *
 * @brief  Handles EMR ListSecurityConfigurations responses.
 *
 * @see    EMRClient::listSecurityConfigurations
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSecurityConfigurationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new ListSecurityConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListSecurityConfigurationsRequest(request));
    setReply(reply);
}

const ListSecurityConfigurationsRequest * ListSecurityConfigurationsResponse::request() const
{
    Q_D(const ListSecurityConfigurationsResponse);
    return static_cast<const ListSecurityConfigurationsRequest *>(d->request);
}

/**
 * @brief  Parse a EMR ListSecurityConfigurations response.
 *
 * @param  response  Response to parse.
 */
void ListSecurityConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListSecurityConfigurationsResponsePrivate
 *
 * @brief  Private implementation for ListSecurityConfigurationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSecurityConfigurationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListSecurityConfigurationsResponse instance.
 */
ListSecurityConfigurationsResponsePrivate::ListSecurityConfigurationsResponsePrivate(
    ListSecurityConfigurationsQueueResponse * const q) : ListSecurityConfigurationsPrivate(q)
{

}

/**
 * @brief  Parse an EMR ListSecurityConfigurationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListSecurityConfigurationsResponsePrivate::ListSecurityConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSecurityConfigurationsResponse"));
    /// @todo
}
