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

#include "attachthingprincipalresponse.h"
#include "attachthingprincipalresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::AttachThingPrincipalResponse
 * \brief The AttachThingPrincipalResponse class provides an interace for IoT AttachThingPrincipal responses.
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
 * \sa IoTClient::attachThingPrincipal
 */

/*!
 * Constructs a AttachThingPrincipalResponse object for \a reply to \a request, with parent \a parent.
 */
AttachThingPrincipalResponse::AttachThingPrincipalResponse(
        const AttachThingPrincipalRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new AttachThingPrincipalResponsePrivate(this), parent)
{
    setRequest(new AttachThingPrincipalRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AttachThingPrincipalRequest * AttachThingPrincipalResponse::request() const
{
    Q_D(const AttachThingPrincipalResponse);
    return static_cast<const AttachThingPrincipalRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT AttachThingPrincipal \a response.
 */
void AttachThingPrincipalResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AttachThingPrincipalResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::AttachThingPrincipalResponsePrivate
 * \brief The AttachThingPrincipalResponsePrivate class provides private implementation for AttachThingPrincipalResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a AttachThingPrincipalResponsePrivate object with public implementation \a q.
 */
AttachThingPrincipalResponsePrivate::AttachThingPrincipalResponsePrivate(
    AttachThingPrincipalResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT AttachThingPrincipal response element from \a xml.
 */
void AttachThingPrincipalResponsePrivate::parseAttachThingPrincipalResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachThingPrincipalResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
