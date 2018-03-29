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

#include "getrepositorypolicyresponse.h"
#include "getrepositorypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/**
 * @class  GetRepositoryPolicyResponse
 *
 * @brief  Handles ECR GetRepositoryPolicy responses.
 *
 * @see    ECRClient::getRepositoryPolicy
 */

/**
 * @brief  Constructs a new GetRepositoryPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRepositoryPolicyResponse::GetRepositoryPolicyResponse(
        const GetRepositoryPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new GetRepositoryPolicyResponsePrivate(this), parent)
{
    setRequest(new GetRepositoryPolicyRequest(request));
    setReply(reply);
}

const GetRepositoryPolicyRequest * GetRepositoryPolicyResponse::request() const
{
    Q_D(const GetRepositoryPolicyResponse);
    return static_cast<const GetRepositoryPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a ECR GetRepositoryPolicy response.
 *
 * @param  response  Response to parse.
 */
void GetRepositoryPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetRepositoryPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRepositoryPolicyResponsePrivate
 *
 * @brief  Private implementation for GetRepositoryPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRepositoryPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRepositoryPolicyResponse instance.
 */
GetRepositoryPolicyResponsePrivate::GetRepositoryPolicyResponsePrivate(
    GetRepositoryPolicyResponse * const q) : ECRResponsePrivate(q)
{

}

/**
 * @brief  Parse an ECR GetRepositoryPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRepositoryPolicyResponsePrivate::GetRepositoryPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRepositoryPolicyResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
