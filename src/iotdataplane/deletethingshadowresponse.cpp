// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletethingshadowresponse.h"
#include "deletethingshadowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::DeleteThingShadowResponse
 * \brief The DeleteThingShadowResponse class provides an interace for IoTDataPlane DeleteThingShadow responses.
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
 * \sa IoTDataPlaneClient::deleteThingShadow
 */

/*!
 * Constructs a DeleteThingShadowResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteThingShadowResponse::DeleteThingShadowResponse(
        const DeleteThingShadowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTDataPlaneResponse(new DeleteThingShadowResponsePrivate(this), parent)
{
    setRequest(new DeleteThingShadowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteThingShadowRequest * DeleteThingShadowResponse::request() const
{
    Q_D(const DeleteThingShadowResponse);
    return static_cast<const DeleteThingShadowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTDataPlane DeleteThingShadow \a response.
 */
void DeleteThingShadowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteThingShadowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTDataPlane::DeleteThingShadowResponsePrivate
 * \brief The DeleteThingShadowResponsePrivate class provides private implementation for DeleteThingShadowResponse.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a DeleteThingShadowResponsePrivate object with public implementation \a q.
 */
DeleteThingShadowResponsePrivate::DeleteThingShadowResponsePrivate(
    DeleteThingShadowResponse * const q) : IoTDataPlaneResponsePrivate(q)
{

}

/*!
 * Parses a IoTDataPlane DeleteThingShadow response element from \a xml.
 */
void DeleteThingShadowResponsePrivate::parseDeleteThingShadowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteThingShadowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTDataPlane
} // namespace QtAws
