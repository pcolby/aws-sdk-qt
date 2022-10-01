// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetsresponse.h"
#include "listdatasetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::ListDatasetsResponse
 * \brief The ListDatasetsResponse class provides an interace for LookoutEquipment ListDatasets responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::listDatasets
 */

/*!
 * Constructs a ListDatasetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDatasetsResponse::ListDatasetsResponse(
        const ListDatasetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new ListDatasetsResponsePrivate(this), parent)
{
    setRequest(new ListDatasetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDatasetsRequest * ListDatasetsResponse::request() const
{
    Q_D(const ListDatasetsResponse);
    return static_cast<const ListDatasetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment ListDatasets \a response.
 */
void ListDatasetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDatasetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::ListDatasetsResponsePrivate
 * \brief The ListDatasetsResponsePrivate class provides private implementation for ListDatasetsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a ListDatasetsResponsePrivate object with public implementation \a q.
 */
ListDatasetsResponsePrivate::ListDatasetsResponsePrivate(
    ListDatasetsResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment ListDatasets response element from \a xml.
 */
void ListDatasetsResponsePrivate::parseListDatasetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDatasetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
