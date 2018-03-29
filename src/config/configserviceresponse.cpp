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

#include "configserviceresponse.h"
#include "configserviceresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  ConfigServiceResponse
 *
 * @brief  Handles ConfigService ConfigService responses.
 *
 * @see    ConfigServiceClient::configService
 */

/**
 * @brief  Constructs a new ConfigServiceResponse object.
 *
 * @param  parent   This object's parent.
 */
ConfigServiceResponse::ConfigServiceResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ConfigServiceResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  ConfigServiceResponsePrivate
 *
 * @brief  Private implementation for ConfigServiceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConfigServiceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ConfigServiceResponse instance.
 */
ConfigServiceResponsePrivate::ConfigServiceResponsePrivate(
    ConfigServiceQueueResponse * const q) : ConfigServicePrivate(q)
{

}

} // namespace ConfigService
} // namespace QtAws
