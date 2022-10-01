// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemodelexplainabilityjobdefinitionresponse.h"
#include "deletemodelexplainabilityjobdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteModelExplainabilityJobDefinitionResponse
 * \brief The DeleteModelExplainabilityJobDefinitionResponse class provides an interace for SageMaker DeleteModelExplainabilityJobDefinition responses.
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
 * \sa SageMakerClient::deleteModelExplainabilityJobDefinition
 */

/*!
 * Constructs a DeleteModelExplainabilityJobDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteModelExplainabilityJobDefinitionResponse::DeleteModelExplainabilityJobDefinitionResponse(
        const DeleteModelExplainabilityJobDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteModelExplainabilityJobDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteModelExplainabilityJobDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteModelExplainabilityJobDefinitionRequest * DeleteModelExplainabilityJobDefinitionResponse::request() const
{
    Q_D(const DeleteModelExplainabilityJobDefinitionResponse);
    return static_cast<const DeleteModelExplainabilityJobDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteModelExplainabilityJobDefinition \a response.
 */
void DeleteModelExplainabilityJobDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteModelExplainabilityJobDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteModelExplainabilityJobDefinitionResponsePrivate
 * \brief The DeleteModelExplainabilityJobDefinitionResponsePrivate class provides private implementation for DeleteModelExplainabilityJobDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteModelExplainabilityJobDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteModelExplainabilityJobDefinitionResponsePrivate::DeleteModelExplainabilityJobDefinitionResponsePrivate(
    DeleteModelExplainabilityJobDefinitionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteModelExplainabilityJobDefinition response element from \a xml.
 */
void DeleteModelExplainabilityJobDefinitionResponsePrivate::parseDeleteModelExplainabilityJobDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteModelExplainabilityJobDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
