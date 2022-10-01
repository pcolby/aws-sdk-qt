// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassetpropertyvalueresponse.h"
#include "getassetpropertyvalueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::GetAssetPropertyValueResponse
 * \brief The GetAssetPropertyValueResponse class provides an interace for IoTSiteWise GetAssetPropertyValue responses.
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
 * \sa IoTSiteWiseClient::getAssetPropertyValue
 */

/*!
 * Constructs a GetAssetPropertyValueResponse object for \a reply to \a request, with parent \a parent.
 */
GetAssetPropertyValueResponse::GetAssetPropertyValueResponse(
        const GetAssetPropertyValueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new GetAssetPropertyValueResponsePrivate(this), parent)
{
    setRequest(new GetAssetPropertyValueRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAssetPropertyValueRequest * GetAssetPropertyValueResponse::request() const
{
    Q_D(const GetAssetPropertyValueResponse);
    return static_cast<const GetAssetPropertyValueRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise GetAssetPropertyValue \a response.
 */
void GetAssetPropertyValueResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAssetPropertyValueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::GetAssetPropertyValueResponsePrivate
 * \brief The GetAssetPropertyValueResponsePrivate class provides private implementation for GetAssetPropertyValueResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a GetAssetPropertyValueResponsePrivate object with public implementation \a q.
 */
GetAssetPropertyValueResponsePrivate::GetAssetPropertyValueResponsePrivate(
    GetAssetPropertyValueResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise GetAssetPropertyValue response element from \a xml.
 */
void GetAssetPropertyValueResponsePrivate::parseGetAssetPropertyValueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAssetPropertyValueResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
