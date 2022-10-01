// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putstorageconfigurationresponse.h"
#include "putstorageconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::PutStorageConfigurationResponse
 * \brief The PutStorageConfigurationResponse class provides an interace for IoTSiteWise PutStorageConfiguration responses.
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
 * \sa IoTSiteWiseClient::putStorageConfiguration
 */

/*!
 * Constructs a PutStorageConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutStorageConfigurationResponse::PutStorageConfigurationResponse(
        const PutStorageConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new PutStorageConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutStorageConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutStorageConfigurationRequest * PutStorageConfigurationResponse::request() const
{
    Q_D(const PutStorageConfigurationResponse);
    return static_cast<const PutStorageConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise PutStorageConfiguration \a response.
 */
void PutStorageConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutStorageConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::PutStorageConfigurationResponsePrivate
 * \brief The PutStorageConfigurationResponsePrivate class provides private implementation for PutStorageConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a PutStorageConfigurationResponsePrivate object with public implementation \a q.
 */
PutStorageConfigurationResponsePrivate::PutStorageConfigurationResponsePrivate(
    PutStorageConfigurationResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise PutStorageConfiguration response element from \a xml.
 */
void PutStorageConfigurationResponsePrivate::parsePutStorageConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutStorageConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
