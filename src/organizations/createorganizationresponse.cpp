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

#include "createorganizationresponse.h"
#include "createorganizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  CreateOrganizationResponse
 *
 * @brief  Handles Organizations CreateOrganization responses.
 *
 * @see    OrganizationsClient::createOrganization
 */

/**
 * @brief  Constructs a new CreateOrganizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateOrganizationResponse::CreateOrganizationResponse(
        const CreateOrganizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new CreateOrganizationResponsePrivate(this), parent)
{
    setRequest(new CreateOrganizationRequest(request));
    setReply(reply);
}

const CreateOrganizationRequest * CreateOrganizationResponse::request() const
{
    Q_D(const CreateOrganizationResponse);
    return static_cast<const CreateOrganizationRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations CreateOrganization response.
 *
 * @param  response  Response to parse.
 */
void CreateOrganizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateOrganizationResponsePrivate
 *
 * @brief  Private implementation for CreateOrganizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateOrganizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateOrganizationResponse instance.
 */
CreateOrganizationResponsePrivate::CreateOrganizationResponsePrivate(
    CreateOrganizationQueueResponse * const q) : CreateOrganizationPrivate(q)
{

}

/**
 * @brief  Parse an Organizations CreateOrganizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateOrganizationResponsePrivate::CreateOrganizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateOrganizationResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace QtAws
