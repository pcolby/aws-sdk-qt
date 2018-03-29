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

#include "createorganizationalunitresponse.h"
#include "createorganizationalunitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  CreateOrganizationalUnitResponse
 *
 * @brief  Handles Organizations CreateOrganizationalUnit responses.
 *
 * @see    OrganizationsClient::createOrganizationalUnit
 */

/**
 * @brief  Constructs a new CreateOrganizationalUnitResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateOrganizationalUnitResponse::CreateOrganizationalUnitResponse(
        const CreateOrganizationalUnitRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new CreateOrganizationalUnitResponsePrivate(this), parent)
{
    setRequest(new CreateOrganizationalUnitRequest(request));
    setReply(reply);
}

const CreateOrganizationalUnitRequest * CreateOrganizationalUnitResponse::request() const
{
    Q_D(const CreateOrganizationalUnitResponse);
    return static_cast<const CreateOrganizationalUnitRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations CreateOrganizationalUnit response.
 *
 * @param  response  Response to parse.
 */
void CreateOrganizationalUnitResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateOrganizationalUnitResponsePrivate
 *
 * @brief  Private implementation for CreateOrganizationalUnitResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateOrganizationalUnitResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateOrganizationalUnitResponse instance.
 */
CreateOrganizationalUnitResponsePrivate::CreateOrganizationalUnitResponsePrivate(
    CreateOrganizationalUnitQueueResponse * const q) : CreateOrganizationalUnitPrivate(q)
{

}

/**
 * @brief  Parse an Organizations CreateOrganizationalUnitResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateOrganizationalUnitResponsePrivate::CreateOrganizationalUnitResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateOrganizationalUnitResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace AWS
