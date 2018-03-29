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

#include "codestarresponse.h"
#include "codestarresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeStar {

/**
 * @class  CodeStarResponse
 *
 * @brief  Handles CodeStar CodeStar responses.
 *
 * @see    CodeStarClient::codeStar
 */

/**
 * @brief  Constructs a new CodeStarResponse object.
 *
 * @param  parent   This object's parent.
 */
CodeStarResponse::CodeStarResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CodeStarResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  CodeStarResponsePrivate
 *
 * @brief  Private implementation for CodeStarResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CodeStarResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CodeStarResponse instance.
 */
CodeStarResponsePrivate::CodeStarResponsePrivate(
    CodeStarQueueResponse * const q) : CodeStarPrivate(q)
{

}

} // namespace CodeStar
} // namespace QtAws
