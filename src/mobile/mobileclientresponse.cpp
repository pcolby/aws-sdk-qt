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

#include "mobileclientresponse.h"
#include "mobileclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mobile {

/**
 * @class  MobileClientResponse
 *
 * @brief  Handles Mobile MobileClient responses.
 *
 * @see    MobileClient::mobileClient
 */

/**
 * @brief  Constructs a new MobileClientResponse object.
 *
 * @param  parent   This object's parent.
 */
MobileClientResponse::MobileClientResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MobileClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  MobileClientResponsePrivate
 *
 * @brief  Private implementation for MobileClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MobileClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MobileClientResponse instance.
 */
MobileClientResponsePrivate::MobileClientResponsePrivate(
    MobileClientQueueResponse * const q) : MobileClientPrivate(q)
{

}

} // namespace Mobile
} // namespace QtAws
