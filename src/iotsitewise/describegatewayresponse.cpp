// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describegatewayresponse.h"
#include "describegatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeGatewayResponse
 * \brief The DescribeGatewayResponse class provides an interace for IoTSiteWise DescribeGateway responses.
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
 * \sa IoTSiteWiseClient::describeGateway
 */

/*!
 * Constructs a DescribeGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeGatewayResponse::DescribeGatewayResponse(
        const DescribeGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DescribeGatewayResponsePrivate(this), parent)
{
    setRequest(new DescribeGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeGatewayRequest * DescribeGatewayResponse::request() const
{
    Q_D(const DescribeGatewayResponse);
    return static_cast<const DescribeGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DescribeGateway \a response.
 */
void DescribeGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DescribeGatewayResponsePrivate
 * \brief The DescribeGatewayResponsePrivate class provides private implementation for DescribeGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeGatewayResponsePrivate object with public implementation \a q.
 */
DescribeGatewayResponsePrivate::DescribeGatewayResponsePrivate(
    DescribeGatewayResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DescribeGateway response element from \a xml.
 */
void DescribeGatewayResponsePrivate::parseDescribeGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
