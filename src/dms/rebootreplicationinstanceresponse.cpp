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

#include "rebootreplicationinstanceresponse.h"
#include "rebootreplicationinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  RebootReplicationInstanceResponse
 *
 * @brief  Handles DatabaseMigrationService RebootReplicationInstance responses.
 *
 * @see    DatabaseMigrationServiceClient::rebootReplicationInstance
 */

/**
 * @brief  Constructs a new RebootReplicationInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RebootReplicationInstanceResponse::RebootReplicationInstanceResponse(
        const RebootReplicationInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RebootReplicationInstanceResponse(new RebootReplicationInstanceResponsePrivate(this), parent)
{
    setRequest(new RebootReplicationInstanceRequest(request));
    setReply(reply);
}

const RebootReplicationInstanceRequest * RebootReplicationInstanceResponse::request() const
{
    Q_D(const RebootReplicationInstanceResponse);
    return static_cast<const RebootReplicationInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService RebootReplicationInstance response.
 *
 * @param  response  Response to parse.
 */
void RebootReplicationInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(RebootReplicationInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RebootReplicationInstanceResponsePrivate
 *
 * @brief  Private implementation for RebootReplicationInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebootReplicationInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RebootReplicationInstanceResponse instance.
 */
RebootReplicationInstanceResponsePrivate::RebootReplicationInstanceResponsePrivate(
    RebootReplicationInstanceResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService RebootReplicationInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RebootReplicationInstanceResponsePrivate::parseRebootReplicationInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootReplicationInstanceResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
