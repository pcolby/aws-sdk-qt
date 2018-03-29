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

#include "migrationhubclientresponse.h"
#include "migrationhubclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/**
 * @class  MigrationHubClientResponse
 *
 * @brief  Handles MigrationHub MigrationHubClient responses.
 *
 * @see    MigrationHubClient::migrationHubClient
 */

/**
 * @brief  Constructs a new MigrationHubClientResponse object.
 *
 * @param  parent   This object's parent.
 */
MigrationHubClientResponse::MigrationHubClientResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MigrationHubClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  MigrationHubClientResponsePrivate
 *
 * @brief  Private implementation for MigrationHubClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MigrationHubClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MigrationHubClientResponse instance.
 */
MigrationHubClientResponsePrivate::MigrationHubClientResponsePrivate(
    MigrationHubClientQueueResponse * const q) : MigrationHubClientPrivate(q)
{

}

} // namespace MigrationHub
} // namespace QtAws
