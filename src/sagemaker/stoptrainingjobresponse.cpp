// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoptrainingjobresponse.h"
#include "stoptrainingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopTrainingJobResponse
 * \brief The StopTrainingJobResponse class provides an interace for SageMaker StopTrainingJob responses.
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
 * \sa SageMakerClient::stopTrainingJob
 */

/*!
 * Constructs a StopTrainingJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopTrainingJobResponse::StopTrainingJobResponse(
        const StopTrainingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StopTrainingJobResponsePrivate(this), parent)
{
    setRequest(new StopTrainingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopTrainingJobRequest * StopTrainingJobResponse::request() const
{
    Q_D(const StopTrainingJobResponse);
    return static_cast<const StopTrainingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StopTrainingJob \a response.
 */
void StopTrainingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopTrainingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StopTrainingJobResponsePrivate
 * \brief The StopTrainingJobResponsePrivate class provides private implementation for StopTrainingJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopTrainingJobResponsePrivate object with public implementation \a q.
 */
StopTrainingJobResponsePrivate::StopTrainingJobResponsePrivate(
    StopTrainingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StopTrainingJob response element from \a xml.
 */
void StopTrainingJobResponsePrivate::parseStopTrainingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopTrainingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
