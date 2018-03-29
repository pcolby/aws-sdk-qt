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

#include "untagresponse.h"
#include "untagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ResourceGroups {

/**
 * @class  UntagResponse
 *
 * @brief  Handles ResourceGroups Untag responses.
 *
 * @see    ResourceGroupsClient::untag
 */

/**
 * @brief  Constructs a new UntagResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UntagResponse::UntagResponse(
        const UntagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsResponse(new UntagResponsePrivate(this), parent)
{
    setRequest(new UntagRequest(request));
    setReply(reply);
}

const UntagRequest * UntagResponse::request() const
{
    Q_D(const UntagResponse);
    return static_cast<const UntagRequest *>(d->request);
}

/**
 * @brief  Parse a ResourceGroups Untag response.
 *
 * @param  response  Response to parse.
 */
void UntagResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UntagResponsePrivate
 *
 * @brief  Private implementation for UntagResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UntagResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UntagResponse instance.
 */
UntagResponsePrivate::UntagResponsePrivate(
    UntagQueueResponse * const q) : UntagPrivate(q)
{

}

/**
 * @brief  Parse an ResourceGroups UntagResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UntagResponsePrivate::UntagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagResponse"));
    /// @todo
}

} // namespace ResourceGroups
} // namespace AWS
