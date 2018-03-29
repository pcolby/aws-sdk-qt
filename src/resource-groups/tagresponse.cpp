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

#include "tagresponse.h"
#include "tagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroups {

/**
 * @class  TagResponse
 *
 * @brief  Handles ResourceGroups Tag responses.
 *
 * @see    ResourceGroupsClient::tag
 */

/**
 * @brief  Constructs a new TagResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TagResponse::TagResponse(
        const TagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsResponse(new TagResponsePrivate(this), parent)
{
    setRequest(new TagRequest(request));
    setReply(reply);
}

const TagRequest * TagResponse::request() const
{
    Q_D(const TagResponse);
    return static_cast<const TagRequest *>(d->request);
}

/**
 * @brief  Parse a ResourceGroups Tag response.
 *
 * @param  response  Response to parse.
 */
void TagResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TagResponsePrivate
 *
 * @brief  Private implementation for TagResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TagResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TagResponse instance.
 */
TagResponsePrivate::TagResponsePrivate(
    TagQueueResponse * const q) : TagPrivate(q)
{

}

/**
 * @brief  Parse an ResourceGroups TagResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TagResponsePrivate::TagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagResponse"));
    /// @todo
}

} // namespace ResourceGroups
} // namespace QtAws
