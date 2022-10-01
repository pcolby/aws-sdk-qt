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

#include "deletejobexecutionresponse.h"
#include "deletejobexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DeleteJobExecutionResponse
 * \brief The DeleteJobExecutionResponse class provides an interace for IoT DeleteJobExecution responses.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>IoT</fullname>
 * 
 *  IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the Amazon Web Services cloud. You can discover your custom IoT-Data endpoint
 *  to communicate with, configure rules for data processing and integration with other services, organize resources
 *  associated with each device (Registry), configure logging, and create and manage policies and credentials to
 *  authenticate
 * 
 *  devices>
 * 
 *  The service endpoints that expose this API are listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html">Amazon Web Services IoT Core Endpoints and
 *  Quotas</a>. You must use the endpoint for the region that has the resources you want to
 * 
 *  access>
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Amazon Web
 *  Services Signature Version 4</a> to sign the request is:
 * 
 *  <i>execute-api</i>>
 * 
 *  For more information about how IoT works, see the <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for IoT, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to
 *  Amazon Web Services
 *
 * \sa IoTClient::deleteJobExecution
 */

/*!
 * Constructs a DeleteJobExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteJobExecutionResponse::DeleteJobExecutionResponse(
        const DeleteJobExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DeleteJobExecutionResponsePrivate(this), parent)
{
    setRequest(new DeleteJobExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteJobExecutionRequest * DeleteJobExecutionResponse::request() const
{
    Q_D(const DeleteJobExecutionResponse);
    return static_cast<const DeleteJobExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT DeleteJobExecution \a response.
 */
void DeleteJobExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteJobExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::DeleteJobExecutionResponsePrivate
 * \brief The DeleteJobExecutionResponsePrivate class provides private implementation for DeleteJobExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DeleteJobExecutionResponsePrivate object with public implementation \a q.
 */
DeleteJobExecutionResponsePrivate::DeleteJobExecutionResponsePrivate(
    DeleteJobExecutionResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT DeleteJobExecution response element from \a xml.
 */
void DeleteJobExecutionResponsePrivate::parseDeleteJobExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteJobExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
