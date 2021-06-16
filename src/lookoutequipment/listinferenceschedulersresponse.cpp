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

#include "listinferenceschedulersresponse.h"
#include "listinferenceschedulersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::ListInferenceSchedulersResponse
 * \brief The ListInferenceSchedulersResponse class provides an interace for LookoutEquipment ListInferenceSchedulers responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::listInferenceSchedulers
 */

/*!
 * Constructs a ListInferenceSchedulersResponse object for \a reply to \a request, with parent \a parent.
 */
ListInferenceSchedulersResponse::ListInferenceSchedulersResponse(
        const ListInferenceSchedulersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new ListInferenceSchedulersResponsePrivate(this), parent)
{
    setRequest(new ListInferenceSchedulersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInferenceSchedulersRequest * ListInferenceSchedulersResponse::request() const
{
    Q_D(const ListInferenceSchedulersResponse);
    return static_cast<const ListInferenceSchedulersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment ListInferenceSchedulers \a response.
 */
void ListInferenceSchedulersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInferenceSchedulersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::ListInferenceSchedulersResponsePrivate
 * \brief The ListInferenceSchedulersResponsePrivate class provides private implementation for ListInferenceSchedulersResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a ListInferenceSchedulersResponsePrivate object with public implementation \a q.
 */
ListInferenceSchedulersResponsePrivate::ListInferenceSchedulersResponsePrivate(
    ListInferenceSchedulersResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment ListInferenceSchedulers response element from \a xml.
 */
void ListInferenceSchedulersResponsePrivate::parseListInferenceSchedulersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInferenceSchedulersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
