// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
