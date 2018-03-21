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

#include "listhandshakesfororganizationresponse.h"
#include "listhandshakesfororganizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  ListHandshakesForOrganizationResponse
 *
 * @brief  Handles Organizations ListHandshakesForOrganization responses.
 *
 * @see    OrganizationsClient::listHandshakesForOrganization
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListHandshakesForOrganizationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new ListHandshakesForOrganizationResponsePrivate(this), parent)
{
    setRequest(new ListHandshakesForOrganizationRequest(request));
    setReply(reply);
}

const ListHandshakesForOrganizationRequest * ListHandshakesForOrganizationResponse::request() const
{
    Q_D(const ListHandshakesForOrganizationResponse);
    return static_cast<const ListHandshakesForOrganizationRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations ListHandshakesForOrganization response.
 *
 * @param  response  Response to parse.
 */
void ListHandshakesForOrganizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListHandshakesForOrganizationResponsePrivate
 *
 * @brief  Private implementation for ListHandshakesForOrganizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListHandshakesForOrganizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListHandshakesForOrganizationResponse instance.
 */
ListHandshakesForOrganizationResponsePrivate::ListHandshakesForOrganizationResponsePrivate(
    ListHandshakesForOrganizationQueueResponse * const q) : ListHandshakesForOrganizationPrivate(q)
{

}

/**
 * @brief  Parse an Organizations ListHandshakesForOrganizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListHandshakesForOrganizationResponsePrivate::ListHandshakesForOrganizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHandshakesForOrganizationResponse"));
    /// @todo
}
