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

#include "inviteaccounttoorganizationresponse.h"
#include "inviteaccounttoorganizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  InviteAccountToOrganizationResponse
 *
 * @brief  Handles Organizations InviteAccountToOrganization responses.
 *
 * @see    OrganizationsClient::inviteAccountToOrganization
 */

/**
 * @brief  Constructs a new InviteAccountToOrganizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
InviteAccountToOrganizationResponse::InviteAccountToOrganizationResponse(
        const InviteAccountToOrganizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new InviteAccountToOrganizationResponsePrivate(this), parent)
{
    setRequest(new InviteAccountToOrganizationRequest(request));
    setReply(reply);
}

const InviteAccountToOrganizationRequest * InviteAccountToOrganizationResponse::request() const
{
    Q_D(const InviteAccountToOrganizationResponse);
    return static_cast<const InviteAccountToOrganizationRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations InviteAccountToOrganization response.
 *
 * @param  response  Response to parse.
 */
void InviteAccountToOrganizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  InviteAccountToOrganizationResponsePrivate
 *
 * @brief  Private implementation for InviteAccountToOrganizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InviteAccountToOrganizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public InviteAccountToOrganizationResponse instance.
 */
InviteAccountToOrganizationResponsePrivate::InviteAccountToOrganizationResponsePrivate(
    InviteAccountToOrganizationQueueResponse * const q) : InviteAccountToOrganizationPrivate(q)
{

}

/**
 * @brief  Parse an Organizations InviteAccountToOrganizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void InviteAccountToOrganizationResponsePrivate::InviteAccountToOrganizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InviteAccountToOrganizationResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace AWS
