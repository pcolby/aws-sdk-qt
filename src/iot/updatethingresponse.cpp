// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatethingresponse.h"
#include "updatethingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::UpdateThingResponse
 * \brief The UpdateThingResponse class provides an interace for IoT UpdateThing responses.
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
 * \sa IoTClient::updateThing
 */

/*!
 * Constructs a UpdateThingResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateThingResponse::UpdateThingResponse(
        const UpdateThingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new UpdateThingResponsePrivate(this), parent)
{
    setRequest(new UpdateThingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateThingRequest * UpdateThingResponse::request() const
{
    Q_D(const UpdateThingResponse);
    return static_cast<const UpdateThingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT UpdateThing \a response.
 */
void UpdateThingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateThingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::UpdateThingResponsePrivate
 * \brief The UpdateThingResponsePrivate class provides private implementation for UpdateThingResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a UpdateThingResponsePrivate object with public implementation \a q.
 */
UpdateThingResponsePrivate::UpdateThingResponsePrivate(
    UpdateThingResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT UpdateThing response element from \a xml.
 */
void UpdateThingResponsePrivate::parseUpdateThingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateThingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
