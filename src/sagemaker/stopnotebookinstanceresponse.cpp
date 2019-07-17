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

#include "stopnotebookinstanceresponse.h"
#include "stopnotebookinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopNotebookInstanceResponse
 * \brief The StopNotebookInstanceResponse class provides an interace for SageMaker StopNotebookInstance responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::stopNotebookInstance
 */

/*!
 * Constructs a StopNotebookInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
StopNotebookInstanceResponse::StopNotebookInstanceResponse(
        const StopNotebookInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StopNotebookInstanceResponsePrivate(this), parent)
{
    setRequest(new StopNotebookInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopNotebookInstanceRequest * StopNotebookInstanceResponse::request() const
{
    Q_D(const StopNotebookInstanceResponse);
    return static_cast<const StopNotebookInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StopNotebookInstance \a response.
 */
void StopNotebookInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopNotebookInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StopNotebookInstanceResponsePrivate
 * \brief The StopNotebookInstanceResponsePrivate class provides private implementation for StopNotebookInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopNotebookInstanceResponsePrivate object with public implementation \a q.
 */
StopNotebookInstanceResponsePrivate::StopNotebookInstanceResponsePrivate(
    StopNotebookInstanceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StopNotebookInstance response element from \a xml.
 */
void StopNotebookInstanceResponsePrivate::parseStopNotebookInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopNotebookInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
