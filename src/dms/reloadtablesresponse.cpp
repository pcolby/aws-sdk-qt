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

#include "reloadtablesresponse.h"
#include "reloadtablesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  ReloadTablesResponse
 *
 * @brief  Handles DatabaseMigrationService ReloadTables responses.
 *
 * @see    DatabaseMigrationServiceClient::reloadTables
 */

/**
 * @brief  Constructs a new ReloadTablesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReloadTablesResponse::ReloadTablesResponse(
        const ReloadTablesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new ReloadTablesResponsePrivate(this), parent)
{
    setRequest(new ReloadTablesRequest(request));
    setReply(reply);
}

const ReloadTablesRequest * ReloadTablesResponse::request() const
{
    Q_D(const ReloadTablesResponse);
    return static_cast<const ReloadTablesRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService ReloadTables response.
 *
 * @param  response  Response to parse.
 */
void ReloadTablesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ReloadTablesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ReloadTablesResponsePrivate
 *
 * @brief  Private implementation for ReloadTablesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReloadTablesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ReloadTablesResponse instance.
 */
ReloadTablesResponsePrivate::ReloadTablesResponsePrivate(
    ReloadTablesResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService ReloadTablesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ReloadTablesResponsePrivate::ReloadTablesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReloadTablesResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
