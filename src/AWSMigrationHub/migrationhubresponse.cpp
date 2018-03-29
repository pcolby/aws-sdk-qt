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

#include "migrationhubresponse.h"
#include "migrationhubresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/**
 * @class  MigrationHubResponse
 *
 * @brief  Handles MigrationHub MigrationHub responses.
 *
 * @see    MigrationHubClient::migrationHub
 */

/**
 * @brief  Constructs a new MigrationHubResponse object.
 *
 * @param  parent   This object's parent.
 */
MigrationHubResponse::MigrationHubResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MigrationHubResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  MigrationHubResponsePrivate
 *
 * @brief  Private implementation for MigrationHubResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MigrationHubResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MigrationHubResponse instance.
 */
MigrationHubResponsePrivate::MigrationHubResponsePrivate(
    MigrationHubQueueResponse * const q) : MigrationHubPrivate(q)
{

}

} // namespace MigrationHub
} // namespace QtAws
