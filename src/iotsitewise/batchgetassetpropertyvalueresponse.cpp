// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetassetpropertyvalueresponse.h"
#include "batchgetassetpropertyvalueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::BatchGetAssetPropertyValueResponse
 * \brief The BatchGetAssetPropertyValueResponse class provides an interace for IoTSiteWise BatchGetAssetPropertyValue responses.
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
 * \sa IoTSiteWiseClient::batchGetAssetPropertyValue
 */

/*!
 * Constructs a BatchGetAssetPropertyValueResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetAssetPropertyValueResponse::BatchGetAssetPropertyValueResponse(
        const BatchGetAssetPropertyValueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new BatchGetAssetPropertyValueResponsePrivate(this), parent)
{
    setRequest(new BatchGetAssetPropertyValueRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetAssetPropertyValueRequest * BatchGetAssetPropertyValueResponse::request() const
{
    Q_D(const BatchGetAssetPropertyValueResponse);
    return static_cast<const BatchGetAssetPropertyValueRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise BatchGetAssetPropertyValue \a response.
 */
void BatchGetAssetPropertyValueResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetAssetPropertyValueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::BatchGetAssetPropertyValueResponsePrivate
 * \brief The BatchGetAssetPropertyValueResponsePrivate class provides private implementation for BatchGetAssetPropertyValueResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a BatchGetAssetPropertyValueResponsePrivate object with public implementation \a q.
 */
BatchGetAssetPropertyValueResponsePrivate::BatchGetAssetPropertyValueResponsePrivate(
    BatchGetAssetPropertyValueResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise BatchGetAssetPropertyValue response element from \a xml.
 */
void BatchGetAssetPropertyValueResponsePrivate::parseBatchGetAssetPropertyValueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetAssetPropertyValueResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
