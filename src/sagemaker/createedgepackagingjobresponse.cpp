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

#include "createedgepackagingjobresponse.h"
#include "createedgepackagingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateEdgePackagingJobResponse
 * \brief The CreateEdgePackagingJobResponse class provides an interace for SageMaker CreateEdgePackagingJob responses.
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
 * \sa SageMakerClient::createEdgePackagingJob
 */

/*!
 * Constructs a CreateEdgePackagingJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEdgePackagingJobResponse::CreateEdgePackagingJobResponse(
        const CreateEdgePackagingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateEdgePackagingJobResponsePrivate(this), parent)
{
    setRequest(new CreateEdgePackagingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEdgePackagingJobRequest * CreateEdgePackagingJobResponse::request() const
{
    Q_D(const CreateEdgePackagingJobResponse);
    return static_cast<const CreateEdgePackagingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateEdgePackagingJob \a response.
 */
void CreateEdgePackagingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEdgePackagingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateEdgePackagingJobResponsePrivate
 * \brief The CreateEdgePackagingJobResponsePrivate class provides private implementation for CreateEdgePackagingJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateEdgePackagingJobResponsePrivate object with public implementation \a q.
 */
CreateEdgePackagingJobResponsePrivate::CreateEdgePackagingJobResponsePrivate(
    CreateEdgePackagingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateEdgePackagingJob response element from \a xml.
 */
void CreateEdgePackagingJobResponsePrivate::parseCreateEdgePackagingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEdgePackagingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
