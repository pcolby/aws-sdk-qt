// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlabelsresponse.h"
#include "listlabelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::ListLabelsResponse
 * \brief The ListLabelsResponse class provides an interace for LookoutEquipment ListLabels responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::listLabels
 */

/*!
 * Constructs a ListLabelsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLabelsResponse::ListLabelsResponse(
        const ListLabelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new ListLabelsResponsePrivate(this), parent)
{
    setRequest(new ListLabelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLabelsRequest * ListLabelsResponse::request() const
{
    Q_D(const ListLabelsResponse);
    return static_cast<const ListLabelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment ListLabels \a response.
 */
void ListLabelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLabelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::ListLabelsResponsePrivate
 * \brief The ListLabelsResponsePrivate class provides private implementation for ListLabelsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a ListLabelsResponsePrivate object with public implementation \a q.
 */
ListLabelsResponsePrivate::ListLabelsResponsePrivate(
    ListLabelsResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment ListLabels response element from \a xml.
 */
void ListLabelsResponsePrivate::parseListLabelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLabelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
