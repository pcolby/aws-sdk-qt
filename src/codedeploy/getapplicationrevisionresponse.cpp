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

#include "getapplicationrevisionresponse.h"
#include "getapplicationrevisionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  GetApplicationRevisionResponse
 *
 * @brief  Handles CodeDeploy GetApplicationRevision responses.
 *
 * @see    CodeDeployClient::getApplicationRevision
 */

/**
 * @brief  Constructs a new GetApplicationRevisionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetApplicationRevisionResponse::GetApplicationRevisionResponse(
        const GetApplicationRevisionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new GetApplicationRevisionResponsePrivate(this), parent)
{
    setRequest(new GetApplicationRevisionRequest(request));
    setReply(reply);
}

const GetApplicationRevisionRequest * GetApplicationRevisionResponse::request() const
{
    Q_D(const GetApplicationRevisionResponse);
    return static_cast<const GetApplicationRevisionRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy GetApplicationRevision response.
 *
 * @param  response  Response to parse.
 */
void GetApplicationRevisionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetApplicationRevisionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetApplicationRevisionResponsePrivate
 *
 * @brief  Private implementation for GetApplicationRevisionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetApplicationRevisionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetApplicationRevisionResponse instance.
 */
GetApplicationRevisionResponsePrivate::GetApplicationRevisionResponsePrivate(
    GetApplicationRevisionResponse * const q) : CodeDeployResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy GetApplicationRevisionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetApplicationRevisionResponsePrivate::parseGetApplicationRevisionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApplicationRevisionResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
