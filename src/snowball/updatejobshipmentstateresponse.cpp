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

#include "updatejobshipmentstateresponse.h"
#include "updatejobshipmentstateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::UpdateJobShipmentStateResponse
 * \brief The UpdateJobShipmentStateResponse class provides an interace for Snowball UpdateJobShipmentState responses.
 *
 * \inmodule QtAwsSnowball
 *
 *  AWS Snow Family is a petabyte-scale data transport solution that uses secure devices to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The Snow commands described here
 *  provide access to the same functionality that is available in the AWS Snow Family Management Console, which enables you
 *  to create and manage jobs for a Snow device. To transfer data locally with a Snow device, you'll need to use the
 *  Snowball Edge client or the Amazon S3 API Interface for Snowball or AWS OpsHub for Snow Family. For more information,
 *  see the <a href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::updateJobShipmentState
 */

/*!
 * Constructs a UpdateJobShipmentStateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateJobShipmentStateResponse::UpdateJobShipmentStateResponse(
        const UpdateJobShipmentStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new UpdateJobShipmentStateResponsePrivate(this), parent)
{
    setRequest(new UpdateJobShipmentStateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateJobShipmentStateRequest * UpdateJobShipmentStateResponse::request() const
{
    return static_cast<const UpdateJobShipmentStateRequest *>(SnowballResponse::request());
}

/*!
 * \reimp
 * Parses a successful Snowball UpdateJobShipmentState \a response.
 */
void UpdateJobShipmentStateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateJobShipmentStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::UpdateJobShipmentStateResponsePrivate
 * \brief The UpdateJobShipmentStateResponsePrivate class provides private implementation for UpdateJobShipmentStateResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a UpdateJobShipmentStateResponsePrivate object with public implementation \a q.
 */
UpdateJobShipmentStateResponsePrivate::UpdateJobShipmentStateResponsePrivate(
    UpdateJobShipmentStateResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball UpdateJobShipmentState response element from \a xml.
 */
void UpdateJobShipmentStateResponsePrivate::parseUpdateJobShipmentStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateJobShipmentStateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
