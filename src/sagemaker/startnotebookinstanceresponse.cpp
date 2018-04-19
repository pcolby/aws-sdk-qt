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

#include "startnotebookinstanceresponse.h"
#include "startnotebookinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StartNotebookInstanceResponse
 * \brief The StartNotebookInstanceResponse class provides an interace for SageMaker StartNotebookInstance responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::startNotebookInstance
 */

/*!
 * Constructs a StartNotebookInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
StartNotebookInstanceResponse::StartNotebookInstanceResponse(
        const StartNotebookInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StartNotebookInstanceResponsePrivate(this), parent)
{
    setRequest(new StartNotebookInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartNotebookInstanceRequest * StartNotebookInstanceResponse::request() const
{
    Q_D(const StartNotebookInstanceResponse);
    return static_cast<const StartNotebookInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StartNotebookInstance \a response.
 */
void StartNotebookInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartNotebookInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StartNotebookInstanceResponsePrivate
 * \brief The StartNotebookInstanceResponsePrivate class provides private implementation for StartNotebookInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StartNotebookInstanceResponsePrivate object with public implementation \a q.
 */
StartNotebookInstanceResponsePrivate::StartNotebookInstanceResponsePrivate(
    StartNotebookInstanceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StartNotebookInstance response element from \a xml.
 */
void StartNotebookInstanceResponsePrivate::parseStartNotebookInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartNotebookInstanceResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
