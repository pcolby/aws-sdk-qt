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
 *  Welcome to the AWS IoT SiteWise API Reference. AWS IoT SiteWise is an AWS service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the AWS Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">AWS IoT SiteWise User Guide</a>. For information about
 *  AWS IoT SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
 *  in the <i>AWS IoT SiteWise User
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
