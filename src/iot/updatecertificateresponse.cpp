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

#include "updatecertificateresponse.h"
#include "updatecertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::UpdateCertificateResponse
 * \brief The UpdateCertificateResponse class provides an interace for IoT UpdateCertificate responses.
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
 * \sa IoTClient::updateCertificate
 */

/*!
 * Constructs a UpdateCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCertificateResponse::UpdateCertificateResponse(
        const UpdateCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new UpdateCertificateResponsePrivate(this), parent)
{
    setRequest(new UpdateCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCertificateRequest * UpdateCertificateResponse::request() const
{
    Q_D(const UpdateCertificateResponse);
    return static_cast<const UpdateCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT UpdateCertificate \a response.
 */
void UpdateCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::UpdateCertificateResponsePrivate
 * \brief The UpdateCertificateResponsePrivate class provides private implementation for UpdateCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a UpdateCertificateResponsePrivate object with public implementation \a q.
 */
UpdateCertificateResponsePrivate::UpdateCertificateResponsePrivate(
    UpdateCertificateResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT UpdateCertificate response element from \a xml.
 */
void UpdateCertificateResponsePrivate::parseUpdateCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
