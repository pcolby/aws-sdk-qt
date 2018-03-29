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

#include "pollyclientresponse.h"
#include "pollyclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Polly {

/**
 * @class  PollyClientResponse
 *
 * @brief  Handles Polly PollyClient responses.
 *
 * @see    PollyClient::pollyClient
 */

/**
 * @brief  Constructs a new PollyClientResponse object.
 *
 * @param  parent   This object's parent.
 */
PollyClientResponse::PollyClientResponse(QObject * const parent)
    : AwsAbstractResponse(new PollyClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  PollyClientResponsePrivate
 *
 * @brief  Private implementation for PollyClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PollyClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PollyClientResponse instance.
 */
PollyClientResponsePrivate::PollyClientResponsePrivate(
    PollyClientQueueResponse * const q) : PollyClientPrivate(q)
{

}

} // namespace Polly
} // namespace QtAws
