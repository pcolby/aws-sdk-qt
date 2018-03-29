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

#include "transcribeserviceclientresponse.h"
#include "transcribeserviceclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/**
 * @class  TranscribeServiceClientResponse
 *
 * @brief  Handles TranscribeService TranscribeServiceClient responses.
 *
 * @see    TranscribeServiceClient::transcribeServiceClient
 */

/**
 * @brief  Constructs a new TranscribeServiceClientResponse object.
 *
 * @param  parent   This object's parent.
 */
TranscribeServiceClientResponse::TranscribeServiceClientResponse(QObject * const parent)
    : AwsAbstractResponse(new TranscribeServiceClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  TranscribeServiceClientResponsePrivate
 *
 * @brief  Private implementation for TranscribeServiceClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TranscribeServiceClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TranscribeServiceClientResponse instance.
 */
TranscribeServiceClientResponsePrivate::TranscribeServiceClientResponsePrivate(
    TranscribeServiceClientQueueResponse * const q) : TranscribeServiceClientPrivate(q)
{

}

} // namespace TranscribeService
} // namespace QtAws
