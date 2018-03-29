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

#include "cloudsearchdomainclientresponse.h"
#include "cloudsearchdomainclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearchDomain {

/**
 * @class  CloudSearchDomainClientResponse
 *
 * @brief  Handles CloudSearchDomain CloudSearchDomainClient responses.
 *
 * @see    CloudSearchDomainClient::cloudSearchDomainClient
 */

/**
 * @brief  Constructs a new CloudSearchDomainClientResponse object.
 *
 * @param  parent   This object's parent.
 */
CloudSearchDomainClientResponse::CloudSearchDomainClientResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudSearchDomainClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  CloudSearchDomainClientResponsePrivate
 *
 * @brief  Private implementation for CloudSearchDomainClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudSearchDomainClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CloudSearchDomainClientResponse instance.
 */
CloudSearchDomainClientResponsePrivate::CloudSearchDomainClientResponsePrivate(
    CloudSearchDomainClientQueueResponse * const q) : CloudSearchDomainClientPrivate(q)
{

}

} // namespace CloudSearchDomain
} // namespace QtAws
