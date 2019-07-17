/*
    Copyright 2013-2019 Paul Colby

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
