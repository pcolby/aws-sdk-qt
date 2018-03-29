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

#include "listimagesresponse.h"
#include "listimagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/**
 * @class  ListImagesResponse
 *
 * @brief  Handles ECR ListImages responses.
 *
 * @see    ECRClient::listImages
 */

/**
 * @brief  Constructs a new ListImagesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListImagesResponse::ListImagesResponse(
        const ListImagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListImagesResponse(new ListImagesResponsePrivate(this), parent)
{
    setRequest(new ListImagesRequest(request));
    setReply(reply);
}

const ListImagesRequest * ListImagesResponse::request() const
{
    Q_D(const ListImagesResponse);
    return static_cast<const ListImagesRequest *>(d->request);
}

/**
 * @brief  Parse a ECR ListImages response.
 *
 * @param  response  Response to parse.
 */
void ListImagesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListImagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListImagesResponsePrivate
 *
 * @brief  Private implementation for ListImagesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListImagesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListImagesResponse instance.
 */
ListImagesResponsePrivate::ListImagesResponsePrivate(
    ListImagesResponse * const q) : ECRResponsePrivate(q)
{

}

/**
 * @brief  Parse an ECR ListImagesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListImagesResponsePrivate::parseListImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListImagesResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
