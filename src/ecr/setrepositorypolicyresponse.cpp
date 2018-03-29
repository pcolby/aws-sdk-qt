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

#include "setrepositorypolicyresponse.h"
#include "setrepositorypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/**
 * @class  SetRepositoryPolicyResponse
 *
 * @brief  Handles ECR SetRepositoryPolicy responses.
 *
 * @see    ECRClient::setRepositoryPolicy
 */

/**
 * @brief  Constructs a new SetRepositoryPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetRepositoryPolicyResponse::SetRepositoryPolicyResponse(
        const SetRepositoryPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new SetRepositoryPolicyResponsePrivate(this), parent)
{
    setRequest(new SetRepositoryPolicyRequest(request));
    setReply(reply);
}

const SetRepositoryPolicyRequest * SetRepositoryPolicyResponse::request() const
{
    Q_D(const SetRepositoryPolicyResponse);
    return static_cast<const SetRepositoryPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a ECR SetRepositoryPolicy response.
 *
 * @param  response  Response to parse.
 */
void SetRepositoryPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetRepositoryPolicyResponsePrivate
 *
 * @brief  Private implementation for SetRepositoryPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetRepositoryPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetRepositoryPolicyResponse instance.
 */
SetRepositoryPolicyResponsePrivate::SetRepositoryPolicyResponsePrivate(
    SetRepositoryPolicyQueueResponse * const q) : SetRepositoryPolicyPrivate(q)
{

}

/**
 * @brief  Parse an ECR SetRepositoryPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetRepositoryPolicyResponsePrivate::SetRepositoryPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetRepositoryPolicyResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
