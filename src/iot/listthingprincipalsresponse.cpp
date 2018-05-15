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

#include "listthingprincipalsresponse.h"
#include "listthingprincipalsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListThingPrincipalsResponse
 * \brief The ListThingPrincipalsResponse class provides an interace for IoT ListThingPrincipals responses.
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
 * \sa IoTClient::listThingPrincipals
 */

/*!
 * Constructs a ListThingPrincipalsResponse object for \a reply to \a request, with parent \a parent.
 */
ListThingPrincipalsResponse::ListThingPrincipalsResponse(
        const ListThingPrincipalsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListThingPrincipalsResponsePrivate(this), parent)
{
    setRequest(new ListThingPrincipalsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListThingPrincipalsRequest * ListThingPrincipalsResponse::request() const
{
    Q_D(const ListThingPrincipalsResponse);
    return static_cast<const ListThingPrincipalsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT ListThingPrincipals \a response.
 */
void ListThingPrincipalsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListThingPrincipalsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::ListThingPrincipalsResponsePrivate
 * \brief The ListThingPrincipalsResponsePrivate class provides private implementation for ListThingPrincipalsResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a ListThingPrincipalsResponsePrivate object with public implementation \a q.
 */
ListThingPrincipalsResponsePrivate::ListThingPrincipalsResponsePrivate(
    ListThingPrincipalsResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT ListThingPrincipals response element from \a xml.
 */
void ListThingPrincipalsResponsePrivate::parseListThingPrincipalsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThingPrincipalsResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
