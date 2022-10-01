// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemodelbiasjobdefinitionresponse.h"
#include "deletemodelbiasjobdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteModelBiasJobDefinitionResponse
 * \brief The DeleteModelBiasJobDefinitionResponse class provides an interace for SageMaker DeleteModelBiasJobDefinition responses.
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
 * \sa SageMakerClient::deleteModelBiasJobDefinition
 */

/*!
 * Constructs a DeleteModelBiasJobDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteModelBiasJobDefinitionResponse::DeleteModelBiasJobDefinitionResponse(
        const DeleteModelBiasJobDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteModelBiasJobDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteModelBiasJobDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteModelBiasJobDefinitionRequest * DeleteModelBiasJobDefinitionResponse::request() const
{
    Q_D(const DeleteModelBiasJobDefinitionResponse);
    return static_cast<const DeleteModelBiasJobDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteModelBiasJobDefinition \a response.
 */
void DeleteModelBiasJobDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteModelBiasJobDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteModelBiasJobDefinitionResponsePrivate
 * \brief The DeleteModelBiasJobDefinitionResponsePrivate class provides private implementation for DeleteModelBiasJobDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteModelBiasJobDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteModelBiasJobDefinitionResponsePrivate::DeleteModelBiasJobDefinitionResponsePrivate(
    DeleteModelBiasJobDefinitionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteModelBiasJobDefinition response element from \a xml.
 */
void DeleteModelBiasJobDefinitionResponsePrivate::parseDeleteModelBiasJobDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteModelBiasJobDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
