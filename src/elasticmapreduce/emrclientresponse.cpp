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

#include "emrclientresponse.h"
#include "emrclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/**
 * @class  EmrClientResponse
 *
 * @brief  Handles EMR EmrClient responses.
 *
 * @see    EMRClient::emrClient
 */

/**
 * @brief  Constructs a new EmrClientResponse object.
 *
 * @param  parent   This object's parent.
 */
EmrClientResponse::EmrClientResponse(QObject * const parent)
    : AwsAbstractResponse(new EmrClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  EmrClientResponsePrivate
 *
 * @brief  Private implementation for EmrClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EmrClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EmrClientResponse instance.
 */
EmrClientResponsePrivate::EmrClientResponsePrivate(
    EmrClientQueueResponse * const q) : EmrClientPrivate(q)
{

}

} // namespace EMR
} // namespace QtAws
