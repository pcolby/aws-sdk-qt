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

#include "listawsserviceaccessfororganizationresponse.h"
#include "listawsserviceaccessfororganizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  ListAWSServiceAccessForOrganizationResponse
 *
 * @brief  Handles Organizations ListAWSServiceAccessForOrganization responses.
 *
 * @see    OrganizationsClient::listAWSServiceAccessForOrganization
 */

/**
 * @brief  Constructs a new ListAWSServiceAccessForOrganizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAWSServiceAccessForOrganizationResponse::ListAWSServiceAccessForOrganizationResponse(
        const ListAWSServiceAccessForOrganizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new ListAWSServiceAccessForOrganizationResponsePrivate(this), parent)
{
    setRequest(new ListAWSServiceAccessForOrganizationRequest(request));
    setReply(reply);
}

const ListAWSServiceAccessForOrganizationRequest * ListAWSServiceAccessForOrganizationResponse::request() const
{
    Q_D(const ListAWSServiceAccessForOrganizationResponse);
    return static_cast<const ListAWSServiceAccessForOrganizationRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations ListAWSServiceAccessForOrganization response.
 *
 * @param  response  Response to parse.
 */
void ListAWSServiceAccessForOrganizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAWSServiceAccessForOrganizationResponsePrivate
 *
 * @brief  Private implementation for ListAWSServiceAccessForOrganizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAWSServiceAccessForOrganizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAWSServiceAccessForOrganizationResponse instance.
 */
ListAWSServiceAccessForOrganizationResponsePrivate::ListAWSServiceAccessForOrganizationResponsePrivate(
    ListAWSServiceAccessForOrganizationQueueResponse * const q) : ListAWSServiceAccessForOrganizationPrivate(q)
{

}

/**
 * @brief  Parse an Organizations ListAWSServiceAccessForOrganizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAWSServiceAccessForOrganizationResponsePrivate::ListAWSServiceAccessForOrganizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAWSServiceAccessForOrganizationResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace QtAws
