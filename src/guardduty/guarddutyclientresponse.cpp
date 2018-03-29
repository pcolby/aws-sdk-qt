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

#include "guarddutyclientresponse.h"
#include "guarddutyclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/**
 * @class  GuardDutyClientResponse
 *
 * @brief  Handles GuardDuty GuardDutyClient responses.
 *
 * @see    GuardDutyClient::guardDutyClient
 */

/**
 * @brief  Constructs a new GuardDutyClientResponse object.
 *
 * @param  parent   This object's parent.
 */
GuardDutyClientResponse::GuardDutyClientResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GuardDutyClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  GuardDutyClientResponsePrivate
 *
 * @brief  Private implementation for GuardDutyClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GuardDutyClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GuardDutyClientResponse instance.
 */
GuardDutyClientResponsePrivate::GuardDutyClientResponsePrivate(
    GuardDutyClientQueueResponse * const q) : GuardDutyClientPrivate(q)
{

}

} // namespace GuardDuty
} // namespace QtAws
