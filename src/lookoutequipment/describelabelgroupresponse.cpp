// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
