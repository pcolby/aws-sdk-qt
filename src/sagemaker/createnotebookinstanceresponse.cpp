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

#include "createnotebookinstanceresponse.h"
#include "createnotebookinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateNotebookInstanceResponse
 * \brief The CreateNotebookInstanceResponse class provides an interace for SageMaker CreateNotebookInstance responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::createNotebookInstance
 */

/*!
 * Constructs a CreateNotebookInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateNotebookInstanceResponse::CreateNotebookInstanceResponse(
        const CreateNotebookInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateNotebookInstanceResponsePrivate(this), parent)
{
    setRequest(new CreateNotebookInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateNotebookInstanceRequest * CreateNotebookInstanceResponse::request() const
{
    Q_D(const CreateNotebookInstanceResponse);
    return static_cast<const CreateNotebookInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateNotebookInstance \a response.
 */
void CreateNotebookInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateNotebookInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateNotebookInstanceResponsePrivate
 * \brief The CreateNotebookInstanceResponsePrivate class provides private implementation for CreateNotebookInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateNotebookInstanceResponsePrivate object with public implementation \a q.
 */
CreateNotebookInstanceResponsePrivate::CreateNotebookInstanceResponsePrivate(
    CreateNotebookInstanceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateNotebookInstance response element from \a xml.
 */
void CreateNotebookInstanceResponsePrivate::parseCreateNotebookInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNotebookInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
