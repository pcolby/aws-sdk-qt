// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createnotebookinstancelifecycleconfigresponse.h"
#include "createnotebookinstancelifecycleconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateNotebookInstanceLifecycleConfigResponse
 * \brief The CreateNotebookInstanceLifecycleConfigResponse class provides an interace for SageMaker CreateNotebookInstanceLifecycleConfig responses.
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
 * \sa SageMakerClient::createNotebookInstanceLifecycleConfig
 */

/*!
 * Constructs a CreateNotebookInstanceLifecycleConfigResponse object for \a reply to \a request, with parent \a parent.
 */
CreateNotebookInstanceLifecycleConfigResponse::CreateNotebookInstanceLifecycleConfigResponse(
        const CreateNotebookInstanceLifecycleConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateNotebookInstanceLifecycleConfigResponsePrivate(this), parent)
{
    setRequest(new CreateNotebookInstanceLifecycleConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateNotebookInstanceLifecycleConfigRequest * CreateNotebookInstanceLifecycleConfigResponse::request() const
{
    Q_D(const CreateNotebookInstanceLifecycleConfigResponse);
    return static_cast<const CreateNotebookInstanceLifecycleConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateNotebookInstanceLifecycleConfig \a response.
 */
void CreateNotebookInstanceLifecycleConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateNotebookInstanceLifecycleConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateNotebookInstanceLifecycleConfigResponsePrivate
 * \brief The CreateNotebookInstanceLifecycleConfigResponsePrivate class provides private implementation for CreateNotebookInstanceLifecycleConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateNotebookInstanceLifecycleConfigResponsePrivate object with public implementation \a q.
 */
CreateNotebookInstanceLifecycleConfigResponsePrivate::CreateNotebookInstanceLifecycleConfigResponsePrivate(
    CreateNotebookInstanceLifecycleConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateNotebookInstanceLifecycleConfig response element from \a xml.
 */
void CreateNotebookInstanceLifecycleConfigResponsePrivate::parseCreateNotebookInstanceLifecycleConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNotebookInstanceLifecycleConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
