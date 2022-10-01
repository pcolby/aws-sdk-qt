// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
