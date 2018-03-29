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

#include "refreshschemasresponse.h"
#include "refreshschemasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  RefreshSchemasResponse
 *
 * @brief  Handles DatabaseMigrationService RefreshSchemas responses.
 *
 * @see    DatabaseMigrationServiceClient::refreshSchemas
 */

/**
 * @brief  Constructs a new RefreshSchemasResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RefreshSchemasResponse::RefreshSchemasResponse(
        const RefreshSchemasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new RefreshSchemasResponsePrivate(this), parent)
{
    setRequest(new RefreshSchemasRequest(request));
    setReply(reply);
}

const RefreshSchemasRequest * RefreshSchemasResponse::request() const
{
    Q_D(const RefreshSchemasResponse);
    return static_cast<const RefreshSchemasRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService RefreshSchemas response.
 *
 * @param  response  Response to parse.
 */
void RefreshSchemasResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RefreshSchemasResponsePrivate
 *
 * @brief  Private implementation for RefreshSchemasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RefreshSchemasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RefreshSchemasResponse instance.
 */
RefreshSchemasResponsePrivate::RefreshSchemasResponsePrivate(
    RefreshSchemasResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService RefreshSchemasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RefreshSchemasResponsePrivate::RefreshSchemasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RefreshSchemasResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
