// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
