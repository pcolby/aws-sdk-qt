/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
