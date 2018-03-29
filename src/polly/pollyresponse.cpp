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

#include "pollyresponse.h"
#include "pollyresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Polly {

/**
 * @class  PollyResponse
 *
 * @brief  Handles Polly Polly responses.
 *
 * @see    PollyClient::polly
 */

/**
 * @brief  Constructs a new PollyResponse object.
 *
 * @param  parent   This object's parent.
 */
PollyResponse::PollyResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new PollyResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  PollyResponsePrivate
 *
 * @brief  Private implementation for PollyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PollyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PollyResponse instance.
 */
PollyResponsePrivate::PollyResponsePrivate(
    PollyQueueResponse * const q) : PollyPrivate(q)
{

}

} // namespace Polly
} // namespace QtAws
