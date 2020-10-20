/*
    Copyright 2013-2020 Paul Colby

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

#include "getstatisticsresponse.h"
#include "getstatisticsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::GetStatisticsResponse
 * \brief The GetStatisticsResponse class provides an interace for IoT GetStatistics responses.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  device (Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  devices>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for AWS IoT, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to AWS
 *
 * \sa IoTClient::getStatistics
 */

/*!
 * Constructs a GetStatisticsResponse object for \a reply to \a request, with parent \a parent.
 */
GetStatisticsResponse::GetStatisticsResponse(
        const GetStatisticsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new GetStatisticsResponsePrivate(this), parent)
{
    setRequest(new GetStatisticsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStatisticsRequest * GetStatisticsResponse::request() const
{
    Q_D(const GetStatisticsResponse);
    return static_cast<const GetStatisticsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT GetStatistics \a response.
 */
void GetStatisticsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStatisticsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::GetStatisticsResponsePrivate
 * \brief The GetStatisticsResponsePrivate class provides private implementation for GetStatisticsResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a GetStatisticsResponsePrivate object with public implementation \a q.
 */
GetStatisticsResponsePrivate::GetStatisticsResponsePrivate(
    GetStatisticsResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT GetStatistics response element from \a xml.
 */
void GetStatisticsResponsePrivate::parseGetStatisticsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStatisticsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
