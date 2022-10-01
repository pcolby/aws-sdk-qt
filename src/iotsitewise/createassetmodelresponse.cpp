// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createassetmodelresponse.h"
#include "createassetmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::CreateAssetModelResponse
 * \brief The CreateAssetModelResponse class provides an interace for IoTSiteWise CreateAssetModel responses.
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
 * \sa IoTSiteWiseClient::createAssetModel
 */

/*!
 * Constructs a CreateAssetModelResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAssetModelResponse::CreateAssetModelResponse(
        const CreateAssetModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new CreateAssetModelResponsePrivate(this), parent)
{
    setRequest(new CreateAssetModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAssetModelRequest * CreateAssetModelResponse::request() const
{
    Q_D(const CreateAssetModelResponse);
    return static_cast<const CreateAssetModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise CreateAssetModel \a response.
 */
void CreateAssetModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAssetModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::CreateAssetModelResponsePrivate
 * \brief The CreateAssetModelResponsePrivate class provides private implementation for CreateAssetModelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a CreateAssetModelResponsePrivate object with public implementation \a q.
 */
CreateAssetModelResponsePrivate::CreateAssetModelResponsePrivate(
    CreateAssetModelResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise CreateAssetModel response element from \a xml.
 */
void CreateAssetModelResponsePrivate::parseCreateAssetModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAssetModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
