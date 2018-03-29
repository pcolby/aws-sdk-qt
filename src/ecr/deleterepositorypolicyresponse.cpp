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

#include "deleterepositorypolicyresponse.h"
#include "deleterepositorypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/**
 * @class  DeleteRepositoryPolicyResponse
 *
 * @brief  Handles ECR DeleteRepositoryPolicy responses.
 *
 * @see    ECRClient::deleteRepositoryPolicy
 */

/**
 * @brief  Constructs a new DeleteRepositoryPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRepositoryPolicyResponse::DeleteRepositoryPolicyResponse(
        const DeleteRepositoryPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new DeleteRepositoryPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteRepositoryPolicyRequest(request));
    setReply(reply);
}

const DeleteRepositoryPolicyRequest * DeleteRepositoryPolicyResponse::request() const
{
    Q_D(const DeleteRepositoryPolicyResponse);
    return static_cast<const DeleteRepositoryPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a ECR DeleteRepositoryPolicy response.
 *
 * @param  response  Response to parse.
 */
void DeleteRepositoryPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteRepositoryPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRepositoryPolicyResponsePrivate
 *
 * @brief  Private implementation for DeleteRepositoryPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRepositoryPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRepositoryPolicyResponse instance.
 */
DeleteRepositoryPolicyResponsePrivate::DeleteRepositoryPolicyResponsePrivate(
    DeleteRepositoryPolicyResponse * const q) : ECRResponsePrivate(q)
{

}

/**
 * @brief  Parse an ECR DeleteRepositoryPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRepositoryPolicyResponsePrivate::parseDeleteRepositoryPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRepositoryPolicyResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
