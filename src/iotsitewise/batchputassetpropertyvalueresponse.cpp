/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
