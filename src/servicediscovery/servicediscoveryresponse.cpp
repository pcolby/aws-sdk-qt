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

#include "servicediscoveryresponse.h"
#include "servicediscoveryresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/**
 * @class  ServiceDiscoveryResponse
 *
 * @brief  Handles ServiceDiscovery ServiceDiscovery responses.
 *
 * @see    ServiceDiscoveryClient::serviceDiscovery
 */

/**
 * @brief  Constructs a new ServiceDiscoveryResponse object.
 *
 * @param  parent   This object's parent.
 */
ServiceDiscoveryResponse::ServiceDiscoveryResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ServiceDiscoveryResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  ServiceDiscoveryResponsePrivate
 *
 * @brief  Private implementation for ServiceDiscoveryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ServiceDiscoveryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ServiceDiscoveryResponse instance.
 */
ServiceDiscoveryResponsePrivate::ServiceDiscoveryResponsePrivate(
    ServiceDiscoveryQueueResponse * const q) : ServiceDiscoveryPrivate(q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
