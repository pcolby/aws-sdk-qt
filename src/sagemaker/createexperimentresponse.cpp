// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createexperimentresponse.h"
#include "createexperimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateExperimentResponse
 * \brief The CreateExperimentResponse class provides an interace for SageMaker CreateExperiment responses.
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
 * \sa SageMakerClient::createExperiment
 */

/*!
 * Constructs a CreateExperimentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateExperimentResponse::CreateExperimentResponse(
        const CreateExperimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateExperimentResponsePrivate(this), parent)
{
    setRequest(new CreateExperimentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateExperimentRequest * CreateExperimentResponse::request() const
{
    Q_D(const CreateExperimentResponse);
    return static_cast<const CreateExperimentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateExperiment \a response.
 */
void CreateExperimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateExperimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateExperimentResponsePrivate
 * \brief The CreateExperimentResponsePrivate class provides private implementation for CreateExperimentResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateExperimentResponsePrivate object with public implementation \a q.
 */
CreateExperimentResponsePrivate::CreateExperimentResponsePrivate(
    CreateExperimentResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateExperiment response element from \a xml.
 */
void CreateExperimentResponsePrivate::parseCreateExperimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateExperimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
