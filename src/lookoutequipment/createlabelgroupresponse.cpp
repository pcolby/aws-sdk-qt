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
