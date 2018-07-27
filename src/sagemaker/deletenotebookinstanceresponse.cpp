/*
    Copyright 2013-2018 Paul Colby

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

#include "deletenotebookinstanceresponse.h"
#include "deletenotebookinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteNotebookInstanceResponse
 * \brief The DeleteNotebookInstanceResponse class provides an interace for SageMaker DeleteNotebookInstance responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::deleteNotebookInstance
 */

/*!
 * Constructs a DeleteNotebookInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteNotebookInstanceResponse::DeleteNotebookInstanceResponse(
        const DeleteNotebookInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteNotebookInstanceResponsePrivate(this), parent)
{
    setRequest(new DeleteNotebookInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteNotebookInstanceRequest * DeleteNotebookInstanceResponse::request() const
{
    Q_D(const DeleteNotebookInstanceResponse);
    return static_cast<const DeleteNotebookInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteNotebookInstance \a response.
 */
void DeleteNotebookInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteNotebookInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteNotebookInstanceResponsePrivate
 * \brief The DeleteNotebookInstanceResponsePrivate class provides private implementation for DeleteNotebookInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteNotebookInstanceResponsePrivate object with public implementation \a q.
 */
DeleteNotebookInstanceResponsePrivate::DeleteNotebookInstanceResponsePrivate(
    DeleteNotebookInstanceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteNotebookInstance response element from \a xml.
 */
void DeleteNotebookInstanceResponsePrivate::parseDeleteNotebookInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNotebookInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
