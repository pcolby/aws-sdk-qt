/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listprincipalthingsresponse.h"
#include "listprincipalthingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListPrincipalThingsResponse
 * \brief The ListPrincipalThingsResponse class provides an interace for IoT ListPrincipalThings responses.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  thing (Thing Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  things>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::listPrincipalThings
 */

/*!
 * Constructs a ListPrincipalThingsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPrincipalThingsResponse::ListPrincipalThingsResponse(
        const ListPrincipalThingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListPrincipalThingsResponsePrivate(this), parent)
{
    setRequest(new ListPrincipalThingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPrincipalThingsRequest * ListPrincipalThingsResponse::request() const
{
    Q_D(const ListPrincipalThingsResponse);
    return static_cast<const ListPrincipalThingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT ListPrincipalThings \a response.
 */
void ListPrincipalThingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListPrincipalThingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::ListPrincipalThingsResponsePrivate
 * \brief The ListPrincipalThingsResponsePrivate class provides private implementation for ListPrincipalThingsResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a ListPrincipalThingsResponsePrivate object with public implementation \a q.
 */
ListPrincipalThingsResponsePrivate::ListPrincipalThingsResponsePrivate(
    ListPrincipalThingsResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT ListPrincipalThings response element from \a xml.
 */
void ListPrincipalThingsResponsePrivate::parseListPrincipalThingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPrincipalThingsResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
