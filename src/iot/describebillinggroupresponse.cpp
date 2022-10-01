// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebillinggroupresponse.h"
#include "describebillinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DescribeBillingGroupResponse
 * \brief The DescribeBillingGroupResponse class provides an interace for IoT DescribeBillingGroup responses.
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
 * \sa IoTClient::describeBillingGroup
 */

/*!
 * Constructs a DescribeBillingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBillingGroupResponse::DescribeBillingGroupResponse(
        const DescribeBillingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DescribeBillingGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeBillingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBillingGroupRequest * DescribeBillingGroupResponse::request() const
{
    Q_D(const DescribeBillingGroupResponse);
    return static_cast<const DescribeBillingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT DescribeBillingGroup \a response.
 */
void DescribeBillingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBillingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::DescribeBillingGroupResponsePrivate
 * \brief The DescribeBillingGroupResponsePrivate class provides private implementation for DescribeBillingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DescribeBillingGroupResponsePrivate object with public implementation \a q.
 */
DescribeBillingGroupResponsePrivate::DescribeBillingGroupResponsePrivate(
    DescribeBillingGroupResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT DescribeBillingGroup response element from \a xml.
 */
void DescribeBillingGroupResponsePrivate::parseDescribeBillingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBillingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
