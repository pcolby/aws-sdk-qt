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

#include "startbuildresponse.h"
#include "startbuildresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/**
 * @class  StartBuildResponse
 *
 * @brief  Handles CodeBuild StartBuild responses.
 *
 * @see    CodeBuildClient::startBuild
 */

/**
 * @brief  Constructs a new StartBuildResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartBuildResponse::StartBuildResponse(
        const StartBuildRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new StartBuildResponsePrivate(this), parent)
{
    setRequest(new StartBuildRequest(request));
    setReply(reply);
}

const StartBuildRequest * StartBuildResponse::request() const
{
    Q_D(const StartBuildResponse);
    return static_cast<const StartBuildRequest *>(d->request);
}

/**
 * @brief  Parse a CodeBuild StartBuild response.
 *
 * @param  response  Response to parse.
 */
void StartBuildResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartBuildResponsePrivate
 *
 * @brief  Private implementation for StartBuildResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartBuildResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartBuildResponse instance.
 */
StartBuildResponsePrivate::StartBuildResponsePrivate(
    StartBuildResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeBuild StartBuildResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartBuildResponsePrivate::StartBuildResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartBuildResponse"));
    /// @todo
}

} // namespace CodeBuild
} // namespace QtAws
