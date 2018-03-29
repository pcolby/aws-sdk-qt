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

#include "createdatasourcefromrdsresponse.h"
#include "createdatasourcefromrdsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/**
 * @class  CreateDataSourceFromRDSResponse
 *
 * @brief  Handles MachineLearning CreateDataSourceFromRDS responses.
 *
 * @see    MachineLearningClient::createDataSourceFromRDS
 */

/**
 * @brief  Constructs a new CreateDataSourceFromRDSResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDataSourceFromRDSResponse::CreateDataSourceFromRDSResponse(
        const CreateDataSourceFromRDSRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateDataSourceFromRDSResponse(new CreateDataSourceFromRDSResponsePrivate(this), parent)
{
    setRequest(new CreateDataSourceFromRDSRequest(request));
    setReply(reply);
}

const CreateDataSourceFromRDSRequest * CreateDataSourceFromRDSResponse::request() const
{
    Q_D(const CreateDataSourceFromRDSResponse);
    return static_cast<const CreateDataSourceFromRDSRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning CreateDataSourceFromRDS response.
 *
 * @param  response  Response to parse.
 */
void CreateDataSourceFromRDSResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDataSourceFromRDSResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDataSourceFromRDSResponsePrivate
 *
 * @brief  Private implementation for CreateDataSourceFromRDSResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDataSourceFromRDSResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDataSourceFromRDSResponse instance.
 */
CreateDataSourceFromRDSResponsePrivate::CreateDataSourceFromRDSResponsePrivate(
    CreateDataSourceFromRDSResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning CreateDataSourceFromRDSResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDataSourceFromRDSResponsePrivate::parseCreateDataSourceFromRDSResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataSourceFromRDSResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
