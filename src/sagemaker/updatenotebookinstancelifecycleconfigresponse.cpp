/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
    Q_D(UpdateNotebookInstanceLifecycleConfigResponse);
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
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
