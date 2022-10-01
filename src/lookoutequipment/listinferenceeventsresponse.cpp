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

#include "listinferenceeventsresponse.h"
#include "listinferenceeventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::ListInferenceEventsResponse
 * \brief The ListInferenceEventsResponse class provides an interace for LookoutEquipment ListInferenceEvents responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::listInferenceEvents
 */

/*!
 * Constructs a ListInferenceEventsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInferenceEventsResponse::ListInferenceEventsResponse(
        const ListInferenceEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new ListInferenceEventsResponsePrivate(this), parent)
{
    setRequest(new ListInferenceEventsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInferenceEventsRequest * ListInferenceEventsResponse::request() const
{
    Q_D(const ListInferenceEventsResponse);
    return static_cast<const ListInferenceEventsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment ListInferenceEvents \a response.
 */
void ListInferenceEventsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInferenceEventsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::ListInferenceEventsResponsePrivate
 * \brief The ListInferenceEventsResponsePrivate class provides private implementation for ListInferenceEventsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a ListInferenceEventsResponsePrivate object with public implementation \a q.
 */
ListInferenceEventsResponsePrivate::ListInferenceEventsResponsePrivate(
    ListInferenceEventsResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment ListInferenceEvents response element from \a xml.
 */
void ListInferenceEventsResponsePrivate::parseListInferenceEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInferenceEventsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
