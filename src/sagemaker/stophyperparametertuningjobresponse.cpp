// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stophyperparametertuningjobresponse.h"
#include "stophyperparametertuningjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopHyperParameterTuningJobResponse
 * \brief The StopHyperParameterTuningJobResponse class provides an interace for SageMaker StopHyperParameterTuningJob responses.
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
 * \sa SageMakerClient::stopHyperParameterTuningJob
 */

/*!
 * Constructs a StopHyperParameterTuningJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopHyperParameterTuningJobResponse::StopHyperParameterTuningJobResponse(
        const StopHyperParameterTuningJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StopHyperParameterTuningJobResponsePrivate(this), parent)
{
    setRequest(new StopHyperParameterTuningJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopHyperParameterTuningJobRequest * StopHyperParameterTuningJobResponse::request() const
{
    Q_D(const StopHyperParameterTuningJobResponse);
    return static_cast<const StopHyperParameterTuningJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StopHyperParameterTuningJob \a response.
 */
void StopHyperParameterTuningJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopHyperParameterTuningJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StopHyperParameterTuningJobResponsePrivate
 * \brief The StopHyperParameterTuningJobResponsePrivate class provides private implementation for StopHyperParameterTuningJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopHyperParameterTuningJobResponsePrivate object with public implementation \a q.
 */
StopHyperParameterTuningJobResponsePrivate::StopHyperParameterTuningJobResponsePrivate(
    StopHyperParameterTuningJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StopHyperParameterTuningJob response element from \a xml.
 */
void StopHyperParameterTuningJobResponsePrivate::parseStopHyperParameterTuningJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopHyperParameterTuningJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
