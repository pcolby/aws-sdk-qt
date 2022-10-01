// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeassetresponse.h"
#include "describeassetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeAssetResponse
 * \brief The DescribeAssetResponse class provides an interace for IoTSiteWise DescribeAsset responses.
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
 * \sa IoTSiteWiseClient::describeAsset
 */

/*!
 * Constructs a DescribeAssetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAssetResponse::DescribeAssetResponse(
        const DescribeAssetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DescribeAssetResponsePrivate(this), parent)
{
    setRequest(new DescribeAssetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAssetRequest * DescribeAssetResponse::request() const
{
    Q_D(const DescribeAssetResponse);
    return static_cast<const DescribeAssetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DescribeAsset \a response.
 */
void DescribeAssetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAssetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DescribeAssetResponsePrivate
 * \brief The DescribeAssetResponsePrivate class provides private implementation for DescribeAssetResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeAssetResponsePrivate object with public implementation \a q.
 */
DescribeAssetResponsePrivate::DescribeAssetResponsePrivate(
    DescribeAssetResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DescribeAsset response element from \a xml.
 */
void DescribeAssetResponsePrivate::parseDescribeAssetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAssetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
