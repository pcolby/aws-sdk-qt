// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenotebookinstancelifecycleconfigresponse.h"
#include "deletenotebookinstancelifecycleconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteNotebookInstanceLifecycleConfigResponse
 * \brief The DeleteNotebookInstanceLifecycleConfigResponse class provides an interace for SageMaker DeleteNotebookInstanceLifecycleConfig responses.
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
 * \sa SageMakerClient::deleteNotebookInstanceLifecycleConfig
 */

/*!
 * Constructs a DeleteNotebookInstanceLifecycleConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteNotebookInstanceLifecycleConfigResponse::DeleteNotebookInstanceLifecycleConfigResponse(
        const DeleteNotebookInstanceLifecycleConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteNotebookInstanceLifecycleConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteNotebookInstanceLifecycleConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteNotebookInstanceLifecycleConfigRequest * DeleteNotebookInstanceLifecycleConfigResponse::request() const
{
    Q_D(const DeleteNotebookInstanceLifecycleConfigResponse);
    return static_cast<const DeleteNotebookInstanceLifecycleConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteNotebookInstanceLifecycleConfig \a response.
 */
void DeleteNotebookInstanceLifecycleConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteNotebookInstanceLifecycleConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteNotebookInstanceLifecycleConfigResponsePrivate
 * \brief The DeleteNotebookInstanceLifecycleConfigResponsePrivate class provides private implementation for DeleteNotebookInstanceLifecycleConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteNotebookInstanceLifecycleConfigResponsePrivate object with public implementation \a q.
 */
DeleteNotebookInstanceLifecycleConfigResponsePrivate::DeleteNotebookInstanceLifecycleConfigResponsePrivate(
    DeleteNotebookInstanceLifecycleConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteNotebookInstanceLifecycleConfig response element from \a xml.
 */
void DeleteNotebookInstanceLifecycleConfigResponsePrivate::parseDeleteNotebookInstanceLifecycleConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNotebookInstanceLifecycleConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
