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

#include "getinterpolatedassetpropertyvaluesresponse.h"
#include "getinterpolatedassetpropertyvaluesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::GetInterpolatedAssetPropertyValuesResponse
 * \brief The GetInterpolatedAssetPropertyValuesResponse class provides an interace for IoTSiteWise GetInterpolatedAssetPropertyValues responses.
 *
 * \inmodule QtAwsIoTSiteWise
 *
 *  Welcome to the AWS IoT SiteWise API Reference. AWS IoT SiteWise is an AWS service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the AWS Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">AWS IoT SiteWise User Guide</a>. For information about
 *  AWS IoT SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
 *  in the <i>AWS IoT SiteWise User
 *
 * \sa IoTSiteWiseClient::getInterpolatedAssetPropertyValues
 */

/*!
 * Constructs a GetInterpolatedAssetPropertyValuesResponse object for \a reply to \a request, with parent \a parent.
 */
GetInterpolatedAssetPropertyValuesResponse::GetInterpolatedAssetPropertyValuesResponse(
        const GetInterpolatedAssetPropertyValuesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new GetInterpolatedAssetPropertyValuesResponsePrivate(this), parent)
{
    setRequest(new GetInterpolatedAssetPropertyValuesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInterpolatedAssetPropertyValuesRequest * GetInterpolatedAssetPropertyValuesResponse::request() const
{
    Q_D(const GetInterpolatedAssetPropertyValuesResponse);
    return static_cast<const GetInterpolatedAssetPropertyValuesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise GetInterpolatedAssetPropertyValues \a response.
 */
void GetInterpolatedAssetPropertyValuesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInterpolatedAssetPropertyValuesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::GetInterpolatedAssetPropertyValuesResponsePrivate
 * \brief The GetInterpolatedAssetPropertyValuesResponsePrivate class provides private implementation for GetInterpolatedAssetPropertyValuesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a GetInterpolatedAssetPropertyValuesResponsePrivate object with public implementation \a q.
 */
GetInterpolatedAssetPropertyValuesResponsePrivate::GetInterpolatedAssetPropertyValuesResponsePrivate(
    GetInterpolatedAssetPropertyValuesResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise GetInterpolatedAssetPropertyValues response element from \a xml.
 */
void GetInterpolatedAssetPropertyValuesResponsePrivate::parseGetInterpolatedAssetPropertyValuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInterpolatedAssetPropertyValuesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
