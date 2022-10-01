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

#include "updatenotebookinstanceresponse.h"
#include "updatenotebookinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateNotebookInstanceResponse
 * \brief The UpdateNotebookInstanceResponse class provides an interace for SageMaker UpdateNotebookInstance responses.
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
 * \sa SageMakerClient::updateNotebookInstance
 */

/*!
 * Constructs a UpdateNotebookInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateNotebookInstanceResponse::UpdateNotebookInstanceResponse(
        const UpdateNotebookInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateNotebookInstanceResponsePrivate(this), parent)
{
    setRequest(new UpdateNotebookInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateNotebookInstanceRequest * UpdateNotebookInstanceResponse::request() const
{
    Q_D(const UpdateNotebookInstanceResponse);
    return static_cast<const UpdateNotebookInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateNotebookInstance \a response.
 */
void UpdateNotebookInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateNotebookInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateNotebookInstanceResponsePrivate
 * \brief The UpdateNotebookInstanceResponsePrivate class provides private implementation for UpdateNotebookInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateNotebookInstanceResponsePrivate object with public implementation \a q.
 */
UpdateNotebookInstanceResponsePrivate::UpdateNotebookInstanceResponsePrivate(
    UpdateNotebookInstanceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateNotebookInstance response element from \a xml.
 */
void UpdateNotebookInstanceResponsePrivate::parseUpdateNotebookInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNotebookInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
