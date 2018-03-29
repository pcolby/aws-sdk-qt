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

#include "mediastoreresponse.h"
#include "mediastoreresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/**
 * @class  MediaStoreResponse
 *
 * @brief  Handles MediaStore MediaStore responses.
 *
 * @see    MediaStoreClient::mediaStore
 */

/**
 * @brief  Constructs a new MediaStoreResponse object.
 *
 * @param  parent   This object's parent.
 */
MediaStoreResponse::MediaStoreResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MediaStoreResponsePrivate(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void MediaStoreResponse::parseFailure(QIODevice &response)
{
    Q_D(MediaStoreResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/**
 * @internal
 *
 * @class  MediaStoreResponsePrivate
 *
 * @brief  Private implementation for MediaStoreResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MediaStoreResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MediaStoreResponse instance.
 */
MediaStoreResponsePrivate::MediaStoreResponsePrivate(
    MediaStoreResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MediaStore
} // namespace QtAws
