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

#include "createdatasourcefromredshiftresponse.h"
#include "createdatasourcefromredshiftresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MachineLearning {

/**
 * @class  CreateDataSourceFromRedshiftResponse
 *
 * @brief  Handles MachineLearning CreateDataSourceFromRedshift responses.
 *
 * @see    MachineLearningClient::createDataSourceFromRedshift
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDataSourceFromRedshiftResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new CreateDataSourceFromRedshiftResponsePrivate(this), parent)
{
    setRequest(new CreateDataSourceFromRedshiftRequest(request));
    setReply(reply);
}

const CreateDataSourceFromRedshiftRequest * CreateDataSourceFromRedshiftResponse::request() const
{
    Q_D(const CreateDataSourceFromRedshiftResponse);
    return static_cast<const CreateDataSourceFromRedshiftRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning CreateDataSourceFromRedshift response.
 *
 * @param  response  Response to parse.
 */
void CreateDataSourceFromRedshiftResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDataSourceFromRedshiftResponsePrivate
 *
 * @brief  Private implementation for CreateDataSourceFromRedshiftResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDataSourceFromRedshiftResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDataSourceFromRedshiftResponse instance.
 */
CreateDataSourceFromRedshiftResponsePrivate::CreateDataSourceFromRedshiftResponsePrivate(
    CreateDataSourceFromRedshiftQueueResponse * const q) : CreateDataSourceFromRedshiftPrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning CreateDataSourceFromRedshiftResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDataSourceFromRedshiftResponsePrivate::CreateDataSourceFromRedshiftResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataSourceFromRedshiftResponse"));
    /// @todo
}
