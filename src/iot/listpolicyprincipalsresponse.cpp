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

#include "listpolicyprincipalsresponse.h"
#include "listpolicyprincipalsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListPolicyPrincipalsResponse
 * \brief The ListPolicyPrincipalsResponse class provides an interace for IoT ListPolicyPrincipals responses.
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
 * \sa IoTClient::listPolicyPrincipals
 */

/*!
 * Constructs a ListPolicyPrincipalsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPolicyPrincipalsResponse::ListPolicyPrincipalsResponse(
        const ListPolicyPrincipalsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListPolicyPrincipalsResponsePrivate(this), parent)
{
    setRequest(new ListPolicyPrincipalsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPolicyPrincipalsRequest * ListPolicyPrincipalsResponse::request() const
{
    Q_D(const ListPolicyPrincipalsResponse);
    return static_cast<const ListPolicyPrincipalsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT ListPolicyPrincipals \a response.
 */
void ListPolicyPrincipalsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListPolicyPrincipalsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::ListPolicyPrincipalsResponsePrivate
 * \brief The ListPolicyPrincipalsResponsePrivate class provides private implementation for ListPolicyPrincipalsResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a ListPolicyPrincipalsResponsePrivate object with public implementation \a q.
 */
ListPolicyPrincipalsResponsePrivate::ListPolicyPrincipalsResponsePrivate(
    ListPolicyPrincipalsResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT ListPolicyPrincipals response element from \a xml.
 */
void ListPolicyPrincipalsResponsePrivate::parseListPolicyPrincipalsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPolicyPrincipalsResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
