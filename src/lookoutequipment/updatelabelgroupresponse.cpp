// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelabelgroupresponse.h"
#include "updatelabelgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::UpdateLabelGroupResponse
 * \brief The UpdateLabelGroupResponse class provides an interace for LookoutEquipment UpdateLabelGroup responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::updateLabelGroup
 */

/*!
 * Constructs a UpdateLabelGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLabelGroupResponse::UpdateLabelGroupResponse(
        const UpdateLabelGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new UpdateLabelGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateLabelGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLabelGroupRequest * UpdateLabelGroupResponse::request() const
{
    Q_D(const UpdateLabelGroupResponse);
    return static_cast<const UpdateLabelGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment UpdateLabelGroup \a response.
 */
void UpdateLabelGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLabelGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::UpdateLabelGroupResponsePrivate
 * \brief The UpdateLabelGroupResponsePrivate class provides private implementation for UpdateLabelGroupResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a UpdateLabelGroupResponsePrivate object with public implementation \a q.
 */
UpdateLabelGroupResponsePrivate::UpdateLabelGroupResponsePrivate(
    UpdateLabelGroupResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment UpdateLabelGroup response element from \a xml.
 */
void UpdateLabelGroupResponsePrivate::parseUpdateLabelGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLabelGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
