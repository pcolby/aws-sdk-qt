// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
