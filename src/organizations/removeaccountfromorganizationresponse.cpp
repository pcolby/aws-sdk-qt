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

#include "removeaccountfromorganizationresponse.h"
#include "removeaccountfromorganizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  RemoveAccountFromOrganizationResponse
 *
 * @brief  Handles Organizations RemoveAccountFromOrganization responses.
 *
 * @see    OrganizationsClient::removeAccountFromOrganization
 */

/**
 * @brief  Constructs a new RemoveAccountFromOrganizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveAccountFromOrganizationResponse::RemoveAccountFromOrganizationResponse(
        const RemoveAccountFromOrganizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new RemoveAccountFromOrganizationResponsePrivate(this), parent)
{
    setRequest(new RemoveAccountFromOrganizationRequest(request));
    setReply(reply);
}

const RemoveAccountFromOrganizationRequest * RemoveAccountFromOrganizationResponse::request() const
{
    Q_D(const RemoveAccountFromOrganizationResponse);
    return static_cast<const RemoveAccountFromOrganizationRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations RemoveAccountFromOrganization response.
 *
 * @param  response  Response to parse.
 */
void RemoveAccountFromOrganizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveAccountFromOrganizationResponsePrivate
 *
 * @brief  Private implementation for RemoveAccountFromOrganizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveAccountFromOrganizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveAccountFromOrganizationResponse instance.
 */
RemoveAccountFromOrganizationResponsePrivate::RemoveAccountFromOrganizationResponsePrivate(
    RemoveAccountFromOrganizationQueueResponse * const q) : RemoveAccountFromOrganizationPrivate(q)
{

}

/**
 * @brief  Parse an Organizations RemoveAccountFromOrganizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveAccountFromOrganizationResponsePrivate::RemoveAccountFromOrganizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveAccountFromOrganizationResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace AWS
