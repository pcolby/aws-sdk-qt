// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedataqualityjobdefinitionresponse.h"
#include "deletedataqualityjobdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteDataQualityJobDefinitionResponse
 * \brief The DeleteDataQualityJobDefinitionResponse class provides an interace for SageMaker DeleteDataQualityJobDefinition responses.
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
 * \sa SageMakerClient::deleteDataQualityJobDefinition
 */

/*!
 * Constructs a DeleteDataQualityJobDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDataQualityJobDefinitionResponse::DeleteDataQualityJobDefinitionResponse(
        const DeleteDataQualityJobDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteDataQualityJobDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteDataQualityJobDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDataQualityJobDefinitionRequest * DeleteDataQualityJobDefinitionResponse::request() const
{
    Q_D(const DeleteDataQualityJobDefinitionResponse);
    return static_cast<const DeleteDataQualityJobDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteDataQualityJobDefinition \a response.
 */
void DeleteDataQualityJobDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDataQualityJobDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteDataQualityJobDefinitionResponsePrivate
 * \brief The DeleteDataQualityJobDefinitionResponsePrivate class provides private implementation for DeleteDataQualityJobDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteDataQualityJobDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteDataQualityJobDefinitionResponsePrivate::DeleteDataQualityJobDefinitionResponsePrivate(
    DeleteDataQualityJobDefinitionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteDataQualityJobDefinition response element from \a xml.
 */
void DeleteDataQualityJobDefinitionResponsePrivate::parseDeleteDataQualityJobDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDataQualityJobDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
