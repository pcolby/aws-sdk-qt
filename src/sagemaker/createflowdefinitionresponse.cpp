// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createflowdefinitionresponse.h"
#include "createflowdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateFlowDefinitionResponse
 * \brief The CreateFlowDefinitionResponse class provides an interace for SageMaker CreateFlowDefinition responses.
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
 * \sa SageMakerClient::createFlowDefinition
 */

/*!
 * Constructs a CreateFlowDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFlowDefinitionResponse::CreateFlowDefinitionResponse(
        const CreateFlowDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateFlowDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateFlowDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFlowDefinitionRequest * CreateFlowDefinitionResponse::request() const
{
    Q_D(const CreateFlowDefinitionResponse);
    return static_cast<const CreateFlowDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateFlowDefinition \a response.
 */
void CreateFlowDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFlowDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateFlowDefinitionResponsePrivate
 * \brief The CreateFlowDefinitionResponsePrivate class provides private implementation for CreateFlowDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateFlowDefinitionResponsePrivate object with public implementation \a q.
 */
CreateFlowDefinitionResponsePrivate::CreateFlowDefinitionResponsePrivate(
    CreateFlowDefinitionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateFlowDefinition response element from \a xml.
 */
void CreateFlowDefinitionResponsePrivate::parseCreateFlowDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFlowDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
