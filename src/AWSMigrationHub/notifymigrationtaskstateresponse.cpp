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

#include "notifymigrationtaskstateresponse.h"
#include "notifymigrationtaskstateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MigrationHub {

/**
 * @class  NotifyMigrationTaskStateResponse
 *
 * @brief  Handles MigrationHub NotifyMigrationTaskState responses.
 *
 * @see    MigrationHubClient::notifyMigrationTaskState
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
NotifyMigrationTaskStateResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new NotifyMigrationTaskStateResponsePrivate(this), parent)
{
    setRequest(new NotifyMigrationTaskStateRequest(request));
    setReply(reply);
}

const NotifyMigrationTaskStateRequest * NotifyMigrationTaskStateResponse::request() const
{
    Q_D(const NotifyMigrationTaskStateResponse);
    return static_cast<const NotifyMigrationTaskStateRequest *>(d->request);
}

/**
 * @brief  Parse a MigrationHub NotifyMigrationTaskState response.
 *
 * @param  response  Response to parse.
 */
void NotifyMigrationTaskStateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  NotifyMigrationTaskStateResponsePrivate
 *
 * @brief  Private implementation for NotifyMigrationTaskStateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new NotifyMigrationTaskStateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public NotifyMigrationTaskStateResponse instance.
 */
NotifyMigrationTaskStateResponsePrivate::NotifyMigrationTaskStateResponsePrivate(
    NotifyMigrationTaskStateQueueResponse * const q) : NotifyMigrationTaskStatePrivate(q)
{

}

/**
 * @brief  Parse an MigrationHub NotifyMigrationTaskStateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void NotifyMigrationTaskStateResponsePrivate::NotifyMigrationTaskStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("NotifyMigrationTaskStateResponse"));
    /// @todo
}

} // namespace MigrationHub
} // namespace AWS
