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

#include "deletepolicyresponse.h"
#include "deletepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  DeletePolicyResponse
 *
 * @brief  Handles IAM DeletePolicy responses.
 *
 * @see    IAMClient::deletePolicy
 */

/**
 * @brief  Constructs a new DeletePolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeletePolicyResponse::DeletePolicyResponse(
        const DeletePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DeletePolicyResponsePrivate(this), parent)
{
    setRequest(new DeletePolicyRequest(request));
    setReply(reply);
}

const DeletePolicyRequest * DeletePolicyResponse::request() const
{
    Q_D(const DeletePolicyResponse);
    return static_cast<const DeletePolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeletePolicy response.
 *
 * @param  response  Response to parse.
 */
void DeletePolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeletePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeletePolicyResponsePrivate
 *
 * @brief  Private implementation for DeletePolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeletePolicyResponse instance.
 */
DeletePolicyResponsePrivate::DeletePolicyResponsePrivate(
    DeletePolicyResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM DeletePolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeletePolicyResponsePrivate::parseDeletePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
