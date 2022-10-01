// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecomponentresponse.h"
#include "describecomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GreengrassV2 {

/*!
 * \class QtAws::GreengrassV2::DescribeComponentResponse
 * \brief The DescribeComponentResponse class provides an interace for GreengrassV2 DescribeComponent responses.
 *
 * \inmodule QtAwsGreengrassV2
 *
 *  IoT Greengrass brings local compute, messaging, data management, sync, and ML inference capabilities to edge devices.
 *  This enables devices to collect and analyze data closer to the source of information, react autonomously to local
 *  events, and communicate securely with each other on local networks. Local devices can also communicate securely with
 *  Amazon Web Services IoT Core and export IoT data to the Amazon Web Services Cloud. IoT Greengrass developers can use
 *  Lambda functions and components to create and deploy applications to fleets of edge devices for local
 * 
 *  operation>
 * 
 *  IoT Greengrass Version 2 provides a new major version of the IoT Greengrass Core software, new APIs, and a new console.
 *  Use this API reference to learn how to use the IoT Greengrass V2 API operations to manage components, manage
 *  deployments, and core
 * 
 *  devices>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/greengrass/v2/developerguide/what-is-iot-greengrass.html">What is IoT Greengrass?</a>
 *  in the <i>IoT Greengrass V2 Developer
 *
 * \sa GreengrassV2Client::describeComponent
 */

/*!
 * Constructs a DescribeComponentResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeComponentResponse::DescribeComponentResponse(
        const DescribeComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassV2Response(new DescribeComponentResponsePrivate(this), parent)
{
    setRequest(new DescribeComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeComponentRequest * DescribeComponentResponse::request() const
{
    Q_D(const DescribeComponentResponse);
    return static_cast<const DescribeComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GreengrassV2 DescribeComponent \a response.
 */
void DescribeComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GreengrassV2::DescribeComponentResponsePrivate
 * \brief The DescribeComponentResponsePrivate class provides private implementation for DescribeComponentResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a DescribeComponentResponsePrivate object with public implementation \a q.
 */
DescribeComponentResponsePrivate::DescribeComponentResponsePrivate(
    DescribeComponentResponse * const q) : GreengrassV2ResponsePrivate(q)
{

}

/*!
 * Parses a GreengrassV2 DescribeComponent response element from \a xml.
 */
void DescribeComponentResponsePrivate::parseDescribeComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GreengrassV2
} // namespace QtAws
