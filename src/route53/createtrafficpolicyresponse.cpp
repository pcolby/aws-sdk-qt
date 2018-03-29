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

#include "createtrafficpolicyresponse.h"
#include "createtrafficpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  CreateTrafficPolicyResponse
 *
 * @brief  Handles Route53 CreateTrafficPolicy responses.
 *
 * @see    Route53Client::createTrafficPolicy
 */

/**
 * @brief  Constructs a new CreateTrafficPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTrafficPolicyResponse::CreateTrafficPolicyResponse(
        const CreateTrafficPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateTrafficPolicyResponsePrivate(this), parent)
{
    setRequest(new CreateTrafficPolicyRequest(request));
    setReply(reply);
}

const CreateTrafficPolicyRequest * CreateTrafficPolicyResponse::request() const
{
    Q_D(const CreateTrafficPolicyResponse);
    return static_cast<const CreateTrafficPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 CreateTrafficPolicy response.
 *
 * @param  response  Response to parse.
 */
void CreateTrafficPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateTrafficPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateTrafficPolicyResponsePrivate
 *
 * @brief  Private implementation for CreateTrafficPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTrafficPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTrafficPolicyResponse instance.
 */
CreateTrafficPolicyResponsePrivate::CreateTrafficPolicyResponsePrivate(
    CreateTrafficPolicyResponse * const q) : Route53ResponsePrivate(q)
{

}

/**
 * @brief  Parse an Route53 CreateTrafficPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTrafficPolicyResponsePrivate::CreateTrafficPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrafficPolicyResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
