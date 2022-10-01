// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegatewayresponse.h"
#include "deletegatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DeleteGatewayResponse
 * \brief The DeleteGatewayResponse class provides an interace for IoTSiteWise DeleteGateway responses.
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
 * \sa IoTSiteWiseClient::deleteGateway
 */

/*!
 * Constructs a DeleteGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGatewayResponse::DeleteGatewayResponse(
        const DeleteGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DeleteGatewayResponsePrivate(this), parent)
{
    setRequest(new DeleteGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGatewayRequest * DeleteGatewayResponse::request() const
{
    Q_D(const DeleteGatewayResponse);
    return static_cast<const DeleteGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DeleteGateway \a response.
 */
void DeleteGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DeleteGatewayResponsePrivate
 * \brief The DeleteGatewayResponsePrivate class provides private implementation for DeleteGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DeleteGatewayResponsePrivate object with public implementation \a q.
 */
DeleteGatewayResponsePrivate::DeleteGatewayResponsePrivate(
    DeleteGatewayResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DeleteGateway response element from \a xml.
 */
void DeleteGatewayResponsePrivate::parseDeleteGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
