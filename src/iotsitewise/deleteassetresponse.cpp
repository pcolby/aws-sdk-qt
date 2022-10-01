// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteassetresponse.h"
#include "deleteassetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DeleteAssetResponse
 * \brief The DeleteAssetResponse class provides an interace for IoTSiteWise DeleteAsset responses.
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
 * \sa IoTSiteWiseClient::deleteAsset
 */

/*!
 * Constructs a DeleteAssetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAssetResponse::DeleteAssetResponse(
        const DeleteAssetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DeleteAssetResponsePrivate(this), parent)
{
    setRequest(new DeleteAssetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAssetRequest * DeleteAssetResponse::request() const
{
    Q_D(const DeleteAssetResponse);
    return static_cast<const DeleteAssetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DeleteAsset \a response.
 */
void DeleteAssetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAssetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DeleteAssetResponsePrivate
 * \brief The DeleteAssetResponsePrivate class provides private implementation for DeleteAssetResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DeleteAssetResponsePrivate object with public implementation \a q.
 */
DeleteAssetResponsePrivate::DeleteAssetResponsePrivate(
    DeleteAssetResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DeleteAsset response element from \a xml.
 */
void DeleteAssetResponsePrivate::parseDeleteAssetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAssetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
