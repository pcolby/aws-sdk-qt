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

#include "listbuildsresponse.h"
#include "listbuildsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/**
 * @class  ListBuildsResponse
 *
 * @brief  Handles CodeBuild ListBuilds responses.
 *
 * @see    CodeBuildClient::listBuilds
 */

/**
 * @brief  Constructs a new ListBuildsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListBuildsResponse::ListBuildsResponse(
        const ListBuildsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListBuildsResponse(new ListBuildsResponsePrivate(this), parent)
{
    setRequest(new ListBuildsRequest(request));
    setReply(reply);
}

const ListBuildsRequest * ListBuildsResponse::request() const
{
    Q_D(const ListBuildsResponse);
    return static_cast<const ListBuildsRequest *>(d->request);
}

/**
 * @brief  Parse a CodeBuild ListBuilds response.
 *
 * @param  response  Response to parse.
 */
void ListBuildsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListBuildsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListBuildsResponsePrivate
 *
 * @brief  Private implementation for ListBuildsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBuildsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListBuildsResponse instance.
 */
ListBuildsResponsePrivate::ListBuildsResponsePrivate(
    ListBuildsResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeBuild ListBuildsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListBuildsResponsePrivate::parseListBuildsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBuildsResponse"));
    /// @todo
}

} // namespace CodeBuild
} // namespace QtAws
