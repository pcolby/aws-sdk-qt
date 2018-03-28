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

#include "smsclientresponse.h"
#include "smsclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace SMS {

/**
 * @class  SmsClientResponse
 *
 * @brief  Handles SMS SmsClient responses.
 *
 * @see    SMSClient::smsClient
 */

/**
 * @brief  Constructs a new SmsClientResponse object.
 *
 * @param  parent   This object's parent.
 */
SmsClientResponse::SmsClientResponse(QObject * const parent)
    : AwsAbstractResponse(new SmsClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  SmsClientResponsePrivate
 *
 * @brief  Private implementation for SmsClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SmsClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SmsClientResponse instance.
 */
SmsClientResponsePrivate::SmsClientResponsePrivate(
    SmsClientQueueResponse * const q) : SmsClientPrivate(q)
{

}

} // namespace SMS
} // namespace AWS
