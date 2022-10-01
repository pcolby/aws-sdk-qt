// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "terminatejobflowsresponse.h"
#include "terminatejobflowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::TerminateJobFlowsResponse
 * \brief The TerminateJobFlowsResponse class provides an interace for Emr TerminateJobFlows responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::terminateJobFlows
 */

/*!
 * Constructs a TerminateJobFlowsResponse object for \a reply to \a request, with parent \a parent.
 */
TerminateJobFlowsResponse::TerminateJobFlowsResponse(
        const TerminateJobFlowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new TerminateJobFlowsResponsePrivate(this), parent)
{
    setRequest(new TerminateJobFlowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TerminateJobFlowsRequest * TerminateJobFlowsResponse::request() const
{
    Q_D(const TerminateJobFlowsResponse);
    return static_cast<const TerminateJobFlowsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr TerminateJobFlows \a response.
 */
void TerminateJobFlowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TerminateJobFlowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::TerminateJobFlowsResponsePrivate
 * \brief The TerminateJobFlowsResponsePrivate class provides private implementation for TerminateJobFlowsResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a TerminateJobFlowsResponsePrivate object with public implementation \a q.
 */
TerminateJobFlowsResponsePrivate::TerminateJobFlowsResponsePrivate(
    TerminateJobFlowsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr TerminateJobFlows response element from \a xml.
 */
void TerminateJobFlowsResponsePrivate::parseTerminateJobFlowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateJobFlowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
