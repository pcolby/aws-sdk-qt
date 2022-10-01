// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatethingshadowresponse.h"
#include "updatethingshadowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::UpdateThingShadowResponse
 * \brief The UpdateThingShadowResponse class provides an interace for IoTDataPlane UpdateThingShadow responses.
 *
 * \inmodule QtAwsIoTDataPlane
 *
 *  <fullname>IoT data</fullname>
 * 
 *  IoT data enables secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the Amazon Web Services cloud. It implements a broker for applications and
 *  things to publish messages over HTTP (Publish) and retrieve, update, and delete shadows. A shadow is a persistent
 *  representation of your things and their state in the Amazon Web Services
 * 
 *  cloud>
 * 
 *  Find the endpoint address for actions in IoT data by running this CLI
 * 
 *  command>
 * 
 *  <code>aws iot describe-endpoint --endpoint-type iot:Data-ATS</code>
 * 
 *  </p
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Amazon Web
 *  ServicesSignature Version 4</a> to sign requests is:
 *
 * \sa IoTDataPlaneClient::updateThingShadow
 */

/*!
 * Constructs a UpdateThingShadowResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateThingShadowResponse::UpdateThingShadowResponse(
        const UpdateThingShadowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTDataPlaneResponse(new UpdateThingShadowResponsePrivate(this), parent)
{
    setRequest(new UpdateThingShadowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateThingShadowRequest * UpdateThingShadowResponse::request() const
{
    Q_D(const UpdateThingShadowResponse);
    return static_cast<const UpdateThingShadowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTDataPlane UpdateThingShadow \a response.
 */
void UpdateThingShadowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateThingShadowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTDataPlane::UpdateThingShadowResponsePrivate
 * \brief The UpdateThingShadowResponsePrivate class provides private implementation for UpdateThingShadowResponse.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a UpdateThingShadowResponsePrivate object with public implementation \a q.
 */
UpdateThingShadowResponsePrivate::UpdateThingShadowResponsePrivate(
    UpdateThingShadowResponse * const q) : IoTDataPlaneResponsePrivate(q)
{

}

/*!
 * Parses a IoTDataPlane UpdateThingShadow response element from \a xml.
 */
void UpdateThingShadowResponsePrivate::parseUpdateThingShadowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateThingShadowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTDataPlane
} // namespace QtAws
