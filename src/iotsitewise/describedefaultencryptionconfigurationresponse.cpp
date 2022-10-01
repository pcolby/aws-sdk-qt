// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedefaultencryptionconfigurationresponse.h"
#include "describedefaultencryptionconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeDefaultEncryptionConfigurationResponse
 * \brief The DescribeDefaultEncryptionConfigurationResponse class provides an interace for IoTSiteWise DescribeDefaultEncryptionConfiguration responses.
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
 * \sa IoTSiteWiseClient::describeDefaultEncryptionConfiguration
 */

/*!
 * Constructs a DescribeDefaultEncryptionConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDefaultEncryptionConfigurationResponse::DescribeDefaultEncryptionConfigurationResponse(
        const DescribeDefaultEncryptionConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DescribeDefaultEncryptionConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeDefaultEncryptionConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDefaultEncryptionConfigurationRequest * DescribeDefaultEncryptionConfigurationResponse::request() const
{
    Q_D(const DescribeDefaultEncryptionConfigurationResponse);
    return static_cast<const DescribeDefaultEncryptionConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DescribeDefaultEncryptionConfiguration \a response.
 */
void DescribeDefaultEncryptionConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDefaultEncryptionConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DescribeDefaultEncryptionConfigurationResponsePrivate
 * \brief The DescribeDefaultEncryptionConfigurationResponsePrivate class provides private implementation for DescribeDefaultEncryptionConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeDefaultEncryptionConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeDefaultEncryptionConfigurationResponsePrivate::DescribeDefaultEncryptionConfigurationResponsePrivate(
    DescribeDefaultEncryptionConfigurationResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DescribeDefaultEncryptionConfiguration response element from \a xml.
 */
void DescribeDefaultEncryptionConfigurationResponsePrivate::parseDescribeDefaultEncryptionConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDefaultEncryptionConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
