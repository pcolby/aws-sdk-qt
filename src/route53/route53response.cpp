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

#include "route53response.h"
#include "route53response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  Route53Response
 *
 * @brief  Handles Route53 Route53 responses.
 *
 * @see    Route53Client::route53
 */

/**
 * @brief  Constructs a new Route53Response object.
 *
 * @param  parent   This object's parent.
 */
Route53Response::Route53Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new Route53ResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  Route53ResponsePrivate
 *
 * @brief  Private implementation for Route53Response.
 */

/**
 * @internal
 *
 * @brief  Constructs a new Route53ResponsePrivate object.
 *
 * @param  q  Pointer to this object's public Route53Response instance.
 */
Route53ResponsePrivate::Route53ResponsePrivate(
    Route53QueueResponse * const q) : Route53Private(q)
{

}

} // namespace Route53
} // namespace QtAws
