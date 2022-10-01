// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategatewayresponse.h"
#include "creategatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::CreateGatewayResponse
 * \brief The CreateGatewayResponse class provides an interace for IoTSiteWise CreateGateway responses.
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
 * \sa IoTSiteWiseClient::createGateway
 */

/*!
 * Constructs a CreateGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGatewayResponse::CreateGatewayResponse(
        const CreateGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new CreateGatewayResponsePrivate(this), parent)
{
    setRequest(new CreateGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGatewayRequest * CreateGatewayResponse::request() const
{
    Q_D(const CreateGatewayResponse);
    return static_cast<const CreateGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise CreateGateway \a response.
 */
void CreateGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::CreateGatewayResponsePrivate
 * \brief The CreateGatewayResponsePrivate class provides private implementation for CreateGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a CreateGatewayResponsePrivate object with public implementation \a q.
 */
CreateGatewayResponsePrivate::CreateGatewayResponsePrivate(
    CreateGatewayResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise CreateGateway response element from \a xml.
 */
void CreateGatewayResponsePrivate::parseCreateGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
