// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetassetpropertyaggregatesresponse.h"
#include "batchgetassetpropertyaggregatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::BatchGetAssetPropertyAggregatesResponse
 * \brief The BatchGetAssetPropertyAggregatesResponse class provides an interace for IoTSiteWise BatchGetAssetPropertyAggregates responses.
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
 * \sa IoTSiteWiseClient::batchGetAssetPropertyAggregates
 */

/*!
 * Constructs a BatchGetAssetPropertyAggregatesResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetAssetPropertyAggregatesResponse::BatchGetAssetPropertyAggregatesResponse(
        const BatchGetAssetPropertyAggregatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new BatchGetAssetPropertyAggregatesResponsePrivate(this), parent)
{
    setRequest(new BatchGetAssetPropertyAggregatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetAssetPropertyAggregatesRequest * BatchGetAssetPropertyAggregatesResponse::request() const
{
    Q_D(const BatchGetAssetPropertyAggregatesResponse);
    return static_cast<const BatchGetAssetPropertyAggregatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise BatchGetAssetPropertyAggregates \a response.
 */
void BatchGetAssetPropertyAggregatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetAssetPropertyAggregatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::BatchGetAssetPropertyAggregatesResponsePrivate
 * \brief The BatchGetAssetPropertyAggregatesResponsePrivate class provides private implementation for BatchGetAssetPropertyAggregatesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a BatchGetAssetPropertyAggregatesResponsePrivate object with public implementation \a q.
 */
BatchGetAssetPropertyAggregatesResponsePrivate::BatchGetAssetPropertyAggregatesResponsePrivate(
    BatchGetAssetPropertyAggregatesResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise BatchGetAssetPropertyAggregates response element from \a xml.
 */
void BatchGetAssetPropertyAggregatesResponsePrivate::parseBatchGetAssetPropertyAggregatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetAssetPropertyAggregatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
