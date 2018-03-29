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

#include "supportclientresponse.h"
#include "supportclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Support {

/**
 * @class  SupportClientResponse
 *
 * @brief  Handles Support SupportClient responses.
 *
 * @see    SupportClient::supportClient
 */

/**
 * @brief  Constructs a new SupportClientResponse object.
 *
 * @param  parent   This object's parent.
 */
SupportClientResponse::SupportClientResponse(QObject * const parent)
    : AwsAbstractResponse(new SupportClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  SupportClientResponsePrivate
 *
 * @brief  Private implementation for SupportClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SupportClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SupportClientResponse instance.
 */
SupportClientResponsePrivate::SupportClientResponsePrivate(
    SupportClientQueueResponse * const q) : SupportClientPrivate(q)
{

}

} // namespace Support
} // namespace QtAws
