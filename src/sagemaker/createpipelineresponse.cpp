// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpipelineresponse.h"
#include "createpipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreatePipelineResponse
 * \brief The CreatePipelineResponse class provides an interace for SageMaker CreatePipeline responses.
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
 * \sa SageMakerClient::createPipeline
 */

/*!
 * Constructs a CreatePipelineResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePipelineResponse::CreatePipelineResponse(
        const CreatePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreatePipelineResponsePrivate(this), parent)
{
    setRequest(new CreatePipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePipelineRequest * CreatePipelineResponse::request() const
{
    Q_D(const CreatePipelineResponse);
    return static_cast<const CreatePipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreatePipeline \a response.
 */
void CreatePipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreatePipelineResponsePrivate
 * \brief The CreatePipelineResponsePrivate class provides private implementation for CreatePipelineResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreatePipelineResponsePrivate object with public implementation \a q.
 */
CreatePipelineResponsePrivate::CreatePipelineResponsePrivate(
    CreatePipelineResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreatePipeline response element from \a xml.
 */
void CreatePipelineResponsePrivate::parseCreatePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePipelineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
