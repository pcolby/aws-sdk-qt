// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenotebookinstancelifecycleconfigresponse.h"
#include "updatenotebookinstancelifecycleconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateNotebookInstanceLifecycleConfigResponse
 * \brief The UpdateNotebookInstanceLifecycleConfigResponse class provides an interace for SageMaker UpdateNotebookInstanceLifecycleConfig responses.
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
 * \sa SageMakerClient::updateNotebookInstanceLifecycleConfig
 */

/*!
 * Constructs a UpdateNotebookInstanceLifecycleConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateNotebookInstanceLifecycleConfigResponse::UpdateNotebookInstanceLifecycleConfigResponse(
        const UpdateNotebookInstanceLifecycleConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateNotebookInstanceLifecycleConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateNotebookInstanceLifecycleConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateNotebookInstanceLifecycleConfigRequest * UpdateNotebookInstanceLifecycleConfigResponse::request() const
{
    Q_D(const UpdateNotebookInstanceLifecycleConfigResponse);
    return static_cast<const UpdateNotebookInstanceLifecycleConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateNotebookInstanceLifecycleConfig \a response.
 */
void UpdateNotebookInstanceLifecycleConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateNotebookInstanceLifecycleConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateNotebookInstanceLifecycleConfigResponsePrivate
 * \brief The UpdateNotebookInstanceLifecycleConfigResponsePrivate class provides private implementation for UpdateNotebookInstanceLifecycleConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateNotebookInstanceLifecycleConfigResponsePrivate object with public implementation \a q.
 */
UpdateNotebookInstanceLifecycleConfigResponsePrivate::UpdateNotebookInstanceLifecycleConfigResponsePrivate(
    UpdateNotebookInstanceLifecycleConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateNotebookInstanceLifecycleConfig response element from \a xml.
 */
void UpdateNotebookInstanceLifecycleConfigResponsePrivate::parseUpdateNotebookInstanceLifecycleConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNotebookInstanceLifecycleConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
