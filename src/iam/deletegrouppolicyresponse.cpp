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

#include "deletegrouppolicyresponse.h"
#include "deletegrouppolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  DeleteGroupPolicyResponse
 *
 * @brief  Handles IAM DeleteGroupPolicy responses.
 *
 * @see    IAMClient::deleteGroupPolicy
 */

/**
 * @brief  Constructs a new DeleteGroupPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteGroupPolicyResponse::DeleteGroupPolicyResponse(
        const DeleteGroupPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DeleteGroupPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteGroupPolicyRequest(request));
    setReply(reply);
}

const DeleteGroupPolicyRequest * DeleteGroupPolicyResponse::request() const
{
    Q_D(const DeleteGroupPolicyResponse);
    return static_cast<const DeleteGroupPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeleteGroupPolicy response.
 *
 * @param  response  Response to parse.
 */
void DeleteGroupPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteGroupPolicyResponsePrivate
 *
 * @brief  Private implementation for DeleteGroupPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGroupPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteGroupPolicyResponse instance.
 */
DeleteGroupPolicyResponsePrivate::DeleteGroupPolicyResponsePrivate(
    DeleteGroupPolicyResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM DeleteGroupPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteGroupPolicyResponsePrivate::DeleteGroupPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGroupPolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
