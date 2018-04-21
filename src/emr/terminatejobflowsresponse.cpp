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

#include "terminatejobflowsresponse.h"
#include "terminatejobflowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::TerminateJobFlowsResponse
 * \brief The TerminateJobFlowsResponse class provides an interace for EMR TerminateJobFlows responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
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
    : EMRResponse(new TerminateJobFlowsResponsePrivate(this), parent)
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
 * Parses a successful EMR TerminateJobFlows \a response.
 */
void TerminateJobFlowsResponse::parseSuccess(QIODevice &response)
{
    Q_D(TerminateJobFlowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::TerminateJobFlowsResponsePrivate
 * \brief The TerminateJobFlowsResponsePrivate class provides private implementation for TerminateJobFlowsResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a TerminateJobFlowsResponsePrivate object with public implementation \a q.
 */
TerminateJobFlowsResponsePrivate::TerminateJobFlowsResponsePrivate(
    TerminateJobFlowsResponse * const q) : EMRResponsePrivate(q)
{

}

/*!
 * Parses a EMR TerminateJobFlows response element from \a xml.
 */
void TerminateJobFlowsResponsePrivate::parseTerminateJobFlowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateJobFlowsResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
