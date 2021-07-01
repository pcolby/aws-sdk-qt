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

#include "listinferenceexecutionsresponse.h"
#include "listinferenceexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::ListInferenceExecutionsResponse
 * \brief The ListInferenceExecutionsResponse class provides an interace for LookoutEquipment ListInferenceExecutions responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::listInferenceExecutions
 */

/*!
 * Constructs a ListInferenceExecutionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInferenceExecutionsResponse::ListInferenceExecutionsResponse(
        const ListInferenceExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new ListInferenceExecutionsResponsePrivate(this), parent)
{
    setRequest(new ListInferenceExecutionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInferenceExecutionsRequest * ListInferenceExecutionsResponse::request() const
{
    Q_D(const ListInferenceExecutionsResponse);
    return static_cast<const ListInferenceExecutionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment ListInferenceExecutions \a response.
 */
void ListInferenceExecutionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInferenceExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::ListInferenceExecutionsResponsePrivate
 * \brief The ListInferenceExecutionsResponsePrivate class provides private implementation for ListInferenceExecutionsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a ListInferenceExecutionsResponsePrivate object with public implementation \a q.
 */
ListInferenceExecutionsResponsePrivate::ListInferenceExecutionsResponsePrivate(
    ListInferenceExecutionsResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment ListInferenceExecutions response element from \a xml.
 */
void ListInferenceExecutionsResponsePrivate::parseListInferenceExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInferenceExecutionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
