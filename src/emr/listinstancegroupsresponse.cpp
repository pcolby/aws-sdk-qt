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

#include "listinstancegroupsresponse.h"
#include "listinstancegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ListInstanceGroupsResponse
 * \brief The ListInstanceGroupsResponse class provides an interace for EMR ListInstanceGroups responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::listInstanceGroups
 */

/*!
 * Constructs a ListInstanceGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInstanceGroupsResponse::ListInstanceGroupsResponse(
        const ListInstanceGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ListInstanceGroupsResponsePrivate(this), parent)
{
    setRequest(new ListInstanceGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInstanceGroupsRequest * ListInstanceGroupsResponse::request() const
{
    Q_D(const ListInstanceGroupsResponse);
    return static_cast<const ListInstanceGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR ListInstanceGroups \a response.
 */
void ListInstanceGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInstanceGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::ListInstanceGroupsResponsePrivate
 * \brief The ListInstanceGroupsResponsePrivate class provides private implementation for ListInstanceGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a ListInstanceGroupsResponsePrivate object with public implementation \a q.
 */
ListInstanceGroupsResponsePrivate::ListInstanceGroupsResponsePrivate(
    ListInstanceGroupsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR ListInstanceGroups response element from \a xml.
 */
void ListInstanceGroupsResponsePrivate::parseListInstanceGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInstanceGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws
