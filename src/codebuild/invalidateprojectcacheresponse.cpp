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

#include "invalidateprojectcacheresponse.h"
#include "invalidateprojectcacheresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeBuild {

/**
 * @class  InvalidateProjectCacheResponse
 *
 * @brief  Handles CodeBuild InvalidateProjectCache responses.
 *
 * @see    CodeBuildClient::invalidateProjectCache
 */

/**
 * @brief  Constructs a new InvalidateProjectCacheResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
InvalidateProjectCacheResponse::InvalidateProjectCacheResponse(
        const InvalidateProjectCacheRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new InvalidateProjectCacheResponsePrivate(this), parent)
{
    setRequest(new InvalidateProjectCacheRequest(request));
    setReply(reply);
}

const InvalidateProjectCacheRequest * InvalidateProjectCacheResponse::request() const
{
    Q_D(const InvalidateProjectCacheResponse);
    return static_cast<const InvalidateProjectCacheRequest *>(d->request);
}

/**
 * @brief  Parse a CodeBuild InvalidateProjectCache response.
 *
 * @param  response  Response to parse.
 */
void InvalidateProjectCacheResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  InvalidateProjectCacheResponsePrivate
 *
 * @brief  Private implementation for InvalidateProjectCacheResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InvalidateProjectCacheResponsePrivate object.
 *
 * @param  q  Pointer to this object's public InvalidateProjectCacheResponse instance.
 */
InvalidateProjectCacheResponsePrivate::InvalidateProjectCacheResponsePrivate(
    InvalidateProjectCacheQueueResponse * const q) : InvalidateProjectCachePrivate(q)
{

}

/**
 * @brief  Parse an CodeBuild InvalidateProjectCacheResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void InvalidateProjectCacheResponsePrivate::InvalidateProjectCacheResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InvalidateProjectCacheResponse"));
    /// @todo
}

} // namespace CodeBuild
} // namespace AWS
