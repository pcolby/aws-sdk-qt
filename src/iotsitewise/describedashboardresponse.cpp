// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedashboardresponse.h"
#include "describedashboardresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeDashboardResponse
 * \brief The DescribeDashboardResponse class provides an interace for IoTSiteWise DescribeDashboard responses.
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
 * \sa IoTSiteWiseClient::describeDashboard
 */

/*!
 * Constructs a DescribeDashboardResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDashboardResponse::DescribeDashboardResponse(
        const DescribeDashboardRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DescribeDashboardResponsePrivate(this), parent)
{
    setRequest(new DescribeDashboardRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDashboardRequest * DescribeDashboardResponse::request() const
{
    Q_D(const DescribeDashboardResponse);
    return static_cast<const DescribeDashboardRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DescribeDashboard \a response.
 */
void DescribeDashboardResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDashboardResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DescribeDashboardResponsePrivate
 * \brief The DescribeDashboardResponsePrivate class provides private implementation for DescribeDashboardResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeDashboardResponsePrivate object with public implementation \a q.
 */
DescribeDashboardResponsePrivate::DescribeDashboardResponsePrivate(
    DescribeDashboardResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DescribeDashboard response element from \a xml.
 */
void DescribeDashboardResponsePrivate::parseDescribeDashboardResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDashboardResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
