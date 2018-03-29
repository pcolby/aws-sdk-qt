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

#include "serverlessapplicationrepositoryclientresponse.h"
#include "serverlessapplicationrepositoryclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServerlessApplicationRepository {

/**
 * @class  ServerlessApplicationRepositoryClientResponse
 *
 * @brief  Handles ServerlessApplicationRepository ServerlessApplicationRepositoryClient responses.
 *
 * @see    ServerlessApplicationRepositoryClient::serverlessApplicationRepositoryClient
 */

/**
 * @brief  Constructs a new ServerlessApplicationRepositoryClientResponse object.
 *
 * @param  parent   This object's parent.
 */
ServerlessApplicationRepositoryClientResponse::ServerlessApplicationRepositoryClientResponse(QObject * const parent)
    : AwsAbstractResponse(new ServerlessApplicationRepositoryClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  ServerlessApplicationRepositoryClientResponsePrivate
 *
 * @brief  Private implementation for ServerlessApplicationRepositoryClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ServerlessApplicationRepositoryClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ServerlessApplicationRepositoryClientResponse instance.
 */
ServerlessApplicationRepositoryClientResponsePrivate::ServerlessApplicationRepositoryClientResponsePrivate(
    ServerlessApplicationRepositoryClientQueueResponse * const q) : ServerlessApplicationRepositoryClientPrivate(q)
{

}

} // namespace ServerlessApplicationRepository
} // namespace QtAws
