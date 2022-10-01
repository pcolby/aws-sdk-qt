// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassetsresponse.h"
#include "listassetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListAssetsResponse
 * \brief The ListAssetsResponse class provides an interace for IoTSiteWise ListAssets responses.
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
 * \sa IoTSiteWiseClient::listAssets
 */

/*!
 * Constructs a ListAssetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssetsResponse::ListAssetsResponse(
        const ListAssetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new ListAssetsResponsePrivate(this), parent)
{
    setRequest(new ListAssetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssetsRequest * ListAssetsResponse::request() const
{
    Q_D(const ListAssetsResponse);
    return static_cast<const ListAssetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise ListAssets \a response.
 */
void ListAssetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::ListAssetsResponsePrivate
 * \brief The ListAssetsResponsePrivate class provides private implementation for ListAssetsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListAssetsResponsePrivate object with public implementation \a q.
 */
ListAssetsResponsePrivate::ListAssetsResponsePrivate(
    ListAssetsResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise ListAssets response element from \a xml.
 */
void ListAssetsResponsePrivate::parseListAssetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
