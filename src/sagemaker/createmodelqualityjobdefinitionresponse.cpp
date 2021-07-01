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
