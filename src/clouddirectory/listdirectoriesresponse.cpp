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

#include "listdirectoriesresponse.h"
#include "listdirectoriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  ListDirectoriesResponse
 *
 * @brief  Handles CloudDirectory ListDirectories responses.
 *
 * @see    CloudDirectoryClient::listDirectories
 */

/**
 * @brief  Constructs a new ListDirectoriesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDirectoriesResponse::ListDirectoriesResponse(
        const ListDirectoriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListDirectoriesResponsePrivate(this), parent)
{
    setRequest(new ListDirectoriesRequest(request));
    setReply(reply);
}

const ListDirectoriesRequest * ListDirectoriesResponse::request() const
{
    Q_D(const ListDirectoriesResponse);
    return static_cast<const ListDirectoriesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory ListDirectories response.
 *
 * @param  response  Response to parse.
 */
void ListDirectoriesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDirectoriesResponsePrivate
 *
 * @brief  Private implementation for ListDirectoriesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDirectoriesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDirectoriesResponse instance.
 */
ListDirectoriesResponsePrivate::ListDirectoriesResponsePrivate(
    ListDirectoriesQueueResponse * const q) : ListDirectoriesPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory ListDirectoriesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDirectoriesResponsePrivate::ListDirectoriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDirectoriesResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
