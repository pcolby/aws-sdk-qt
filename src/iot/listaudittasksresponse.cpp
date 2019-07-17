/*
    Copyright 2013-2019 Paul Colby

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

#include "listaudittasksresponse.h"
#include "listaudittasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListAuditTasksResponse
 * \brief The ListAuditTasksResponse class provides an interace for IoT ListAuditTasks responses.
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
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for AWS IoT, see <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to AWS
 *
 * \sa IoTClient::listAuditTasks
 */

/*!
 * Constructs a ListAuditTasksResponse object for \a reply to \a request, with parent \a parent.
 */
ListAuditTasksResponse::ListAuditTasksResponse(
        const ListAuditTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListAuditTasksResponsePrivate(this), parent)
{
    setRequest(new ListAuditTasksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAuditTasksRequest * ListAuditTasksResponse::request() const
{
    Q_D(const ListAuditTasksResponse);
    return static_cast<const ListAuditTasksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT ListAuditTasks \a response.
 */
void ListAuditTasksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAuditTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::ListAuditTasksResponsePrivate
 * \brief The ListAuditTasksResponsePrivate class provides private implementation for ListAuditTasksResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a ListAuditTasksResponsePrivate object with public implementation \a q.
 */
ListAuditTasksResponsePrivate::ListAuditTasksResponsePrivate(
    ListAuditTasksResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT ListAuditTasks response element from \a xml.
 */
void ListAuditTasksResponsePrivate::parseListAuditTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAuditTasksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
