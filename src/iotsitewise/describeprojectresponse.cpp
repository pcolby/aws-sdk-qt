// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprojectresponse.h"
#include "describeprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeProjectResponse
 * \brief The DescribeProjectResponse class provides an interace for IoTSiteWise DescribeProject responses.
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
 * \sa IoTSiteWiseClient::describeProject
 */

/*!
 * Constructs a DescribeProjectResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProjectResponse::DescribeProjectResponse(
        const DescribeProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DescribeProjectResponsePrivate(this), parent)
{
    setRequest(new DescribeProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProjectRequest * DescribeProjectResponse::request() const
{
    Q_D(const DescribeProjectResponse);
    return static_cast<const DescribeProjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DescribeProject \a response.
 */
void DescribeProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DescribeProjectResponsePrivate
 * \brief The DescribeProjectResponsePrivate class provides private implementation for DescribeProjectResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeProjectResponsePrivate object with public implementation \a q.
 */
DescribeProjectResponsePrivate::DescribeProjectResponsePrivate(
    DescribeProjectResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DescribeProject response element from \a xml.
 */
void DescribeProjectResponsePrivate::parseDescribeProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
