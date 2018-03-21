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

#include "cloudhsmclientresponse.h"
#include "cloudhsmclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace  {

/**
 * @class  CloudHSMClientResponse
 *
 * @brief  Handles  CloudHSMClient responses.
 *
 * @see    Client::cloudHSMClient
 */

/**
 * @brief  Constructs a new CloudHSMClientResponse object.
 *
 * @param  parent   This object's parent.
 */
CloudHSMClientResponse::CloudHSMClientResponse(QObject * const parent)
    : AwsAbstractResponse(new CloudHSMClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  CloudHSMClientResponsePrivate
 *
 * @brief  Private implementation for CloudHSMClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudHSMClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CloudHSMClientResponse instance.
 */
CloudHSMClientResponsePrivate::CloudHSMClientResponsePrivate(
    CloudHSMClientQueueResponse * const q) : CloudHSMClientPrivate(q)
{

}

} // namespace 
} // namespace AWS
