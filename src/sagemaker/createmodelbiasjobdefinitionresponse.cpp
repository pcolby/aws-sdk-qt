// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmodelbiasjobdefinitionresponse.h"
#include "createmodelbiasjobdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateModelBiasJobDefinitionResponse
 * \brief The CreateModelBiasJobDefinitionResponse class provides an interace for SageMaker CreateModelBiasJobDefinition responses.
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
 * \sa SageMakerClient::createModelBiasJobDefinition
 */

/*!
 * Constructs a CreateModelBiasJobDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateModelBiasJobDefinitionResponse::CreateModelBiasJobDefinitionResponse(
        const CreateModelBiasJobDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateModelBiasJobDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateModelBiasJobDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateModelBiasJobDefinitionRequest * CreateModelBiasJobDefinitionResponse::request() const
{
    Q_D(const CreateModelBiasJobDefinitionResponse);
    return static_cast<const CreateModelBiasJobDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateModelBiasJobDefinition \a response.
 */
void CreateModelBiasJobDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateModelBiasJobDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateModelBiasJobDefinitionResponsePrivate
 * \brief The CreateModelBiasJobDefinitionResponsePrivate class provides private implementation for CreateModelBiasJobDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateModelBiasJobDefinitionResponsePrivate object with public implementation \a q.
 */
CreateModelBiasJobDefinitionResponsePrivate::CreateModelBiasJobDefinitionResponsePrivate(
    CreateModelBiasJobDefinitionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateModelBiasJobDefinition response element from \a xml.
 */
void CreateModelBiasJobDefinitionResponsePrivate::parseCreateModelBiasJobDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateModelBiasJobDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
