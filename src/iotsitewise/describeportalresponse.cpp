// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeportalresponse.h"
#include "describeportalresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribePortalResponse
 * \brief The DescribePortalResponse class provides an interace for IoTSiteWise DescribePortal responses.
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
 * \sa IoTSiteWiseClient::describePortal
 */

/*!
 * Constructs a DescribePortalResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePortalResponse::DescribePortalResponse(
        const DescribePortalRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DescribePortalResponsePrivate(this), parent)
{
    setRequest(new DescribePortalRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePortalRequest * DescribePortalResponse::request() const
{
    Q_D(const DescribePortalResponse);
    return static_cast<const DescribePortalRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DescribePortal \a response.
 */
void DescribePortalResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePortalResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DescribePortalResponsePrivate
 * \brief The DescribePortalResponsePrivate class provides private implementation for DescribePortalResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribePortalResponsePrivate object with public implementation \a q.
 */
DescribePortalResponsePrivate::DescribePortalResponsePrivate(
    DescribePortalResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DescribePortal response element from \a xml.
 */
void DescribePortalResponsePrivate::parseDescribePortalResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePortalResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
