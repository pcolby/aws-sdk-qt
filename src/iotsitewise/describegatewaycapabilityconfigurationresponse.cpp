// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describegatewaycapabilityconfigurationresponse.h"
#include "describegatewaycapabilityconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeGatewayCapabilityConfigurationResponse
 * \brief The DescribeGatewayCapabilityConfigurationResponse class provides an interace for IoTSiteWise DescribeGatewayCapabilityConfiguration responses.
 *
 * \inmodule QtAwsIoTSiteWise
 *
 *  Welcome to the IoT SiteWise API Reference. IoT SiteWise is an Amazon Web Services service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the Amazon Web Services Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">IoT SiteWise User Guide</a>. For information about IoT
 *  SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a> in the
 *  <i>IoT SiteWise User
 *
 * \sa IoTSiteWiseClient::describeGatewayCapabilityConfiguration
 */

/*!
 * Constructs a DescribeGatewayCapabilityConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeGatewayCapabilityConfigurationResponse::DescribeGatewayCapabilityConfigurationResponse(
        const DescribeGatewayCapabilityConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DescribeGatewayCapabilityConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeGatewayCapabilityConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeGatewayCapabilityConfigurationRequest * DescribeGatewayCapabilityConfigurationResponse::request() const
{
    Q_D(const DescribeGatewayCapabilityConfigurationResponse);
    return static_cast<const DescribeGatewayCapabilityConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DescribeGatewayCapabilityConfiguration \a response.
 */
void DescribeGatewayCapabilityConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeGatewayCapabilityConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DescribeGatewayCapabilityConfigurationResponsePrivate
 * \brief The DescribeGatewayCapabilityConfigurationResponsePrivate class provides private implementation for DescribeGatewayCapabilityConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeGatewayCapabilityConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeGatewayCapabilityConfigurationResponsePrivate::DescribeGatewayCapabilityConfigurationResponsePrivate(
    DescribeGatewayCapabilityConfigurationResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DescribeGatewayCapabilityConfiguration response element from \a xml.
 */
void DescribeGatewayCapabilityConfigurationResponsePrivate::parseDescribeGatewayCapabilityConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGatewayCapabilityConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
