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

#include "startnotebookexecutionresponse.h"
#include "startnotebookexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::StartNotebookExecutionResponse
 * \brief The StartNotebookExecutionResponse class provides an interace for Emr StartNotebookExecution responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::startNotebookExecution
 */

/*!
 * Constructs a StartNotebookExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
StartNotebookExecutionResponse::StartNotebookExecutionResponse(
        const StartNotebookExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new StartNotebookExecutionResponsePrivate(this), parent)
{
    setRequest(new StartNotebookExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartNotebookExecutionRequest * StartNotebookExecutionResponse::request() const
{
    Q_D(const StartNotebookExecutionResponse);
    return static_cast<const StartNotebookExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr StartNotebookExecution \a response.
 */
void StartNotebookExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartNotebookExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::StartNotebookExecutionResponsePrivate
 * \brief The StartNotebookExecutionResponsePrivate class provides private implementation for StartNotebookExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a StartNotebookExecutionResponsePrivate object with public implementation \a q.
 */
StartNotebookExecutionResponsePrivate::StartNotebookExecutionResponsePrivate(
    StartNotebookExecutionResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr StartNotebookExecution response element from \a xml.
 */
void StartNotebookExecutionResponsePrivate::parseStartNotebookExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartNotebookExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
