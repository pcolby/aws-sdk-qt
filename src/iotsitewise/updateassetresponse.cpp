// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateassetresponse.h"
#include "updateassetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::UpdateAssetResponse
 * \brief The UpdateAssetResponse class provides an interace for IoTSiteWise UpdateAsset responses.
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
 * \sa IoTSiteWiseClient::updateAsset
 */

/*!
 * Constructs a UpdateAssetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAssetResponse::UpdateAssetResponse(
        const UpdateAssetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new UpdateAssetResponsePrivate(this), parent)
{
    setRequest(new UpdateAssetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAssetRequest * UpdateAssetResponse::request() const
{
    Q_D(const UpdateAssetResponse);
    return static_cast<const UpdateAssetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise UpdateAsset \a response.
 */
void UpdateAssetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAssetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::UpdateAssetResponsePrivate
 * \brief The UpdateAssetResponsePrivate class provides private implementation for UpdateAssetResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a UpdateAssetResponsePrivate object with public implementation \a q.
 */
UpdateAssetResponsePrivate::UpdateAssetResponsePrivate(
    UpdateAssetResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise UpdateAsset response element from \a xml.
 */
void UpdateAssetResponsePrivate::parseUpdateAssetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAssetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
