// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteexperimentresponse.h"
#include "deleteexperimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteExperimentResponse
 * \brief The DeleteExperimentResponse class provides an interace for SageMaker DeleteExperiment responses.
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
 * \sa SageMakerClient::deleteExperiment
 */

/*!
 * Constructs a DeleteExperimentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteExperimentResponse::DeleteExperimentResponse(
        const DeleteExperimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteExperimentResponsePrivate(this), parent)
{
    setRequest(new DeleteExperimentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteExperimentRequest * DeleteExperimentResponse::request() const
{
    Q_D(const DeleteExperimentResponse);
    return static_cast<const DeleteExperimentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteExperiment \a response.
 */
void DeleteExperimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteExperimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteExperimentResponsePrivate
 * \brief The DeleteExperimentResponsePrivate class provides private implementation for DeleteExperimentResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteExperimentResponsePrivate object with public implementation \a q.
 */
DeleteExperimentResponsePrivate::DeleteExperimentResponsePrivate(
    DeleteExperimentResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteExperiment response element from \a xml.
 */
void DeleteExperimentResponsePrivate::parseDeleteExperimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteExperimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
