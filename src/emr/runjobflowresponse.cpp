// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "runjobflowresponse.h"
#include "runjobflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::RunJobFlowResponse
 * \brief The RunJobFlowResponse class provides an interace for Emr RunJobFlow responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::runJobFlow
 */

/*!
 * Constructs a RunJobFlowResponse object for \a reply to \a request, with parent \a parent.
 */
RunJobFlowResponse::RunJobFlowResponse(
        const RunJobFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new RunJobFlowResponsePrivate(this), parent)
{
    setRequest(new RunJobFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RunJobFlowRequest * RunJobFlowResponse::request() const
{
    Q_D(const RunJobFlowResponse);
    return static_cast<const RunJobFlowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr RunJobFlow \a response.
 */
void RunJobFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RunJobFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::RunJobFlowResponsePrivate
 * \brief The RunJobFlowResponsePrivate class provides private implementation for RunJobFlowResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a RunJobFlowResponsePrivate object with public implementation \a q.
 */
RunJobFlowResponsePrivate::RunJobFlowResponsePrivate(
    RunJobFlowResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr RunJobFlow response element from \a xml.
 */
void RunJobFlowResponsePrivate::parseRunJobFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RunJobFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
