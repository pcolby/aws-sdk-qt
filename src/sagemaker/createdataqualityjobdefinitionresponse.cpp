// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const CreateDataQualityJobDefinitionResponse);
    return static_cast<const CreateDataQualityJobDefinitionRequest *>(d->request);
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
