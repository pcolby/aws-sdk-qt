// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassociatedassetsresponse.h"
#include "listassociatedassetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListAssociatedAssetsResponse
 * \brief The ListAssociatedAssetsResponse class provides an interace for IoTSiteWise ListAssociatedAssets responses.
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
 * \sa IoTSiteWiseClient::listAssociatedAssets
 */

/*!
 * Constructs a ListAssociatedAssetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssociatedAssetsResponse::ListAssociatedAssetsResponse(
        const ListAssociatedAssetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new ListAssociatedAssetsResponsePrivate(this), parent)
{
    setRequest(new ListAssociatedAssetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssociatedAssetsRequest * ListAssociatedAssetsResponse::request() const
{
    Q_D(const ListAssociatedAssetsResponse);
    return static_cast<const ListAssociatedAssetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise ListAssociatedAssets \a response.
 */
void ListAssociatedAssetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssociatedAssetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::ListAssociatedAssetsResponsePrivate
 * \brief The ListAssociatedAssetsResponsePrivate class provides private implementation for ListAssociatedAssetsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListAssociatedAssetsResponsePrivate object with public implementation \a q.
 */
ListAssociatedAssetsResponsePrivate::ListAssociatedAssetsResponsePrivate(
    ListAssociatedAssetsResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise ListAssociatedAssets response element from \a xml.
 */
void ListAssociatedAssetsResponsePrivate::parseListAssociatedAssetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssociatedAssetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
