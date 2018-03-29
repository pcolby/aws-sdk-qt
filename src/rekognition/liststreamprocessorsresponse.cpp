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

#include "liststreamprocessorsresponse.h"
#include "liststreamprocessorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/**
 * @class  ListStreamProcessorsResponse
 *
 * @brief  Handles Rekognition ListStreamProcessors responses.
 *
 * @see    RekognitionClient::listStreamProcessors
 */

/**
 * @brief  Constructs a new ListStreamProcessorsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListStreamProcessorsResponse::ListStreamProcessorsResponse(
        const ListStreamProcessorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new ListStreamProcessorsResponsePrivate(this), parent)
{
    setRequest(new ListStreamProcessorsRequest(request));
    setReply(reply);
}

const ListStreamProcessorsRequest * ListStreamProcessorsResponse::request() const
{
    Q_D(const ListStreamProcessorsResponse);
    return static_cast<const ListStreamProcessorsRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition ListStreamProcessors response.
 *
 * @param  response  Response to parse.
 */
void ListStreamProcessorsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListStreamProcessorsResponsePrivate
 *
 * @brief  Private implementation for ListStreamProcessorsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListStreamProcessorsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListStreamProcessorsResponse instance.
 */
ListStreamProcessorsResponsePrivate::ListStreamProcessorsResponsePrivate(
    ListStreamProcessorsQueueResponse * const q) : ListStreamProcessorsPrivate(q)
{

}

/**
 * @brief  Parse an Rekognition ListStreamProcessorsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListStreamProcessorsResponsePrivate::ListStreamProcessorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStreamProcessorsResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
