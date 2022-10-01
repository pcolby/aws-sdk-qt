// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelabelgroupresponse.h"
#include "deletelabelgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DeleteLabelGroupResponse
 * \brief The DeleteLabelGroupResponse class provides an interace for LookoutEquipment DeleteLabelGroup responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::deleteLabelGroup
 */

/*!
 * Constructs a DeleteLabelGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLabelGroupResponse::DeleteLabelGroupResponse(
        const DeleteLabelGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new DeleteLabelGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteLabelGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLabelGroupRequest * DeleteLabelGroupResponse::request() const
{
    Q_D(const DeleteLabelGroupResponse);
    return static_cast<const DeleteLabelGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment DeleteLabelGroup \a response.
 */
void DeleteLabelGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLabelGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::DeleteLabelGroupResponsePrivate
 * \brief The DeleteLabelGroupResponsePrivate class provides private implementation for DeleteLabelGroupResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DeleteLabelGroupResponsePrivate object with public implementation \a q.
 */
DeleteLabelGroupResponsePrivate::DeleteLabelGroupResponsePrivate(
    DeleteLabelGroupResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment DeleteLabelGroup response element from \a xml.
 */
void DeleteLabelGroupResponsePrivate::parseDeleteLabelGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLabelGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
