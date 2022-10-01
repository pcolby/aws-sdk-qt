// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlabelingjobresponse.h"
#include "createlabelingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateLabelingJobResponse
 * \brief The CreateLabelingJobResponse class provides an interace for SageMaker CreateLabelingJob responses.
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
 * \sa SageMakerClient::createLabelingJob
 */

/*!
 * Constructs a CreateLabelingJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLabelingJobResponse::CreateLabelingJobResponse(
        const CreateLabelingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateLabelingJobResponsePrivate(this), parent)
{
    setRequest(new CreateLabelingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLabelingJobRequest * CreateLabelingJobResponse::request() const
{
    Q_D(const CreateLabelingJobResponse);
    return static_cast<const CreateLabelingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateLabelingJob \a response.
 */
void CreateLabelingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLabelingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateLabelingJobResponsePrivate
 * \brief The CreateLabelingJobResponsePrivate class provides private implementation for CreateLabelingJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateLabelingJobResponsePrivate object with public implementation \a q.
 */
CreateLabelingJobResponsePrivate::CreateLabelingJobResponsePrivate(
    CreateLabelingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateLabelingJob response element from \a xml.
 */
void CreateLabelingJobResponsePrivate::parseCreateLabelingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLabelingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
