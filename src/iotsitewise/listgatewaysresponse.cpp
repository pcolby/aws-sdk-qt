// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgatewaysresponse.h"
#include "listgatewaysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListGatewaysResponse
 * \brief The ListGatewaysResponse class provides an interace for IoTSiteWise ListGateways responses.
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
 * \sa IoTSiteWiseClient::listGateways
 */

/*!
 * Constructs a ListGatewaysResponse object for \a reply to \a request, with parent \a parent.
 */
ListGatewaysResponse::ListGatewaysResponse(
        const ListGatewaysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new ListGatewaysResponsePrivate(this), parent)
{
    setRequest(new ListGatewaysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGatewaysRequest * ListGatewaysResponse::request() const
{
    Q_D(const ListGatewaysResponse);
    return static_cast<const ListGatewaysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise ListGateways \a response.
 */
void ListGatewaysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGatewaysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::ListGatewaysResponsePrivate
 * \brief The ListGatewaysResponsePrivate class provides private implementation for ListGatewaysResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListGatewaysResponsePrivate object with public implementation \a q.
 */
ListGatewaysResponsePrivate::ListGatewaysResponsePrivate(
    ListGatewaysResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise ListGateways response element from \a xml.
 */
void ListGatewaysResponsePrivate::parseListGatewaysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGatewaysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
