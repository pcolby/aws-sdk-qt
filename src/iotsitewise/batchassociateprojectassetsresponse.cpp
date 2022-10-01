// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchassociateprojectassetsresponse.h"
#include "batchassociateprojectassetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::BatchAssociateProjectAssetsResponse
 * \brief The BatchAssociateProjectAssetsResponse class provides an interace for IoTSiteWise BatchAssociateProjectAssets responses.
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
 * \sa IoTSiteWiseClient::batchAssociateProjectAssets
 */

/*!
 * Constructs a BatchAssociateProjectAssetsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchAssociateProjectAssetsResponse::BatchAssociateProjectAssetsResponse(
        const BatchAssociateProjectAssetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new BatchAssociateProjectAssetsResponsePrivate(this), parent)
{
    setRequest(new BatchAssociateProjectAssetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchAssociateProjectAssetsRequest * BatchAssociateProjectAssetsResponse::request() const
{
    Q_D(const BatchAssociateProjectAssetsResponse);
    return static_cast<const BatchAssociateProjectAssetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise BatchAssociateProjectAssets \a response.
 */
void BatchAssociateProjectAssetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchAssociateProjectAssetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::BatchAssociateProjectAssetsResponsePrivate
 * \brief The BatchAssociateProjectAssetsResponsePrivate class provides private implementation for BatchAssociateProjectAssetsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a BatchAssociateProjectAssetsResponsePrivate object with public implementation \a q.
 */
BatchAssociateProjectAssetsResponsePrivate::BatchAssociateProjectAssetsResponsePrivate(
    BatchAssociateProjectAssetsResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise BatchAssociateProjectAssets response element from \a xml.
 */
void BatchAssociateProjectAssetsResponsePrivate::parseBatchAssociateProjectAssetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchAssociateProjectAssetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
