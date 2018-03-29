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

#include "createtrafficpolicyinstanceresponse.h"
#include "createtrafficpolicyinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  CreateTrafficPolicyInstanceResponse
 *
 * @brief  Handles Route53 CreateTrafficPolicyInstance responses.
 *
 * @see    Route53Client::createTrafficPolicyInstance
 */

/**
 * @brief  Constructs a new CreateTrafficPolicyInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTrafficPolicyInstanceResponse::CreateTrafficPolicyInstanceResponse(
        const CreateTrafficPolicyInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateTrafficPolicyInstanceResponsePrivate(this), parent)
{
    setRequest(new CreateTrafficPolicyInstanceRequest(request));
    setReply(reply);
}

const CreateTrafficPolicyInstanceRequest * CreateTrafficPolicyInstanceResponse::request() const
{
    Q_D(const CreateTrafficPolicyInstanceResponse);
    return static_cast<const CreateTrafficPolicyInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 CreateTrafficPolicyInstance response.
 *
 * @param  response  Response to parse.
 */
void CreateTrafficPolicyInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateTrafficPolicyInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateTrafficPolicyInstanceResponsePrivate
 *
 * @brief  Private implementation for CreateTrafficPolicyInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTrafficPolicyInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTrafficPolicyInstanceResponse instance.
 */
CreateTrafficPolicyInstanceResponsePrivate::CreateTrafficPolicyInstanceResponsePrivate(
    CreateTrafficPolicyInstanceResponse * const q) : Route53ResponsePrivate(q)
{

}

/**
 * @brief  Parse an Route53 CreateTrafficPolicyInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTrafficPolicyInstanceResponsePrivate::parseCreateTrafficPolicyInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrafficPolicyInstanceResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
