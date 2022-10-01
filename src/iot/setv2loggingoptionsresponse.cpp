// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setv2loggingoptionsresponse.h"
#include "setv2loggingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::SetV2LoggingOptionsResponse
 * \brief The SetV2LoggingOptionsResponse class provides an interace for IoT SetV2LoggingOptions responses.
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
 * \sa IoTClient::setV2LoggingOptions
 */

/*!
 * Constructs a SetV2LoggingOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
SetV2LoggingOptionsResponse::SetV2LoggingOptionsResponse(
        const SetV2LoggingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new SetV2LoggingOptionsResponsePrivate(this), parent)
{
    setRequest(new SetV2LoggingOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetV2LoggingOptionsRequest * SetV2LoggingOptionsResponse::request() const
{
    Q_D(const SetV2LoggingOptionsResponse);
    return static_cast<const SetV2LoggingOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT SetV2LoggingOptions \a response.
 */
void SetV2LoggingOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetV2LoggingOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::SetV2LoggingOptionsResponsePrivate
 * \brief The SetV2LoggingOptionsResponsePrivate class provides private implementation for SetV2LoggingOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a SetV2LoggingOptionsResponsePrivate object with public implementation \a q.
 */
SetV2LoggingOptionsResponsePrivate::SetV2LoggingOptionsResponsePrivate(
    SetV2LoggingOptionsResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT SetV2LoggingOptions response element from \a xml.
 */
void SetV2LoggingOptionsResponsePrivate::parseSetV2LoggingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetV2LoggingOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
