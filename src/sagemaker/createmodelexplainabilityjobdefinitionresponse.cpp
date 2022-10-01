// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmodelexplainabilityjobdefinitionresponse.h"
#include "createmodelexplainabilityjobdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateModelExplainabilityJobDefinitionResponse
 * \brief The CreateModelExplainabilityJobDefinitionResponse class provides an interace for SageMaker CreateModelExplainabilityJobDefinition responses.
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
 * \sa SageMakerClient::createModelExplainabilityJobDefinition
 */

/*!
 * Constructs a CreateModelExplainabilityJobDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateModelExplainabilityJobDefinitionResponse::CreateModelExplainabilityJobDefinitionResponse(
        const CreateModelExplainabilityJobDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateModelExplainabilityJobDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateModelExplainabilityJobDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateModelExplainabilityJobDefinitionRequest * CreateModelExplainabilityJobDefinitionResponse::request() const
{
    Q_D(const CreateModelExplainabilityJobDefinitionResponse);
    return static_cast<const CreateModelExplainabilityJobDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateModelExplainabilityJobDefinition \a response.
 */
void CreateModelExplainabilityJobDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateModelExplainabilityJobDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateModelExplainabilityJobDefinitionResponsePrivate
 * \brief The CreateModelExplainabilityJobDefinitionResponsePrivate class provides private implementation for CreateModelExplainabilityJobDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateModelExplainabilityJobDefinitionResponsePrivate object with public implementation \a q.
 */
CreateModelExplainabilityJobDefinitionResponsePrivate::CreateModelExplainabilityJobDefinitionResponsePrivate(
    CreateModelExplainabilityJobDefinitionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateModelExplainabilityJobDefinition response element from \a xml.
 */
void CreateModelExplainabilityJobDefinitionResponsePrivate::parseCreateModelExplainabilityJobDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateModelExplainabilityJobDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
