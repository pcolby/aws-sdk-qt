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

#include "createpresignednotebookinstanceurlresponse.h"
#include "createpresignednotebookinstanceurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreatePresignedNotebookInstanceUrlResponse
 * \brief The CreatePresignedNotebookInstanceUrlResponse class provides an interace for SageMaker CreatePresignedNotebookInstanceUrl responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::createPresignedNotebookInstanceUrl
 */

/*!
 * Constructs a CreatePresignedNotebookInstanceUrlResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePresignedNotebookInstanceUrlResponse::CreatePresignedNotebookInstanceUrlResponse(
        const CreatePresignedNotebookInstanceUrlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreatePresignedNotebookInstanceUrlResponsePrivate(this), parent)
{
    setRequest(new CreatePresignedNotebookInstanceUrlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePresignedNotebookInstanceUrlRequest * CreatePresignedNotebookInstanceUrlResponse::request() const
{
    Q_D(const CreatePresignedNotebookInstanceUrlResponse);
    return static_cast<const CreatePresignedNotebookInstanceUrlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreatePresignedNotebookInstanceUrl \a response.
 */
void CreatePresignedNotebookInstanceUrlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePresignedNotebookInstanceUrlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreatePresignedNotebookInstanceUrlResponsePrivate
 * \brief The CreatePresignedNotebookInstanceUrlResponsePrivate class provides private implementation for CreatePresignedNotebookInstanceUrlResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreatePresignedNotebookInstanceUrlResponsePrivate object with public implementation \a q.
 */
CreatePresignedNotebookInstanceUrlResponsePrivate::CreatePresignedNotebookInstanceUrlResponsePrivate(
    CreatePresignedNotebookInstanceUrlResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreatePresignedNotebookInstanceUrl response element from \a xml.
 */
void CreatePresignedNotebookInstanceUrlResponsePrivate::parseCreatePresignedNotebookInstanceUrlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePresignedNotebookInstanceUrlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
