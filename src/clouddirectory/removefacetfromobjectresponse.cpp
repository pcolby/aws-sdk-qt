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

#include "removefacetfromobjectresponse.h"
#include "removefacetfromobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  RemoveFacetFromObjectResponse
 *
 * @brief  Handles CloudDirectory RemoveFacetFromObject responses.
 *
 * @see    CloudDirectoryClient::removeFacetFromObject
 */

/**
 * @brief  Constructs a new RemoveFacetFromObjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveFacetFromObjectResponse::RemoveFacetFromObjectResponse(
        const RemoveFacetFromObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new RemoveFacetFromObjectResponsePrivate(this), parent)
{
    setRequest(new RemoveFacetFromObjectRequest(request));
    setReply(reply);
}

const RemoveFacetFromObjectRequest * RemoveFacetFromObjectResponse::request() const
{
    Q_D(const RemoveFacetFromObjectResponse);
    return static_cast<const RemoveFacetFromObjectRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory RemoveFacetFromObject response.
 *
 * @param  response  Response to parse.
 */
void RemoveFacetFromObjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveFacetFromObjectResponsePrivate
 *
 * @brief  Private implementation for RemoveFacetFromObjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveFacetFromObjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveFacetFromObjectResponse instance.
 */
RemoveFacetFromObjectResponsePrivate::RemoveFacetFromObjectResponsePrivate(
    RemoveFacetFromObjectQueueResponse * const q) : RemoveFacetFromObjectPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory RemoveFacetFromObjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveFacetFromObjectResponsePrivate::RemoveFacetFromObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveFacetFromObjectResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
