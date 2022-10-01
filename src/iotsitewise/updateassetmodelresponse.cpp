// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateassetmodelresponse.h"
#include "updateassetmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::UpdateAssetModelResponse
 * \brief The UpdateAssetModelResponse class provides an interace for IoTSiteWise UpdateAssetModel responses.
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
 * \sa IoTSiteWiseClient::updateAssetModel
 */

/*!
 * Constructs a UpdateAssetModelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAssetModelResponse::UpdateAssetModelResponse(
        const UpdateAssetModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new UpdateAssetModelResponsePrivate(this), parent)
{
    setRequest(new UpdateAssetModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAssetModelRequest * UpdateAssetModelResponse::request() const
{
    Q_D(const UpdateAssetModelResponse);
    return static_cast<const UpdateAssetModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise UpdateAssetModel \a response.
 */
void UpdateAssetModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAssetModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::UpdateAssetModelResponsePrivate
 * \brief The UpdateAssetModelResponsePrivate class provides private implementation for UpdateAssetModelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a UpdateAssetModelResponsePrivate object with public implementation \a q.
 */
UpdateAssetModelResponsePrivate::UpdateAssetModelResponsePrivate(
    UpdateAssetModelResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise UpdateAssetModel response element from \a xml.
 */
void UpdateAssetModelResponsePrivate::parseUpdateAssetModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAssetModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
