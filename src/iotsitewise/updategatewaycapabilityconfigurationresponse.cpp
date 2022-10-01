// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategatewaycapabilityconfigurationresponse.h"
#include "updategatewaycapabilityconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::UpdateGatewayCapabilityConfigurationResponse
 * \brief The UpdateGatewayCapabilityConfigurationResponse class provides an interace for IoTSiteWise UpdateGatewayCapabilityConfiguration responses.
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
 * \sa IoTSiteWiseClient::updateGatewayCapabilityConfiguration
 */

/*!
 * Constructs a UpdateGatewayCapabilityConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGatewayCapabilityConfigurationResponse::UpdateGatewayCapabilityConfigurationResponse(
        const UpdateGatewayCapabilityConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new UpdateGatewayCapabilityConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateGatewayCapabilityConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGatewayCapabilityConfigurationRequest * UpdateGatewayCapabilityConfigurationResponse::request() const
{
    Q_D(const UpdateGatewayCapabilityConfigurationResponse);
    return static_cast<const UpdateGatewayCapabilityConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise UpdateGatewayCapabilityConfiguration \a response.
 */
void UpdateGatewayCapabilityConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGatewayCapabilityConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::UpdateGatewayCapabilityConfigurationResponsePrivate
 * \brief The UpdateGatewayCapabilityConfigurationResponsePrivate class provides private implementation for UpdateGatewayCapabilityConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a UpdateGatewayCapabilityConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateGatewayCapabilityConfigurationResponsePrivate::UpdateGatewayCapabilityConfigurationResponsePrivate(
    UpdateGatewayCapabilityConfigurationResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise UpdateGatewayCapabilityConfiguration response element from \a xml.
 */
void UpdateGatewayCapabilityConfigurationResponsePrivate::parseUpdateGatewayCapabilityConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGatewayCapabilityConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
