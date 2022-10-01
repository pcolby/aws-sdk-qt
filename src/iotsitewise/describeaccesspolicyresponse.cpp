// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaccesspolicyresponse.h"
#include "describeaccesspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeAccessPolicyResponse
 * \brief The DescribeAccessPolicyResponse class provides an interace for IoTSiteWise DescribeAccessPolicy responses.
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
 * \sa IoTSiteWiseClient::describeAccessPolicy
 */

/*!
 * Constructs a DescribeAccessPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAccessPolicyResponse::DescribeAccessPolicyResponse(
        const DescribeAccessPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DescribeAccessPolicyResponsePrivate(this), parent)
{
    setRequest(new DescribeAccessPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAccessPolicyRequest * DescribeAccessPolicyResponse::request() const
{
    Q_D(const DescribeAccessPolicyResponse);
    return static_cast<const DescribeAccessPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DescribeAccessPolicy \a response.
 */
void DescribeAccessPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAccessPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DescribeAccessPolicyResponsePrivate
 * \brief The DescribeAccessPolicyResponsePrivate class provides private implementation for DescribeAccessPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeAccessPolicyResponsePrivate object with public implementation \a q.
 */
DescribeAccessPolicyResponsePrivate::DescribeAccessPolicyResponsePrivate(
    DescribeAccessPolicyResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DescribeAccessPolicy response element from \a xml.
 */
void DescribeAccessPolicyResponsePrivate::parseDescribeAccessPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccessPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
