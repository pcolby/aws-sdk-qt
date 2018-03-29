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

#include "leaveorganizationresponse.h"
#include "leaveorganizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  LeaveOrganizationResponse
 *
 * @brief  Handles Organizations LeaveOrganization responses.
 *
 * @see    OrganizationsClient::leaveOrganization
 */

/**
 * @brief  Constructs a new LeaveOrganizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
LeaveOrganizationResponse::LeaveOrganizationResponse(
        const LeaveOrganizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new LeaveOrganizationResponsePrivate(this), parent)
{
    setRequest(new LeaveOrganizationRequest(request));
    setReply(reply);
}

const LeaveOrganizationRequest * LeaveOrganizationResponse::request() const
{
    Q_D(const LeaveOrganizationResponse);
    return static_cast<const LeaveOrganizationRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations LeaveOrganization response.
 *
 * @param  response  Response to parse.
 */
void LeaveOrganizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  LeaveOrganizationResponsePrivate
 *
 * @brief  Private implementation for LeaveOrganizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new LeaveOrganizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public LeaveOrganizationResponse instance.
 */
LeaveOrganizationResponsePrivate::LeaveOrganizationResponsePrivate(
    LeaveOrganizationResponse * const q) : OrganizationsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Organizations LeaveOrganizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void LeaveOrganizationResponsePrivate::LeaveOrganizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("LeaveOrganizationResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace QtAws
