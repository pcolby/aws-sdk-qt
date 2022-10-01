// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassetpropertyaggregatesresponse.h"
#include "getassetpropertyaggregatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::GetAssetPropertyAggregatesResponse
 * \brief The GetAssetPropertyAggregatesResponse class provides an interace for IoTSiteWise GetAssetPropertyAggregates responses.
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
 * \sa IoTSiteWiseClient::getAssetPropertyAggregates
 */

/*!
 * Constructs a GetAssetPropertyAggregatesResponse object for \a reply to \a request, with parent \a parent.
 */
GetAssetPropertyAggregatesResponse::GetAssetPropertyAggregatesResponse(
        const GetAssetPropertyAggregatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new GetAssetPropertyAggregatesResponsePrivate(this), parent)
{
    setRequest(new GetAssetPropertyAggregatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAssetPropertyAggregatesRequest * GetAssetPropertyAggregatesResponse::request() const
{
    Q_D(const GetAssetPropertyAggregatesResponse);
    return static_cast<const GetAssetPropertyAggregatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise GetAssetPropertyAggregates \a response.
 */
void GetAssetPropertyAggregatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAssetPropertyAggregatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::GetAssetPropertyAggregatesResponsePrivate
 * \brief The GetAssetPropertyAggregatesResponsePrivate class provides private implementation for GetAssetPropertyAggregatesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a GetAssetPropertyAggregatesResponsePrivate object with public implementation \a q.
 */
GetAssetPropertyAggregatesResponsePrivate::GetAssetPropertyAggregatesResponsePrivate(
    GetAssetPropertyAggregatesResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise GetAssetPropertyAggregates response element from \a xml.
 */
void GetAssetPropertyAggregatesResponsePrivate::parseGetAssetPropertyAggregatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAssetPropertyAggregatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
