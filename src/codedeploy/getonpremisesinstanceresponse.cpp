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

#include "getonpremisesinstanceresponse.h"
#include "getonpremisesinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  GetOnPremisesInstanceResponse
 *
 * @brief  Handles CodeDeploy GetOnPremisesInstance responses.
 *
 * @see    CodeDeployClient::getOnPremisesInstance
 */

/**
 * @brief  Constructs a new GetOnPremisesInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetOnPremisesInstanceResponse::GetOnPremisesInstanceResponse(
        const GetOnPremisesInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new GetOnPremisesInstanceResponsePrivate(this), parent)
{
    setRequest(new GetOnPremisesInstanceRequest(request));
    setReply(reply);
}

const GetOnPremisesInstanceRequest * GetOnPremisesInstanceResponse::request() const
{
    Q_D(const GetOnPremisesInstanceResponse);
    return static_cast<const GetOnPremisesInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy GetOnPremisesInstance response.
 *
 * @param  response  Response to parse.
 */
void GetOnPremisesInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetOnPremisesInstanceResponsePrivate
 *
 * @brief  Private implementation for GetOnPremisesInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetOnPremisesInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetOnPremisesInstanceResponse instance.
 */
GetOnPremisesInstanceResponsePrivate::GetOnPremisesInstanceResponsePrivate(
    GetOnPremisesInstanceResponse * const q) : CodeDeployResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy GetOnPremisesInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetOnPremisesInstanceResponsePrivate::GetOnPremisesInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOnPremisesInstanceResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
