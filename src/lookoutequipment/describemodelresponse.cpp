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

#include "describemodelresponse.h"
#include "describemodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DescribeModelResponse
 * \brief The DescribeModelResponse class provides an interace for LookoutEquipment DescribeModel responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::describeModel
 */

/*!
 * Constructs a DescribeModelResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeModelResponse::DescribeModelResponse(
        const DescribeModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new DescribeModelResponsePrivate(this), parent)
{
    setRequest(new DescribeModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeModelRequest * DescribeModelResponse::request() const
{
    return static_cast<const DescribeModelRequest *>(LookoutEquipmentResponse::request());
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment DescribeModel \a response.
 */
void DescribeModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::DescribeModelResponsePrivate
 * \brief The DescribeModelResponsePrivate class provides private implementation for DescribeModelResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DescribeModelResponsePrivate object with public implementation \a q.
 */
DescribeModelResponsePrivate::DescribeModelResponsePrivate(
    DescribeModelResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment DescribeModel response element from \a xml.
 */
void DescribeModelResponsePrivate::parseDescribeModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
