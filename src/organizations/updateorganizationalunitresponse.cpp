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

#include "updateorganizationalunitresponse.h"
#include "updateorganizationalunitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  UpdateOrganizationalUnitResponse
 *
 * @brief  Handles Organizations UpdateOrganizationalUnit responses.
 *
 * @see    OrganizationsClient::updateOrganizationalUnit
 */

/**
 * @brief  Constructs a new UpdateOrganizationalUnitResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateOrganizationalUnitResponse::UpdateOrganizationalUnitResponse(
        const UpdateOrganizationalUnitRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new UpdateOrganizationalUnitResponsePrivate(this), parent)
{
    setRequest(new UpdateOrganizationalUnitRequest(request));
    setReply(reply);
}

const UpdateOrganizationalUnitRequest * UpdateOrganizationalUnitResponse::request() const
{
    Q_D(const UpdateOrganizationalUnitResponse);
    return static_cast<const UpdateOrganizationalUnitRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations UpdateOrganizationalUnit response.
 *
 * @param  response  Response to parse.
 */
void UpdateOrganizationalUnitResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateOrganizationalUnitResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateOrganizationalUnitResponsePrivate
 *
 * @brief  Private implementation for UpdateOrganizationalUnitResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateOrganizationalUnitResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateOrganizationalUnitResponse instance.
 */
UpdateOrganizationalUnitResponsePrivate::UpdateOrganizationalUnitResponsePrivate(
    UpdateOrganizationalUnitResponse * const q) : OrganizationsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Organizations UpdateOrganizationalUnitResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateOrganizationalUnitResponsePrivate::UpdateOrganizationalUnitResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateOrganizationalUnitResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace QtAws
