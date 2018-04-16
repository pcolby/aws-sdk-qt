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

#include "createdatasourcefromredshiftresponse.h"
#include "createdatasourcefromredshiftresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::CreateDataSourceFromRedshiftResponse
 *
 * \brief The CreateDataSourceFromRedshiftResponse class provides an interace for MachineLearning CreateDataSourceFromRedshift responses.
 *
 * \ingroup MachineLearning
 *
 *
 * \sa MachineLearningClient::createDataSourceFromRedshift
 */

/*!
 * @brief  Constructs a new CreateDataSourceFromRedshiftResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDataSourceFromRedshiftResponse::CreateDataSourceFromRedshiftResponse(
        const CreateDataSourceFromRedshiftRequest &request,
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

/*!
 * @brief  Parse a MachineLearning CreateDataSourceFromRedshift response.
 *
 * @param  response  Response to parse.
 */
void CreateDataSourceFromRedshiftResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDataSourceFromRedshiftResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateDataSourceFromRedshiftResponsePrivate
 *
 * \brief Private implementation for CreateDataSourceFromRedshiftResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateDataSourceFromRedshiftResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDataSourceFromRedshiftResponse instance.
 */
CreateDataSourceFromRedshiftResponsePrivate::CreateDataSourceFromRedshiftResponsePrivate(
    CreateDataSourceFromRedshiftResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MachineLearning CreateDataSourceFromRedshiftResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDataSourceFromRedshiftResponsePrivate::parseCreateDataSourceFromRedshiftResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataSourceFromRedshiftResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
