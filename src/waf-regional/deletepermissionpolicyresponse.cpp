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

#include "deletepermissionpolicyresponse.h"
#include "deletepermissionpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/**
 * @class  DeletePermissionPolicyResponse
 *
 * @brief  Handles WAFRegional DeletePermissionPolicy responses.
 *
 * @see    WAFRegionalClient::deletePermissionPolicy
 */

/**
 * @brief  Constructs a new DeletePermissionPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeletePermissionPolicyResponse::DeletePermissionPolicyResponse(
        const DeletePermissionPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new DeletePermissionPolicyResponsePrivate(this), parent)
{
    setRequest(new DeletePermissionPolicyRequest(request));
    setReply(reply);
}

const DeletePermissionPolicyRequest * DeletePermissionPolicyResponse::request() const
{
    Q_D(const DeletePermissionPolicyResponse);
    return static_cast<const DeletePermissionPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional DeletePermissionPolicy response.
 *
 * @param  response  Response to parse.
 */
void DeletePermissionPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeletePermissionPolicyResponsePrivate
 *
 * @brief  Private implementation for DeletePermissionPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePermissionPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeletePermissionPolicyResponse instance.
 */
DeletePermissionPolicyResponsePrivate::DeletePermissionPolicyResponsePrivate(
    DeletePermissionPolicyQueueResponse * const q) : DeletePermissionPolicyPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional DeletePermissionPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeletePermissionPolicyResponsePrivate::DeletePermissionPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePermissionPolicyResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
