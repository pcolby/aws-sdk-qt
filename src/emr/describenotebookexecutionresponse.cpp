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

#include "describenotebookexecutionresponse.h"
#include "describenotebookexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::DescribeNotebookExecutionResponse
 * \brief The DescribeNotebookExecutionResponse class provides an interace for EMR DescribeNotebookExecution responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::describeNotebookExecution
 */

/*!
 * Constructs a DescribeNotebookExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeNotebookExecutionResponse::DescribeNotebookExecutionResponse(
        const DescribeNotebookExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new DescribeNotebookExecutionResponsePrivate(this), parent)
{
    setRequest(new DescribeNotebookExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeNotebookExecutionRequest * DescribeNotebookExecutionResponse::request() const
{
    return static_cast<const DescribeNotebookExecutionRequest *>(EmrResponse::request());
}

/*!
 * \reimp
 * Parses a successful EMR DescribeNotebookExecution \a response.
 */
void DescribeNotebookExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeNotebookExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::DescribeNotebookExecutionResponsePrivate
 * \brief The DescribeNotebookExecutionResponsePrivate class provides private implementation for DescribeNotebookExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a DescribeNotebookExecutionResponsePrivate object with public implementation \a q.
 */
DescribeNotebookExecutionResponsePrivate::DescribeNotebookExecutionResponsePrivate(
    DescribeNotebookExecutionResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR DescribeNotebookExecution response element from \a xml.
 */
void DescribeNotebookExecutionResponsePrivate::parseDescribeNotebookExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNotebookExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws
