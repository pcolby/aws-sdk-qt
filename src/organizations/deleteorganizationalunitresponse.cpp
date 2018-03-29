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

#include "deleteorganizationalunitresponse.h"
#include "deleteorganizationalunitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  DeleteOrganizationalUnitResponse
 *
 * @brief  Handles Organizations DeleteOrganizationalUnit responses.
 *
 * @see    OrganizationsClient::deleteOrganizationalUnit
 */

/**
 * @brief  Constructs a new DeleteOrganizationalUnitResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteOrganizationalUnitResponse::DeleteOrganizationalUnitResponse(
        const DeleteOrganizationalUnitRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new DeleteOrganizationalUnitResponsePrivate(this), parent)
{
    setRequest(new DeleteOrganizationalUnitRequest(request));
    setReply(reply);
}

const DeleteOrganizationalUnitRequest * DeleteOrganizationalUnitResponse::request() const
{
    Q_D(const DeleteOrganizationalUnitResponse);
    return static_cast<const DeleteOrganizationalUnitRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations DeleteOrganizationalUnit response.
 *
 * @param  response  Response to parse.
 */
void DeleteOrganizationalUnitResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteOrganizationalUnitResponsePrivate
 *
 * @brief  Private implementation for DeleteOrganizationalUnitResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteOrganizationalUnitResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteOrganizationalUnitResponse instance.
 */
DeleteOrganizationalUnitResponsePrivate::DeleteOrganizationalUnitResponsePrivate(
    DeleteOrganizationalUnitQueueResponse * const q) : DeleteOrganizationalUnitPrivate(q)
{

}

/**
 * @brief  Parse an Organizations DeleteOrganizationalUnitResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteOrganizationalUnitResponsePrivate::DeleteOrganizationalUnitResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteOrganizationalUnitResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace QtAws
