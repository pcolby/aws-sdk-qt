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

#include "canceljobexecutionresponse.h"
#include "canceljobexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::CancelJobExecutionResponse
 * \brief The CancelJobExecutionResponse class provides an interace for IoT CancelJobExecution responses.
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
 * \sa IoTClient::cancelJobExecution
 */

/*!
 * Constructs a CancelJobExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
CancelJobExecutionResponse::CancelJobExecutionResponse(
        const CancelJobExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new CancelJobExecutionResponsePrivate(this), parent)
{
    setRequest(new CancelJobExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelJobExecutionRequest * CancelJobExecutionResponse::request() const
{
    Q_D(const CancelJobExecutionResponse);
    return static_cast<const CancelJobExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT CancelJobExecution \a response.
 */
void CancelJobExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelJobExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::CancelJobExecutionResponsePrivate
 * \brief The CancelJobExecutionResponsePrivate class provides private implementation for CancelJobExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a CancelJobExecutionResponsePrivate object with public implementation \a q.
 */
CancelJobExecutionResponsePrivate::CancelJobExecutionResponsePrivate(
    CancelJobExecutionResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT CancelJobExecution response element from \a xml.
 */
void CancelJobExecutionResponsePrivate::parseCancelJobExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelJobExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
