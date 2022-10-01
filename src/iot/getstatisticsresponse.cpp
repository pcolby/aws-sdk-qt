// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>IoT</fullname>
 * 
 *  IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the Amazon Web Services cloud. You can discover your custom IoT-Data endpoint
 *  to communicate with, configure rules for data processing and integration with other services, organize resources
 *  associated with each device (Registry), configure logging, and create and manage policies and credentials to
 *  authenticate
 * 
 *  devices>
 * 
 *  The service endpoints that expose this API are listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html">Amazon Web Services IoT Core Endpoints and
 *  Quotas</a>. You must use the endpoint for the region that has the resources you want to
 * 
 *  access>
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Amazon Web
 *  Services Signature Version 4</a> to sign the request is:
 * 
 *  <i>execute-api</i>>
 * 
 *  For more information about how IoT works, see the <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for IoT, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to
 *  Amazon Web Services
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
