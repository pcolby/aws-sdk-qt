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

#include "createprocessingjobresponse.h"
#include "createprocessingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateProcessingJobResponse
 * \brief The CreateProcessingJobResponse class provides an interace for SageMaker CreateProcessingJob responses.
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
 * \sa SageMakerClient::createProcessingJob
 */

/*!
 * Constructs a CreateProcessingJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateProcessingJobResponse::CreateProcessingJobResponse(
        const CreateProcessingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateProcessingJobResponsePrivate(this), parent)
{
    setRequest(new CreateProcessingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateProcessingJobRequest * CreateProcessingJobResponse::request() const
{
    Q_D(const CreateProcessingJobResponse);
    return static_cast<const CreateProcessingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateProcessingJob \a response.
 */
void CreateProcessingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateProcessingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateProcessingJobResponsePrivate
 * \brief The CreateProcessingJobResponsePrivate class provides private implementation for CreateProcessingJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateProcessingJobResponsePrivate object with public implementation \a q.
 */
CreateProcessingJobResponsePrivate::CreateProcessingJobResponsePrivate(
    CreateProcessingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateProcessingJob response element from \a xml.
 */
void CreateProcessingJobResponsePrivate::parseCreateProcessingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProcessingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
