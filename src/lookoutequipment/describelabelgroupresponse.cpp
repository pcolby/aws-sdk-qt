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

#include "describelabelgroupresponse.h"
#include "describelabelgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DescribeLabelGroupResponse
 * \brief The DescribeLabelGroupResponse class provides an interace for LookoutEquipment DescribeLabelGroup responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::describeLabelGroup
 */

/*!
 * Constructs a DescribeLabelGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLabelGroupResponse::DescribeLabelGroupResponse(
        const DescribeLabelGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new DescribeLabelGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeLabelGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLabelGroupRequest * DescribeLabelGroupResponse::request() const
{
    Q_D(const DescribeLabelGroupResponse);
    return static_cast<const DescribeLabelGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment DescribeLabelGroup \a response.
 */
void DescribeLabelGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLabelGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::DescribeLabelGroupResponsePrivate
 * \brief The DescribeLabelGroupResponsePrivate class provides private implementation for DescribeLabelGroupResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DescribeLabelGroupResponsePrivate object with public implementation \a q.
 */
DescribeLabelGroupResponsePrivate::DescribeLabelGroupResponsePrivate(
    DescribeLabelGroupResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment DescribeLabelGroup response element from \a xml.
 */
void DescribeLabelGroupResponsePrivate::parseDescribeLabelGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLabelGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
