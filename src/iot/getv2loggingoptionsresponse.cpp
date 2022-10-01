// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getv2loggingoptionsresponse.h"
#include "getv2loggingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::GetV2LoggingOptionsResponse
 * \brief The GetV2LoggingOptionsResponse class provides an interace for IoT GetV2LoggingOptions responses.
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
 * \sa IoTClient::getV2LoggingOptions
 */

/*!
 * Constructs a GetV2LoggingOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetV2LoggingOptionsResponse::GetV2LoggingOptionsResponse(
        const GetV2LoggingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new GetV2LoggingOptionsResponsePrivate(this), parent)
{
    setRequest(new GetV2LoggingOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetV2LoggingOptionsRequest * GetV2LoggingOptionsResponse::request() const
{
    Q_D(const GetV2LoggingOptionsResponse);
    return static_cast<const GetV2LoggingOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT GetV2LoggingOptions \a response.
 */
void GetV2LoggingOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetV2LoggingOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::GetV2LoggingOptionsResponsePrivate
 * \brief The GetV2LoggingOptionsResponsePrivate class provides private implementation for GetV2LoggingOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a GetV2LoggingOptionsResponsePrivate object with public implementation \a q.
 */
GetV2LoggingOptionsResponsePrivate::GetV2LoggingOptionsResponsePrivate(
    GetV2LoggingOptionsResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT GetV2LoggingOptions response element from \a xml.
 */
void GetV2LoggingOptionsResponsePrivate::parseGetV2LoggingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetV2LoggingOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
