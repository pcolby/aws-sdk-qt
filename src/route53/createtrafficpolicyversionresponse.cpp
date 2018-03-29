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

#include "createtrafficpolicyversionresponse.h"
#include "createtrafficpolicyversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  CreateTrafficPolicyVersionResponse
 *
 * @brief  Handles Route53 CreateTrafficPolicyVersion responses.
 *
 * @see    Route53Client::createTrafficPolicyVersion
 */

/**
 * @brief  Constructs a new CreateTrafficPolicyVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTrafficPolicyVersionResponse::CreateTrafficPolicyVersionResponse(
        const CreateTrafficPolicyVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateTrafficPolicyVersionResponsePrivate(this), parent)
{
    setRequest(new CreateTrafficPolicyVersionRequest(request));
    setReply(reply);
}

const CreateTrafficPolicyVersionRequest * CreateTrafficPolicyVersionResponse::request() const
{
    Q_D(const CreateTrafficPolicyVersionResponse);
    return static_cast<const CreateTrafficPolicyVersionRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 CreateTrafficPolicyVersion response.
 *
 * @param  response  Response to parse.
 */
void CreateTrafficPolicyVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateTrafficPolicyVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateTrafficPolicyVersionResponsePrivate
 *
 * @brief  Private implementation for CreateTrafficPolicyVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTrafficPolicyVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTrafficPolicyVersionResponse instance.
 */
CreateTrafficPolicyVersionResponsePrivate::CreateTrafficPolicyVersionResponsePrivate(
    CreateTrafficPolicyVersionResponse * const q) : Route53ResponsePrivate(q)
{

}

/**
 * @brief  Parse an Route53 CreateTrafficPolicyVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTrafficPolicyVersionResponsePrivate::parseCreateTrafficPolicyVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrafficPolicyVersionResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
