// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetassetpropertyvaluehistoryresponse.h"
#include "batchgetassetpropertyvaluehistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::BatchGetAssetPropertyValueHistoryResponse
 * \brief The BatchGetAssetPropertyValueHistoryResponse class provides an interace for IoTSiteWise BatchGetAssetPropertyValueHistory responses.
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
 * \sa IoTSiteWiseClient::batchGetAssetPropertyValueHistory
 */

/*!
 * Constructs a BatchGetAssetPropertyValueHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetAssetPropertyValueHistoryResponse::BatchGetAssetPropertyValueHistoryResponse(
        const BatchGetAssetPropertyValueHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new BatchGetAssetPropertyValueHistoryResponsePrivate(this), parent)
{
    setRequest(new BatchGetAssetPropertyValueHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetAssetPropertyValueHistoryRequest * BatchGetAssetPropertyValueHistoryResponse::request() const
{
    Q_D(const BatchGetAssetPropertyValueHistoryResponse);
    return static_cast<const BatchGetAssetPropertyValueHistoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise BatchGetAssetPropertyValueHistory \a response.
 */
void BatchGetAssetPropertyValueHistoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetAssetPropertyValueHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::BatchGetAssetPropertyValueHistoryResponsePrivate
 * \brief The BatchGetAssetPropertyValueHistoryResponsePrivate class provides private implementation for BatchGetAssetPropertyValueHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a BatchGetAssetPropertyValueHistoryResponsePrivate object with public implementation \a q.
 */
BatchGetAssetPropertyValueHistoryResponsePrivate::BatchGetAssetPropertyValueHistoryResponsePrivate(
    BatchGetAssetPropertyValueHistoryResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise BatchGetAssetPropertyValueHistory response element from \a xml.
 */
void BatchGetAssetPropertyValueHistoryResponsePrivate::parseBatchGetAssetPropertyValueHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetAssetPropertyValueHistoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
