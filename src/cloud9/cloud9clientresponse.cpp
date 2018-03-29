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

#include "cloud9clientresponse.h"
#include "cloud9clientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Cloud9 {

/**
 * @class  Cloud9ClientResponse
 *
 * @brief  Handles Cloud9 Cloud9Client responses.
 *
 * @see    Cloud9Client::cloud9Client
 */

/**
 * @brief  Constructs a new Cloud9ClientResponse object.
 *
 * @param  parent   This object's parent.
 */
Cloud9ClientResponse::Cloud9ClientResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new Cloud9ClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  Cloud9ClientResponsePrivate
 *
 * @brief  Private implementation for Cloud9ClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new Cloud9ClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public Cloud9ClientResponse instance.
 */
Cloud9ClientResponsePrivate::Cloud9ClientResponsePrivate(
    Cloud9ClientQueueResponse * const q) : Cloud9ClientPrivate(q)
{

}

} // namespace Cloud9
} // namespace QtAws
