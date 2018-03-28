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

#include "codestarclientresponse.h"
#include "codestarclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeStar {

/**
 * @class  CodeStarClientResponse
 *
 * @brief  Handles  CodeStarClient responses.
 *
 * @see    Client::codeStarClient
 */

/**
 * @brief  Constructs a new CodeStarClientResponse object.
 *
 * @param  parent   This object's parent.
 */
CodeStarClientResponse::CodeStarClientResponse(QObject * const parent)
    : AwsAbstractResponse(new CodeStarClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  CodeStarClientResponsePrivate
 *
 * @brief  Private implementation for CodeStarClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CodeStarClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CodeStarClientResponse instance.
 */
CodeStarClientResponsePrivate::CodeStarClientResponsePrivate(
    CodeStarClientQueueResponse * const q) : CodeStarClientPrivate(q)
{

}

} // namespace CodeStar
} // namespace AWS
