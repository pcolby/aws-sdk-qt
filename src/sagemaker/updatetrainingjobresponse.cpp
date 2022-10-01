// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetrainingjobresponse.h"
#include "updatetrainingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateTrainingJobResponse
 * \brief The UpdateTrainingJobResponse class provides an interace for SageMaker UpdateTrainingJob responses.
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
 * \sa SageMakerClient::updateTrainingJob
 */

/*!
 * Constructs a UpdateTrainingJobResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTrainingJobResponse::UpdateTrainingJobResponse(
        const UpdateTrainingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateTrainingJobResponsePrivate(this), parent)
{
    setRequest(new UpdateTrainingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTrainingJobRequest * UpdateTrainingJobResponse::request() const
{
    Q_D(const UpdateTrainingJobResponse);
    return static_cast<const UpdateTrainingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateTrainingJob \a response.
 */
void UpdateTrainingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTrainingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateTrainingJobResponsePrivate
 * \brief The UpdateTrainingJobResponsePrivate class provides private implementation for UpdateTrainingJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateTrainingJobResponsePrivate object with public implementation \a q.
 */
UpdateTrainingJobResponsePrivate::UpdateTrainingJobResponsePrivate(
    UpdateTrainingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateTrainingJob response element from \a xml.
 */
void UpdateTrainingJobResponsePrivate::parseUpdateTrainingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTrainingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
