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

#include "getapplicationresponse.h"
#include "getapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeDeploy {

/**
 * @class  GetApplicationResponse
 *
 * @brief  Handles CodeDeploy GetApplication responses.
 *
 * @see    CodeDeployClient::getApplication
 */

/**
 * @brief  Constructs a new GetApplicationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetApplicationResponse::GetApplicationResponse(
        const GetApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new GetApplicationResponsePrivate(this), parent)
{
    setRequest(new GetApplicationRequest(request));
    setReply(reply);
}

const GetApplicationRequest * GetApplicationResponse::request() const
{
    Q_D(const GetApplicationResponse);
    return static_cast<const GetApplicationRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy GetApplication response.
 *
 * @param  response  Response to parse.
 */
void GetApplicationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetApplicationResponsePrivate
 *
 * @brief  Private implementation for GetApplicationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetApplicationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetApplicationResponse instance.
 */
GetApplicationResponsePrivate::GetApplicationResponsePrivate(
    GetApplicationQueueResponse * const q) : GetApplicationPrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy GetApplicationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetApplicationResponsePrivate::GetApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApplicationResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace AWS
