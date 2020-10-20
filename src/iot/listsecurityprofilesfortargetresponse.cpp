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

#include "listsecurityprofilesfortargetresponse.h"
#include "listsecurityprofilesfortargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListSecurityProfilesForTargetResponse
 * \brief The ListSecurityProfilesForTargetResponse class provides an interace for IoT ListSecurityProfilesForTarget responses.
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
 * \sa IoTClient::listSecurityProfilesForTarget
 */

/*!
 * Constructs a ListSecurityProfilesForTargetResponse object for \a reply to \a request, with parent \a parent.
 */
ListSecurityProfilesForTargetResponse::ListSecurityProfilesForTargetResponse(
        const ListSecurityProfilesForTargetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListSecurityProfilesForTargetResponsePrivate(this), parent)
{
    setRequest(new ListSecurityProfilesForTargetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSecurityProfilesForTargetRequest * ListSecurityProfilesForTargetResponse::request() const
{
    Q_D(const ListSecurityProfilesForTargetResponse);
    return static_cast<const ListSecurityProfilesForTargetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT ListSecurityProfilesForTarget \a response.
 */
void ListSecurityProfilesForTargetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSecurityProfilesForTargetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::ListSecurityProfilesForTargetResponsePrivate
 * \brief The ListSecurityProfilesForTargetResponsePrivate class provides private implementation for ListSecurityProfilesForTargetResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a ListSecurityProfilesForTargetResponsePrivate object with public implementation \a q.
 */
ListSecurityProfilesForTargetResponsePrivate::ListSecurityProfilesForTargetResponsePrivate(
    ListSecurityProfilesForTargetResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT ListSecurityProfilesForTarget response element from \a xml.
 */
void ListSecurityProfilesForTargetResponsePrivate::parseListSecurityProfilesForTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSecurityProfilesForTargetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
