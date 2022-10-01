// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeassetpropertyresponse.h"
#include "describeassetpropertyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeAssetPropertyResponse
 * \brief The DescribeAssetPropertyResponse class provides an interace for IoTSiteWise DescribeAssetProperty responses.
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
 * \sa IoTSiteWiseClient::describeAssetProperty
 */

/*!
 * Constructs a DescribeAssetPropertyResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAssetPropertyResponse::DescribeAssetPropertyResponse(
        const DescribeAssetPropertyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DescribeAssetPropertyResponsePrivate(this), parent)
{
    setRequest(new DescribeAssetPropertyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAssetPropertyRequest * DescribeAssetPropertyResponse::request() const
{
    Q_D(const DescribeAssetPropertyResponse);
    return static_cast<const DescribeAssetPropertyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DescribeAssetProperty \a response.
 */
void DescribeAssetPropertyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAssetPropertyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DescribeAssetPropertyResponsePrivate
 * \brief The DescribeAssetPropertyResponsePrivate class provides private implementation for DescribeAssetPropertyResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeAssetPropertyResponsePrivate object with public implementation \a q.
 */
DescribeAssetPropertyResponsePrivate::DescribeAssetPropertyResponsePrivate(
    DescribeAssetPropertyResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DescribeAssetProperty response element from \a xml.
 */
void DescribeAssetPropertyResponsePrivate::parseDescribeAssetPropertyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAssetPropertyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
