// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemodelqualityjobdefinitionresponse.h"
#include "deletemodelqualityjobdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteModelQualityJobDefinitionResponse
 * \brief The DeleteModelQualityJobDefinitionResponse class provides an interace for SageMaker DeleteModelQualityJobDefinition responses.
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
 * \sa SageMakerClient::deleteModelQualityJobDefinition
 */

/*!
 * Constructs a DeleteModelQualityJobDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteModelQualityJobDefinitionResponse::DeleteModelQualityJobDefinitionResponse(
        const DeleteModelQualityJobDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteModelQualityJobDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteModelQualityJobDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteModelQualityJobDefinitionRequest * DeleteModelQualityJobDefinitionResponse::request() const
{
    Q_D(const DeleteModelQualityJobDefinitionResponse);
    return static_cast<const DeleteModelQualityJobDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteModelQualityJobDefinition \a response.
 */
void DeleteModelQualityJobDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteModelQualityJobDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteModelQualityJobDefinitionResponsePrivate
 * \brief The DeleteModelQualityJobDefinitionResponsePrivate class provides private implementation for DeleteModelQualityJobDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteModelQualityJobDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteModelQualityJobDefinitionResponsePrivate::DeleteModelQualityJobDefinitionResponsePrivate(
    DeleteModelQualityJobDefinitionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteModelQualityJobDefinition response element from \a xml.
 */
void DeleteModelQualityJobDefinitionResponsePrivate::parseDeleteModelQualityJobDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteModelQualityJobDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
