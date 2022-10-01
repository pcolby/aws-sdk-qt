// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategatewayresponse.h"
#include "updategatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::UpdateGatewayResponse
 * \brief The UpdateGatewayResponse class provides an interace for IoTSiteWise UpdateGateway responses.
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
 * \sa IoTSiteWiseClient::updateGateway
 */

/*!
 * Constructs a UpdateGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGatewayResponse::UpdateGatewayResponse(
        const UpdateGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new UpdateGatewayResponsePrivate(this), parent)
{
    setRequest(new UpdateGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGatewayRequest * UpdateGatewayResponse::request() const
{
    Q_D(const UpdateGatewayResponse);
    return static_cast<const UpdateGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise UpdateGateway \a response.
 */
void UpdateGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::UpdateGatewayResponsePrivate
 * \brief The UpdateGatewayResponsePrivate class provides private implementation for UpdateGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a UpdateGatewayResponsePrivate object with public implementation \a q.
 */
UpdateGatewayResponsePrivate::UpdateGatewayResponsePrivate(
    UpdateGatewayResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise UpdateGateway response element from \a xml.
 */
void UpdateGatewayResponsePrivate::parseUpdateGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
