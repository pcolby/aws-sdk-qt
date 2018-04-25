/*
    Copyright 2013-2018 Paul Colby

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

#include "createkeysandcertificateresponse.h"
#include "createkeysandcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::CreateKeysAndCertificateResponse
 * \brief The CreateKeysAndCertificateResponse class provides an interace for IoT CreateKeysAndCertificate responses.
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
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::createKeysAndCertificate
 */

/*!
 * Constructs a CreateKeysAndCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateKeysAndCertificateResponse::CreateKeysAndCertificateResponse(
        const CreateKeysAndCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new CreateKeysAndCertificateResponsePrivate(this), parent)
{
    setRequest(new CreateKeysAndCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateKeysAndCertificateRequest * CreateKeysAndCertificateResponse::request() const
{
    Q_D(const CreateKeysAndCertificateResponse);
    return static_cast<const CreateKeysAndCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT CreateKeysAndCertificate \a response.
 */
void CreateKeysAndCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateKeysAndCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::CreateKeysAndCertificateResponsePrivate
 * \brief The CreateKeysAndCertificateResponsePrivate class provides private implementation for CreateKeysAndCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a CreateKeysAndCertificateResponsePrivate object with public implementation \a q.
 */
CreateKeysAndCertificateResponsePrivate::CreateKeysAndCertificateResponsePrivate(
    CreateKeysAndCertificateResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT CreateKeysAndCertificate response element from \a xml.
 */
void CreateKeysAndCertificateResponsePrivate::parseCreateKeysAndCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateKeysAndCertificateResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
