// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestreamresponse.h"
#include "updatestreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::UpdateStreamResponse
 * \brief The UpdateStreamResponse class provides an interace for IoT UpdateStream responses.
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
 * \sa IoTClient::updateStream
 */

/*!
 * Constructs a UpdateStreamResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateStreamResponse::UpdateStreamResponse(
        const UpdateStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new UpdateStreamResponsePrivate(this), parent)
{
    setRequest(new UpdateStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateStreamRequest * UpdateStreamResponse::request() const
{
    Q_D(const UpdateStreamResponse);
    return static_cast<const UpdateStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT UpdateStream \a response.
 */
void UpdateStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::UpdateStreamResponsePrivate
 * \brief The UpdateStreamResponsePrivate class provides private implementation for UpdateStreamResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a UpdateStreamResponsePrivate object with public implementation \a q.
 */
UpdateStreamResponsePrivate::UpdateStreamResponsePrivate(
    UpdateStreamResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT UpdateStream response element from \a xml.
 */
void UpdateStreamResponsePrivate::parseUpdateStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
