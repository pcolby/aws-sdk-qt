// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtrainingjobsforhyperparametertuningjobresponse.h"
#include "listtrainingjobsforhyperparametertuningjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListTrainingJobsForHyperParameterTuningJobResponse
 * \brief The ListTrainingJobsForHyperParameterTuningJobResponse class provides an interace for SageMaker ListTrainingJobsForHyperParameterTuningJob responses.
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
 * \sa SageMakerClient::listTrainingJobsForHyperParameterTuningJob
 */

/*!
 * Constructs a ListTrainingJobsForHyperParameterTuningJobResponse object for \a reply to \a request, with parent \a parent.
 */
ListTrainingJobsForHyperParameterTuningJobResponse::ListTrainingJobsForHyperParameterTuningJobResponse(
        const ListTrainingJobsForHyperParameterTuningJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListTrainingJobsForHyperParameterTuningJobResponsePrivate(this), parent)
{
    setRequest(new ListTrainingJobsForHyperParameterTuningJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTrainingJobsForHyperParameterTuningJobRequest * ListTrainingJobsForHyperParameterTuningJobResponse::request() const
{
    Q_D(const ListTrainingJobsForHyperParameterTuningJobResponse);
    return static_cast<const ListTrainingJobsForHyperParameterTuningJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListTrainingJobsForHyperParameterTuningJob \a response.
 */
void ListTrainingJobsForHyperParameterTuningJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTrainingJobsForHyperParameterTuningJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListTrainingJobsForHyperParameterTuningJobResponsePrivate
 * \brief The ListTrainingJobsForHyperParameterTuningJobResponsePrivate class provides private implementation for ListTrainingJobsForHyperParameterTuningJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListTrainingJobsForHyperParameterTuningJobResponsePrivate object with public implementation \a q.
 */
ListTrainingJobsForHyperParameterTuningJobResponsePrivate::ListTrainingJobsForHyperParameterTuningJobResponsePrivate(
    ListTrainingJobsForHyperParameterTuningJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListTrainingJobsForHyperParameterTuningJob response element from \a xml.
 */
void ListTrainingJobsForHyperParameterTuningJobResponsePrivate::parseListTrainingJobsForHyperParameterTuningJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrainingJobsForHyperParameterTuningJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
