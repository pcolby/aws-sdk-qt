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

#include "lambdaclientresponse.h"
#include "lambdaclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/**
 * @class  LambdaClientResponse
 *
 * @brief  Handles Lambda LambdaClient responses.
 *
 * @see    LambdaClient::lambdaClient
 */

/**
 * @brief  Constructs a new LambdaClientResponse object.
 *
 * @param  parent   This object's parent.
 */
LambdaClientResponse::LambdaClientResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new LambdaClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  LambdaClientResponsePrivate
 *
 * @brief  Private implementation for LambdaClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new LambdaClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public LambdaClientResponse instance.
 */
LambdaClientResponsePrivate::LambdaClientResponsePrivate(
    LambdaClientQueueResponse * const q) : LambdaClientPrivate(q)
{

}

} // namespace Lambda
} // namespace QtAws
