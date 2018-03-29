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

#include "stopbuildresponse.h"
#include "stopbuildresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/**
 * @class  StopBuildResponse
 *
 * @brief  Handles CodeBuild StopBuild responses.
 *
 * @see    CodeBuildClient::stopBuild
 */

/**
 * @brief  Constructs a new StopBuildResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopBuildResponse::StopBuildResponse(
        const StopBuildRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new StopBuildResponsePrivate(this), parent)
{
    setRequest(new StopBuildRequest(request));
    setReply(reply);
}

const StopBuildRequest * StopBuildResponse::request() const
{
    Q_D(const StopBuildResponse);
    return static_cast<const StopBuildRequest *>(d->request);
}

/**
 * @brief  Parse a CodeBuild StopBuild response.
 *
 * @param  response  Response to parse.
 */
void StopBuildResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopBuildResponsePrivate
 *
 * @brief  Private implementation for StopBuildResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopBuildResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopBuildResponse instance.
 */
StopBuildResponsePrivate::StopBuildResponsePrivate(
    StopBuildResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeBuild StopBuildResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopBuildResponsePrivate::StopBuildResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopBuildResponse"));
    /// @todo
}

} // namespace CodeBuild
} // namespace QtAws
