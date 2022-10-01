// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describethinggroupresponse.h"
#include "describethinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DescribeThingGroupResponse
 * \brief The DescribeThingGroupResponse class provides an interace for IoT DescribeThingGroup responses.
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
 * \sa IoTClient::describeThingGroup
 */

/*!
 * Constructs a DescribeThingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeThingGroupResponse::DescribeThingGroupResponse(
        const DescribeThingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DescribeThingGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeThingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeThingGroupRequest * DescribeThingGroupResponse::request() const
{
    Q_D(const DescribeThingGroupResponse);
    return static_cast<const DescribeThingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT DescribeThingGroup \a response.
 */
void DescribeThingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeThingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::DescribeThingGroupResponsePrivate
 * \brief The DescribeThingGroupResponsePrivate class provides private implementation for DescribeThingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DescribeThingGroupResponsePrivate object with public implementation \a q.
 */
DescribeThingGroupResponsePrivate::DescribeThingGroupResponsePrivate(
    DescribeThingGroupResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT DescribeThingGroup response element from \a xml.
 */
void DescribeThingGroupResponsePrivate::parseDescribeThingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeThingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
