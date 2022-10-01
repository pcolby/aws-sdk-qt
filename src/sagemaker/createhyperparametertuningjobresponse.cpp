// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhyperparametertuningjobresponse.h"
#include "createhyperparametertuningjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateHyperParameterTuningJobResponse
 * \brief The CreateHyperParameterTuningJobResponse class provides an interace for SageMaker CreateHyperParameterTuningJob responses.
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
 * \sa SageMakerClient::createHyperParameterTuningJob
 */

/*!
 * Constructs a CreateHyperParameterTuningJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateHyperParameterTuningJobResponse::CreateHyperParameterTuningJobResponse(
        const CreateHyperParameterTuningJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateHyperParameterTuningJobResponsePrivate(this), parent)
{
    setRequest(new CreateHyperParameterTuningJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateHyperParameterTuningJobRequest * CreateHyperParameterTuningJobResponse::request() const
{
    Q_D(const CreateHyperParameterTuningJobResponse);
    return static_cast<const CreateHyperParameterTuningJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateHyperParameterTuningJob \a response.
 */
void CreateHyperParameterTuningJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateHyperParameterTuningJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateHyperParameterTuningJobResponsePrivate
 * \brief The CreateHyperParameterTuningJobResponsePrivate class provides private implementation for CreateHyperParameterTuningJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateHyperParameterTuningJobResponsePrivate object with public implementation \a q.
 */
CreateHyperParameterTuningJobResponsePrivate::CreateHyperParameterTuningJobResponsePrivate(
    CreateHyperParameterTuningJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateHyperParameterTuningJob response element from \a xml.
 */
void CreateHyperParameterTuningJobResponsePrivate::parseCreateHyperParameterTuningJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHyperParameterTuningJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
