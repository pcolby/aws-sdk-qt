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

#include "setpermissionresponse.h"
#include "setpermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  SetPermissionResponse
 *
 * @brief  Handles OpsWorks SetPermission responses.
 *
 * @see    OpsWorksClient::setPermission
 */

/**
 * @brief  Constructs a new SetPermissionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetPermissionResponse::SetPermissionResponse(
        const SetPermissionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new SetPermissionResponsePrivate(this), parent)
{
    setRequest(new SetPermissionRequest(request));
    setReply(reply);
}

const SetPermissionRequest * SetPermissionResponse::request() const
{
    Q_D(const SetPermissionResponse);
    return static_cast<const SetPermissionRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks SetPermission response.
 *
 * @param  response  Response to parse.
 */
void SetPermissionResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetPermissionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetPermissionResponsePrivate
 *
 * @brief  Private implementation for SetPermissionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetPermissionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetPermissionResponse instance.
 */
SetPermissionResponsePrivate::SetPermissionResponsePrivate(
    SetPermissionResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks SetPermissionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetPermissionResponsePrivate::SetPermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetPermissionResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
