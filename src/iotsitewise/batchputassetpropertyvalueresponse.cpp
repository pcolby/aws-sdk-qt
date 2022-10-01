// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchputassetpropertyvalueresponse.h"
#include "batchputassetpropertyvalueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::BatchPutAssetPropertyValueResponse
 * \brief The BatchPutAssetPropertyValueResponse class provides an interace for IoTSiteWise BatchPutAssetPropertyValue responses.
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
 * \sa IoTSiteWiseClient::batchPutAssetPropertyValue
 */

/*!
 * Constructs a BatchPutAssetPropertyValueResponse object for \a reply to \a request, with parent \a parent.
 */
BatchPutAssetPropertyValueResponse::BatchPutAssetPropertyValueResponse(
        const BatchPutAssetPropertyValueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new BatchPutAssetPropertyValueResponsePrivate(this), parent)
{
    setRequest(new BatchPutAssetPropertyValueRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchPutAssetPropertyValueRequest * BatchPutAssetPropertyValueResponse::request() const
{
    Q_D(const BatchPutAssetPropertyValueResponse);
    return static_cast<const BatchPutAssetPropertyValueRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise BatchPutAssetPropertyValue \a response.
 */
void BatchPutAssetPropertyValueResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchPutAssetPropertyValueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::BatchPutAssetPropertyValueResponsePrivate
 * \brief The BatchPutAssetPropertyValueResponsePrivate class provides private implementation for BatchPutAssetPropertyValueResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a BatchPutAssetPropertyValueResponsePrivate object with public implementation \a q.
 */
BatchPutAssetPropertyValueResponsePrivate::BatchPutAssetPropertyValueResponsePrivate(
    BatchPutAssetPropertyValueResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise BatchPutAssetPropertyValue response element from \a xml.
 */
void BatchPutAssetPropertyValueResponsePrivate::parseBatchPutAssetPropertyValueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchPutAssetPropertyValueResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
