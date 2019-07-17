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
 *  Provides APIs for creating and managing Amazon SageMaker
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
