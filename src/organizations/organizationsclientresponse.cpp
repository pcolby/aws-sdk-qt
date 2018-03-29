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

#include "organizationsclientresponse.h"
#include "organizationsclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  OrganizationsClientResponse
 *
 * @brief  Handles Organizations OrganizationsClient responses.
 *
 * @see    OrganizationsClient::organizationsClient
 */

/**
 * @brief  Constructs a new OrganizationsClientResponse object.
 *
 * @param  parent   This object's parent.
 */
OrganizationsClientResponse::OrganizationsClientResponse(QObject * const parent)
    : AwsAbstractResponse(new OrganizationsClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  OrganizationsClientResponsePrivate
 *
 * @brief  Private implementation for OrganizationsClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new OrganizationsClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public OrganizationsClientResponse instance.
 */
OrganizationsClientResponsePrivate::OrganizationsClientResponsePrivate(
    OrganizationsClientQueueResponse * const q) : OrganizationsClientPrivate(q)
{

}

} // namespace Organizations
} // namespace AWS
