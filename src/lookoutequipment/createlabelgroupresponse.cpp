// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlabelgroupresponse.h"
#include "createlabelgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::CreateLabelGroupResponse
 * \brief The CreateLabelGroupResponse class provides an interace for LookoutEquipment CreateLabelGroup responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::createLabelGroup
 */

/*!
 * Constructs a CreateLabelGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLabelGroupResponse::CreateLabelGroupResponse(
        const CreateLabelGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new CreateLabelGroupResponsePrivate(this), parent)
{
    setRequest(new CreateLabelGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLabelGroupRequest * CreateLabelGroupResponse::request() const
{
    Q_D(const CreateLabelGroupResponse);
    return static_cast<const CreateLabelGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment CreateLabelGroup \a response.
 */
void CreateLabelGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLabelGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::CreateLabelGroupResponsePrivate
 * \brief The CreateLabelGroupResponsePrivate class provides private implementation for CreateLabelGroupResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a CreateLabelGroupResponsePrivate object with public implementation \a q.
 */
CreateLabelGroupResponsePrivate::CreateLabelGroupResponsePrivate(
    CreateLabelGroupResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment CreateLabelGroup response element from \a xml.
 */
void CreateLabelGroupResponsePrivate::parseCreateLabelGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLabelGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
