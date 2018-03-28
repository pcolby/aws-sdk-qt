/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "mturkclientresponse.h"
#include "mturkclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  MTurkClientResponse
 *
 * @brief  Handles MTurk MTurkClient responses.
 *
 * @see    MTurkClient::mTurkClient
 */

/**
 * @brief  Constructs a new MTurkClientResponse object.
 *
 * @param  parent   This object's parent.
 */
MTurkClientResponse::MTurkClientResponse(QObject * const parent)
    : AwsAbstractResponse(new MTurkClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  MTurkClientResponsePrivate
 *
 * @brief  Private implementation for MTurkClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MTurkClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MTurkClientResponse instance.
 */
MTurkClientResponsePrivate::MTurkClientResponsePrivate(
    MTurkClientQueueResponse * const q) : MTurkClientPrivate(q)
{

}

} // namespace MTurk
} // namespace AWS
