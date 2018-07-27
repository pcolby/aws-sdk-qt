/*
    Copyright 2013-2018 Paul Colby

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

#include "addjobflowstepsresponse.h"
#include "addjobflowstepsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::AddJobFlowStepsResponse
 * \brief The AddJobFlowStepsResponse class provides an interace for EMR AddJobFlowSteps responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::addJobFlowSteps
 */

/*!
 * Constructs a AddJobFlowStepsResponse object for \a reply to \a request, with parent \a parent.
 */
AddJobFlowStepsResponse::AddJobFlowStepsResponse(
        const AddJobFlowStepsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new AddJobFlowStepsResponsePrivate(this), parent)
{
    setRequest(new AddJobFlowStepsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddJobFlowStepsRequest * AddJobFlowStepsResponse::request() const
{
    Q_D(const AddJobFlowStepsResponse);
    return static_cast<const AddJobFlowStepsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR AddJobFlowSteps \a response.
 */
void AddJobFlowStepsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddJobFlowStepsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::AddJobFlowStepsResponsePrivate
 * \brief The AddJobFlowStepsResponsePrivate class provides private implementation for AddJobFlowStepsResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a AddJobFlowStepsResponsePrivate object with public implementation \a q.
 */
AddJobFlowStepsResponsePrivate::AddJobFlowStepsResponsePrivate(
    AddJobFlowStepsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR AddJobFlowSteps response element from \a xml.
 */
void AddJobFlowStepsResponsePrivate::parseAddJobFlowStepsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddJobFlowStepsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws
