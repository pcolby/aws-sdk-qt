// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopnotebookexecutionresponse.h"
#include "stopnotebookexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::StopNotebookExecutionResponse
 * \brief The StopNotebookExecutionResponse class provides an interace for Emr StopNotebookExecution responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
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
 * Parses a successful Emr StopNotebookExecution \a response.
 */
void StopNotebookExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopNotebookExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::StopNotebookExecutionResponsePrivate
 * \brief The StopNotebookExecutionResponsePrivate class provides private implementation for StopNotebookExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a StopNotebookExecutionResponsePrivate object with public implementation \a q.
 */
StopNotebookExecutionResponsePrivate::StopNotebookExecutionResponsePrivate(
    StopNotebookExecutionResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr StopNotebookExecution response element from \a xml.
 */
void StopNotebookExecutionResponsePrivate::parseStopNotebookExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopNotebookExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
