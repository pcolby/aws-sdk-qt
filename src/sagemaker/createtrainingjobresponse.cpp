/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
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
 * \brief The CreateTrainingJobResponse class provides an interace for SageMaker CreateTrainingJob responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::createTrainingJob
 */

/*!
 * Constructs a CreateTrainingJobResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const CreateTrainingJobRequest * CreateTrainingJobResponse::request() const
{
    Q_D(const CreateTrainingJobResponse);
    return static_cast<const CreateTrainingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateTrainingJob \a response.
 */
void CreateTrainingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTrainingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateTrainingJobResponsePrivate
 * \brief The CreateTrainingJobResponsePrivate class provides private implementation for CreateTrainingJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateTrainingJobResponsePrivate object with public implementation \a q.
 */
CreateTrainingJobResponsePrivate::CreateTrainingJobResponsePrivate(
    CreateTrainingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateTrainingJob response element from \a xml.
 */
void CreateTrainingJobResponsePrivate::parseCreateTrainingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrainingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
