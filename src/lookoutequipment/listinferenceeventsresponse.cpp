// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
