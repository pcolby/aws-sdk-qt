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

#include "describebuildresponse.h"
#include "describebuildresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  DescribeBuildResponse
 *
 * @brief  Handles GameLift DescribeBuild responses.
 *
 * @see    GameLiftClient::describeBuild
 */

/**
 * @brief  Constructs a new DescribeBuildResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeBuildResponse::DescribeBuildResponse(
        const DescribeBuildRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DescribeBuildResponsePrivate(this), parent)
{
    setRequest(new DescribeBuildRequest(request));
    setReply(reply);
}

const DescribeBuildRequest * DescribeBuildResponse::request() const
{
    Q_D(const DescribeBuildResponse);
    return static_cast<const DescribeBuildRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeBuild response.
 *
 * @param  response  Response to parse.
 */
void DescribeBuildResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeBuildResponsePrivate
 *
 * @brief  Private implementation for DescribeBuildResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBuildResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeBuildResponse instance.
 */
DescribeBuildResponsePrivate::DescribeBuildResponsePrivate(
    DescribeBuildQueueResponse * const q) : DescribeBuildPrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeBuildResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeBuildResponsePrivate::DescribeBuildResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBuildResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
