// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassetpropertyvaluehistoryresponse.h"
#include "getassetpropertyvaluehistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::GetAssetPropertyValueHistoryResponse
 * \brief The GetAssetPropertyValueHistoryResponse class provides an interace for IoTSiteWise GetAssetPropertyValueHistory responses.
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
 * \sa IoTSiteWiseClient::getAssetPropertyValueHistory
 */

/*!
 * Constructs a GetAssetPropertyValueHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
GetAssetPropertyValueHistoryResponse::GetAssetPropertyValueHistoryResponse(
        const GetAssetPropertyValueHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new GetAssetPropertyValueHistoryResponsePrivate(this), parent)
{
    setRequest(new GetAssetPropertyValueHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAssetPropertyValueHistoryRequest * GetAssetPropertyValueHistoryResponse::request() const
{
    Q_D(const GetAssetPropertyValueHistoryResponse);
    return static_cast<const GetAssetPropertyValueHistoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise GetAssetPropertyValueHistory \a response.
 */
void GetAssetPropertyValueHistoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAssetPropertyValueHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::GetAssetPropertyValueHistoryResponsePrivate
 * \brief The GetAssetPropertyValueHistoryResponsePrivate class provides private implementation for GetAssetPropertyValueHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a GetAssetPropertyValueHistoryResponsePrivate object with public implementation \a q.
 */
GetAssetPropertyValueHistoryResponsePrivate::GetAssetPropertyValueHistoryResponsePrivate(
    GetAssetPropertyValueHistoryResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise GetAssetPropertyValueHistory response element from \a xml.
 */
void GetAssetPropertyValueHistoryResponsePrivate::parseGetAssetPropertyValueHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAssetPropertyValueHistoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
