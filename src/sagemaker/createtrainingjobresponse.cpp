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

#include "createtrainingjobresponse.h"
#include "createtrainingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateTrainingJobResponse
 *
 * \brief The CreateTrainingJobResponse class encapsulates SageMaker CreateTrainingJob responses.
 *
 * \ingroup SageMaker
 *
 *
 * \sa SageMakerClient::createTrainingJob
 */

/*!
 * @brief  Constructs a new CreateTrainingJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTrainingJobResponse::CreateTrainingJobResponse(
        const CreateTrainingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateTrainingJobResponsePrivate(this), parent)
{
    setRequest(new CreateTrainingJobRequest(request));
    setReply(reply);
}

const CreateTrainingJobRequest * CreateTrainingJobResponse::request() const
{
    Q_D(const CreateTrainingJobResponse);
    return static_cast<const CreateTrainingJobRequest *>(d->request);
}

/*!
 * @brief  Parse a SageMaker CreateTrainingJob response.
 *
 * @param  response  Response to parse.
 */
void CreateTrainingJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateTrainingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateTrainingJobResponsePrivate
 *
 * \brief Private implementation for CreateTrainingJobResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateTrainingJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTrainingJobResponse instance.
 */
CreateTrainingJobResponsePrivate::CreateTrainingJobResponsePrivate(
    CreateTrainingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SageMaker CreateTrainingJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTrainingJobResponsePrivate::parseCreateTrainingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrainingJobResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
