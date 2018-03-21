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

#include "putpermissionpolicyresponse.h"
#include "putpermissionpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  PutPermissionPolicyResponse
 *
 * @brief  Handles WAFRegional PutPermissionPolicy responses.
 *
 * @see    WAFRegionalClient::putPermissionPolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutPermissionPolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new PutPermissionPolicyResponsePrivate(this), parent)
{
    setRequest(new PutPermissionPolicyRequest(request));
    setReply(reply);
}

const PutPermissionPolicyRequest * PutPermissionPolicyResponse::request() const
{
    Q_D(const PutPermissionPolicyResponse);
    return static_cast<const PutPermissionPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional PutPermissionPolicy response.
 *
 * @param  response  Response to parse.
 */
void PutPermissionPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutPermissionPolicyResponsePrivate
 *
 * @brief  Private implementation for PutPermissionPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutPermissionPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutPermissionPolicyResponse instance.
 */
PutPermissionPolicyResponsePrivate::PutPermissionPolicyResponsePrivate(
    PutPermissionPolicyQueueResponse * const q) : PutPermissionPolicyPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional PutPermissionPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutPermissionPolicyResponsePrivate::PutPermissionPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutPermissionPolicyResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
