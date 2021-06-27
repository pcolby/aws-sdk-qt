/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
    return static_cast<const CreateModelExplainabilityJobDefinitionRequest *>(SageMakerResponse::request());
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
