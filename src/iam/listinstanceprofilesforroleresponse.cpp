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

#include "listinstanceprofilesforroleresponse.h"
#include "listinstanceprofilesforroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  ListInstanceProfilesForRoleResponse
 *
 * @brief  Handles IAM ListInstanceProfilesForRole responses.
 *
 * @see    IAMClient::listInstanceProfilesForRole
 */

/**
 * @brief  Constructs a new ListInstanceProfilesForRoleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListInstanceProfilesForRoleResponse::ListInstanceProfilesForRoleResponse(
        const ListInstanceProfilesForRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ListInstanceProfilesForRoleResponsePrivate(this), parent)
{
    setRequest(new ListInstanceProfilesForRoleRequest(request));
    setReply(reply);
}

const ListInstanceProfilesForRoleRequest * ListInstanceProfilesForRoleResponse::request() const
{
    Q_D(const ListInstanceProfilesForRoleResponse);
    return static_cast<const ListInstanceProfilesForRoleRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListInstanceProfilesForRole response.
 *
 * @param  response  Response to parse.
 */
void ListInstanceProfilesForRoleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListInstanceProfilesForRoleResponsePrivate
 *
 * @brief  Private implementation for ListInstanceProfilesForRoleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListInstanceProfilesForRoleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListInstanceProfilesForRoleResponse instance.
 */
ListInstanceProfilesForRoleResponsePrivate::ListInstanceProfilesForRoleResponsePrivate(
    ListInstanceProfilesForRoleQueueResponse * const q) : ListInstanceProfilesForRolePrivate(q)
{

}

/**
 * @brief  Parse an IAM ListInstanceProfilesForRoleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListInstanceProfilesForRoleResponsePrivate::ListInstanceProfilesForRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInstanceProfilesForRoleResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
