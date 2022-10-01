// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteflowdefinitionresponse.h"
#include "deleteflowdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteFlowDefinitionResponse
 * \brief The DeleteFlowDefinitionResponse class provides an interace for SageMaker DeleteFlowDefinition responses.
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
 * \sa SageMakerClient::deleteFlowDefinition
 */

/*!
 * Constructs a DeleteFlowDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFlowDefinitionResponse::DeleteFlowDefinitionResponse(
        const DeleteFlowDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteFlowDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteFlowDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFlowDefinitionRequest * DeleteFlowDefinitionResponse::request() const
{
    Q_D(const DeleteFlowDefinitionResponse);
    return static_cast<const DeleteFlowDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteFlowDefinition \a response.
 */
void DeleteFlowDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFlowDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteFlowDefinitionResponsePrivate
 * \brief The DeleteFlowDefinitionResponsePrivate class provides private implementation for DeleteFlowDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteFlowDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteFlowDefinitionResponsePrivate::DeleteFlowDefinitionResponsePrivate(
    DeleteFlowDefinitionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteFlowDefinition response element from \a xml.
 */
void DeleteFlowDefinitionResponsePrivate::parseDeleteFlowDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFlowDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
