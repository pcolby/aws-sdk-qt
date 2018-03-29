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

#include "createdatasourceresponse.h"
#include "createdatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/**
 * @class  CreateDataSourceResponse
 *
 * @brief  Handles AppSync CreateDataSource responses.
 *
 * @see    AppSyncClient::createDataSource
 */

/**
 * @brief  Constructs a new CreateDataSourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDataSourceResponse::CreateDataSourceResponse(
        const CreateDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new CreateDataSourceResponsePrivate(this), parent)
{
    setRequest(new CreateDataSourceRequest(request));
    setReply(reply);
}

const CreateDataSourceRequest * CreateDataSourceResponse::request() const
{
    Q_D(const CreateDataSourceResponse);
    return static_cast<const CreateDataSourceRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync CreateDataSource response.
 *
 * @param  response  Response to parse.
 */
void CreateDataSourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDataSourceResponsePrivate
 *
 * @brief  Private implementation for CreateDataSourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDataSourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDataSourceResponse instance.
 */
CreateDataSourceResponsePrivate::CreateDataSourceResponsePrivate(
    CreateDataSourceResponse * const q) : AppSyncResponsePrivate(q)
{

}

/**
 * @brief  Parse an AppSync CreateDataSourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDataSourceResponsePrivate::CreateDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataSourceResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
