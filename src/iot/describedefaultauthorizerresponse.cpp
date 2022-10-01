// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedefaultauthorizerresponse.h"
#include "describedefaultauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DescribeDefaultAuthorizerResponse
 * \brief The DescribeDefaultAuthorizerResponse class provides an interace for IoT DescribeDefaultAuthorizer responses.
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
 * \sa IoTClient::describeDefaultAuthorizer
 */

/*!
 * Constructs a DescribeDefaultAuthorizerResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDefaultAuthorizerResponse::DescribeDefaultAuthorizerResponse(
        const DescribeDefaultAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DescribeDefaultAuthorizerResponsePrivate(this), parent)
{
    setRequest(new DescribeDefaultAuthorizerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDefaultAuthorizerRequest * DescribeDefaultAuthorizerResponse::request() const
{
    Q_D(const DescribeDefaultAuthorizerResponse);
    return static_cast<const DescribeDefaultAuthorizerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT DescribeDefaultAuthorizer \a response.
 */
void DescribeDefaultAuthorizerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDefaultAuthorizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::DescribeDefaultAuthorizerResponsePrivate
 * \brief The DescribeDefaultAuthorizerResponsePrivate class provides private implementation for DescribeDefaultAuthorizerResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DescribeDefaultAuthorizerResponsePrivate object with public implementation \a q.
 */
DescribeDefaultAuthorizerResponsePrivate::DescribeDefaultAuthorizerResponsePrivate(
    DescribeDefaultAuthorizerResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT DescribeDefaultAuthorizer response element from \a xml.
 */
void DescribeDefaultAuthorizerResponsePrivate::parseDescribeDefaultAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDefaultAuthorizerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
