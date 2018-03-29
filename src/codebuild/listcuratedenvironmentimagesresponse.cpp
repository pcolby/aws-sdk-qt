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

#include "listcuratedenvironmentimagesresponse.h"
#include "listcuratedenvironmentimagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/**
 * @class  ListCuratedEnvironmentImagesResponse
 *
 * @brief  Handles CodeBuild ListCuratedEnvironmentImages responses.
 *
 * @see    CodeBuildClient::listCuratedEnvironmentImages
 */

/**
 * @brief  Constructs a new ListCuratedEnvironmentImagesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListCuratedEnvironmentImagesResponse::ListCuratedEnvironmentImagesResponse(
        const ListCuratedEnvironmentImagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListCuratedEnvironmentImagesResponse(new ListCuratedEnvironmentImagesResponsePrivate(this), parent)
{
    setRequest(new ListCuratedEnvironmentImagesRequest(request));
    setReply(reply);
}

const ListCuratedEnvironmentImagesRequest * ListCuratedEnvironmentImagesResponse::request() const
{
    Q_D(const ListCuratedEnvironmentImagesResponse);
    return static_cast<const ListCuratedEnvironmentImagesRequest *>(d->request);
}

/**
 * @brief  Parse a CodeBuild ListCuratedEnvironmentImages response.
 *
 * @param  response  Response to parse.
 */
void ListCuratedEnvironmentImagesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListCuratedEnvironmentImagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListCuratedEnvironmentImagesResponsePrivate
 *
 * @brief  Private implementation for ListCuratedEnvironmentImagesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCuratedEnvironmentImagesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListCuratedEnvironmentImagesResponse instance.
 */
ListCuratedEnvironmentImagesResponsePrivate::ListCuratedEnvironmentImagesResponsePrivate(
    ListCuratedEnvironmentImagesResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeBuild ListCuratedEnvironmentImagesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListCuratedEnvironmentImagesResponsePrivate::parseListCuratedEnvironmentImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCuratedEnvironmentImagesResponse"));
    /// @todo
}

} // namespace CodeBuild
} // namespace QtAws
