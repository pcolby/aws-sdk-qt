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

#include "addinstancegroupsresponse.h"
#include "addinstancegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::AddInstanceGroupsResponse
 * \brief The AddInstanceGroupsResponse class provides an interace for EMR AddInstanceGroups responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::addInstanceGroups
 */

/*!
 * Constructs a AddInstanceGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
AddInstanceGroupsResponse::AddInstanceGroupsResponse(
        const AddInstanceGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new AddInstanceGroupsResponsePrivate(this), parent)
{
    setRequest(new AddInstanceGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddInstanceGroupsRequest * AddInstanceGroupsResponse::request() const
{
    return static_cast<const AddInstanceGroupsRequest *>(EmrResponse::request());
}

/*!
 * \reimp
 * Parses a successful EMR AddInstanceGroups \a response.
 */
void AddInstanceGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddInstanceGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::AddInstanceGroupsResponsePrivate
 * \brief The AddInstanceGroupsResponsePrivate class provides private implementation for AddInstanceGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a AddInstanceGroupsResponsePrivate object with public implementation \a q.
 */
AddInstanceGroupsResponsePrivate::AddInstanceGroupsResponsePrivate(
    AddInstanceGroupsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR AddInstanceGroups response element from \a xml.
 */
void AddInstanceGroupsResponsePrivate::parseAddInstanceGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddInstanceGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws
