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

#include "deletev2logginglevelresponse.h"
#include "deletev2logginglevelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DeleteV2LoggingLevelResponse
 * \brief The DeleteV2LoggingLevelResponse class provides an interace for IoT DeleteV2LoggingLevel responses.
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
 * \sa IoTClient::deleteV2LoggingLevel
 */

/*!
 * Constructs a DeleteV2LoggingLevelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteV2LoggingLevelResponse::DeleteV2LoggingLevelResponse(
        const DeleteV2LoggingLevelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DeleteV2LoggingLevelResponsePrivate(this), parent)
{
    setRequest(new DeleteV2LoggingLevelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteV2LoggingLevelRequest * DeleteV2LoggingLevelResponse::request() const
{
    Q_D(const DeleteV2LoggingLevelResponse);
    return static_cast<const DeleteV2LoggingLevelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT DeleteV2LoggingLevel \a response.
 */
void DeleteV2LoggingLevelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteV2LoggingLevelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::DeleteV2LoggingLevelResponsePrivate
 * \brief The DeleteV2LoggingLevelResponsePrivate class provides private implementation for DeleteV2LoggingLevelResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DeleteV2LoggingLevelResponsePrivate object with public implementation \a q.
 */
DeleteV2LoggingLevelResponsePrivate::DeleteV2LoggingLevelResponsePrivate(
    DeleteV2LoggingLevelResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT DeleteV2LoggingLevel response element from \a xml.
 */
void DeleteV2LoggingLevelResponsePrivate::parseDeleteV2LoggingLevelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteV2LoggingLevelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
