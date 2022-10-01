// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmodelqualityjobdefinitionresponse.h"
#include "createmodelqualityjobdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateModelQualityJobDefinitionResponse
 * \brief The CreateModelQualityJobDefinitionResponse class provides an interace for SageMaker CreateModelQualityJobDefinition responses.
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
 * \sa SageMakerClient::createModelQualityJobDefinition
 */

/*!
 * Constructs a CreateModelQualityJobDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateModelQualityJobDefinitionResponse::CreateModelQualityJobDefinitionResponse(
        const CreateModelQualityJobDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateModelQualityJobDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateModelQualityJobDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateModelQualityJobDefinitionRequest * CreateModelQualityJobDefinitionResponse::request() const
{
    Q_D(const CreateModelQualityJobDefinitionResponse);
    return static_cast<const CreateModelQualityJobDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateModelQualityJobDefinition \a response.
 */
void CreateModelQualityJobDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateModelQualityJobDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateModelQualityJobDefinitionResponsePrivate
 * \brief The CreateModelQualityJobDefinitionResponsePrivate class provides private implementation for CreateModelQualityJobDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateModelQualityJobDefinitionResponsePrivate object with public implementation \a q.
 */
CreateModelQualityJobDefinitionResponsePrivate::CreateModelQualityJobDefinitionResponsePrivate(
    CreateModelQualityJobDefinitionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateModelQualityJobDefinition response element from \a xml.
 */
void CreateModelQualityJobDefinitionResponsePrivate::parseCreateModelQualityJobDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateModelQualityJobDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
