// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateexperimentresponse.h"
#include "updateexperimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateExperimentResponse
 * \brief The UpdateExperimentResponse class provides an interace for SageMaker UpdateExperiment responses.
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
 * \sa SageMakerClient::updateExperiment
 */

/*!
 * Constructs a UpdateExperimentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateExperimentResponse::UpdateExperimentResponse(
        const UpdateExperimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateExperimentResponsePrivate(this), parent)
{
    setRequest(new UpdateExperimentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateExperimentRequest * UpdateExperimentResponse::request() const
{
    Q_D(const UpdateExperimentResponse);
    return static_cast<const UpdateExperimentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateExperiment \a response.
 */
void UpdateExperimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateExperimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateExperimentResponsePrivate
 * \brief The UpdateExperimentResponsePrivate class provides private implementation for UpdateExperimentResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateExperimentResponsePrivate object with public implementation \a q.
 */
UpdateExperimentResponsePrivate::UpdateExperimentResponsePrivate(
    UpdateExperimentResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateExperiment response element from \a xml.
 */
void UpdateExperimentResponsePrivate::parseUpdateExperimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateExperimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
