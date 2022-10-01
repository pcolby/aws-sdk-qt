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

#include "describeassetmodelresponse.h"
#include "describeassetmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeAssetModelResponse
 * \brief The DescribeAssetModelResponse class provides an interace for IoTSiteWise DescribeAssetModel responses.
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
 * \sa IoTSiteWiseClient::describeAssetModel
 */

/*!
 * Constructs a DescribeAssetModelResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAssetModelResponse::DescribeAssetModelResponse(
        const DescribeAssetModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DescribeAssetModelResponsePrivate(this), parent)
{
    setRequest(new DescribeAssetModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAssetModelRequest * DescribeAssetModelResponse::request() const
{
    Q_D(const DescribeAssetModelResponse);
    return static_cast<const DescribeAssetModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DescribeAssetModel \a response.
 */
void DescribeAssetModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAssetModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DescribeAssetModelResponsePrivate
 * \brief The DescribeAssetModelResponsePrivate class provides private implementation for DescribeAssetModelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeAssetModelResponsePrivate object with public implementation \a q.
 */
DescribeAssetModelResponsePrivate::DescribeAssetModelResponsePrivate(
    DescribeAssetModelResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DescribeAssetModel response element from \a xml.
 */
void DescribeAssetModelResponsePrivate::parseDescribeAssetModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAssetModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
