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

#include "setloggingoptionsresponse.h"
#include "setloggingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::SetLoggingOptionsResponse
 * \brief The SetLoggingOptionsResponse class provides an interace for IoT SetLoggingOptions responses.
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
 * \sa IoTClient::setLoggingOptions
 */

/*!
 * Constructs a SetLoggingOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
SetLoggingOptionsResponse::SetLoggingOptionsResponse(
        const SetLoggingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new SetLoggingOptionsResponsePrivate(this), parent)
{
    setRequest(new SetLoggingOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetLoggingOptionsRequest * SetLoggingOptionsResponse::request() const
{
    Q_D(const SetLoggingOptionsResponse);
    return static_cast<const SetLoggingOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT SetLoggingOptions \a response.
 */
void SetLoggingOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetLoggingOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::SetLoggingOptionsResponsePrivate
 * \brief The SetLoggingOptionsResponsePrivate class provides private implementation for SetLoggingOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a SetLoggingOptionsResponsePrivate object with public implementation \a q.
 */
SetLoggingOptionsResponsePrivate::SetLoggingOptionsResponsePrivate(
    SetLoggingOptionsResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT SetLoggingOptions response element from \a xml.
 */
void SetLoggingOptionsResponsePrivate::parseSetLoggingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetLoggingOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
