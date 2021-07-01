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

#include "stopnotebookexecutionresponse.h"
#include "stopnotebookexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::StopNotebookExecutionResponse
 * \brief The StopNotebookExecutionResponse class provides an interace for EMR StopNotebookExecution responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::stopNotebookExecution
 */

/*!
 * Constructs a StopNotebookExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
StopNotebookExecutionResponse::StopNotebookExecutionResponse(
        const StopNotebookExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new StopNotebookExecutionResponsePrivate(this), parent)
{
    setRequest(new StopNotebookExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopNotebookExecutionRequest * StopNotebookExecutionResponse::request() const
{
    Q_D(const StopNotebookExecutionResponse);
    return static_cast<const StopNotebookExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR StopNotebookExecution \a response.
 */
void StopNotebookExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopNotebookExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::StopNotebookExecutionResponsePrivate
 * \brief The StopNotebookExecutionResponsePrivate class provides private implementation for StopNotebookExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a StopNotebookExecutionResponsePrivate object with public implementation \a q.
 */
StopNotebookExecutionResponsePrivate::StopNotebookExecutionResponsePrivate(
    StopNotebookExecutionResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR StopNotebookExecution response element from \a xml.
 */
void StopNotebookExecutionResponsePrivate::parseStopNotebookExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopNotebookExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws
