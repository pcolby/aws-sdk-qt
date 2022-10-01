// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprojectassetsresponse.h"
#include "listprojectassetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListProjectAssetsResponse
 * \brief The ListProjectAssetsResponse class provides an interace for IoTSiteWise ListProjectAssets responses.
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
 * \sa IoTSiteWiseClient::listProjectAssets
 */

/*!
 * Constructs a ListProjectAssetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListProjectAssetsResponse::ListProjectAssetsResponse(
        const ListProjectAssetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new ListProjectAssetsResponsePrivate(this), parent)
{
    setRequest(new ListProjectAssetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProjectAssetsRequest * ListProjectAssetsResponse::request() const
{
    Q_D(const ListProjectAssetsResponse);
    return static_cast<const ListProjectAssetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise ListProjectAssets \a response.
 */
void ListProjectAssetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProjectAssetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::ListProjectAssetsResponsePrivate
 * \brief The ListProjectAssetsResponsePrivate class provides private implementation for ListProjectAssetsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListProjectAssetsResponsePrivate object with public implementation \a q.
 */
ListProjectAssetsResponsePrivate::ListProjectAssetsResponsePrivate(
    ListProjectAssetsResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise ListProjectAssets response element from \a xml.
 */
void ListProjectAssetsResponsePrivate::parseListProjectAssetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProjectAssetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
