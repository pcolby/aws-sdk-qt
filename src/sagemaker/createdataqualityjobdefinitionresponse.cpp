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

#include "createdataqualityjobdefinitionresponse.h"
#include "createdataqualityjobdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateDataQualityJobDefinitionResponse
 * \brief The CreateDataQualityJobDefinitionResponse class provides an interace for SageMaker CreateDataQualityJobDefinition responses.
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
 * \sa SageMakerClient::createDataQualityJobDefinition
 */

/*!
 * Constructs a CreateDataQualityJobDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDataQualityJobDefinitionResponse::CreateDataQualityJobDefinitionResponse(
        const CreateDataQualityJobDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateDataQualityJobDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateDataQualityJobDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDataQualityJobDefinitionRequest * CreateDataQualityJobDefinitionResponse::request() const
{
    return static_cast<const CreateDataQualityJobDefinitionRequest *>(SageMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateDataQualityJobDefinition \a response.
 */
void CreateDataQualityJobDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDataQualityJobDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateDataQualityJobDefinitionResponsePrivate
 * \brief The CreateDataQualityJobDefinitionResponsePrivate class provides private implementation for CreateDataQualityJobDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateDataQualityJobDefinitionResponsePrivate object with public implementation \a q.
 */
CreateDataQualityJobDefinitionResponsePrivate::CreateDataQualityJobDefinitionResponsePrivate(
    CreateDataQualityJobDefinitionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateDataQualityJobDefinition response element from \a xml.
 */
void CreateDataQualityJobDefinitionResponsePrivate::parseCreateDataQualityJobDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataQualityJobDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
