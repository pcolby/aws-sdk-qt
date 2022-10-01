// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateassetpropertyresponse.h"
#include "updateassetpropertyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::UpdateAssetPropertyResponse
 * \brief The UpdateAssetPropertyResponse class provides an interace for IoTSiteWise UpdateAssetProperty responses.
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
 * \sa IoTSiteWiseClient::updateAssetProperty
 */

/*!
 * Constructs a UpdateAssetPropertyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAssetPropertyResponse::UpdateAssetPropertyResponse(
        const UpdateAssetPropertyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new UpdateAssetPropertyResponsePrivate(this), parent)
{
    setRequest(new UpdateAssetPropertyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAssetPropertyRequest * UpdateAssetPropertyResponse::request() const
{
    Q_D(const UpdateAssetPropertyResponse);
    return static_cast<const UpdateAssetPropertyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise UpdateAssetProperty \a response.
 */
void UpdateAssetPropertyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAssetPropertyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::UpdateAssetPropertyResponsePrivate
 * \brief The UpdateAssetPropertyResponsePrivate class provides private implementation for UpdateAssetPropertyResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a UpdateAssetPropertyResponsePrivate object with public implementation \a q.
 */
UpdateAssetPropertyResponsePrivate::UpdateAssetPropertyResponsePrivate(
    UpdateAssetPropertyResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise UpdateAssetProperty response element from \a xml.
 */
void UpdateAssetPropertyResponsePrivate::parseUpdateAssetPropertyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAssetPropertyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
