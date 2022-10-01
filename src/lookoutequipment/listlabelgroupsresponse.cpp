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

#include "listlabelgroupsresponse.h"
#include "listlabelgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::ListLabelGroupsResponse
 * \brief The ListLabelGroupsResponse class provides an interace for LookoutEquipment ListLabelGroups responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::listLabelGroups
 */

/*!
 * Constructs a ListLabelGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLabelGroupsResponse::ListLabelGroupsResponse(
        const ListLabelGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new ListLabelGroupsResponsePrivate(this), parent)
{
    setRequest(new ListLabelGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLabelGroupsRequest * ListLabelGroupsResponse::request() const
{
    Q_D(const ListLabelGroupsResponse);
    return static_cast<const ListLabelGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment ListLabelGroups \a response.
 */
void ListLabelGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLabelGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::ListLabelGroupsResponsePrivate
 * \brief The ListLabelGroupsResponsePrivate class provides private implementation for ListLabelGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a ListLabelGroupsResponsePrivate object with public implementation \a q.
 */
ListLabelGroupsResponsePrivate::ListLabelGroupsResponsePrivate(
    ListLabelGroupsResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment ListLabelGroups response element from \a xml.
 */
void ListLabelGroupsResponsePrivate::parseListLabelGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLabelGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
