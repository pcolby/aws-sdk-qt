// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putdefaultencryptionconfigurationresponse.h"
#include "putdefaultencryptionconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::PutDefaultEncryptionConfigurationResponse
 * \brief The PutDefaultEncryptionConfigurationResponse class provides an interace for IoTSiteWise PutDefaultEncryptionConfiguration responses.
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
 * \sa IoTSiteWiseClient::putDefaultEncryptionConfiguration
 */

/*!
 * Constructs a PutDefaultEncryptionConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutDefaultEncryptionConfigurationResponse::PutDefaultEncryptionConfigurationResponse(
        const PutDefaultEncryptionConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new PutDefaultEncryptionConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutDefaultEncryptionConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutDefaultEncryptionConfigurationRequest * PutDefaultEncryptionConfigurationResponse::request() const
{
    Q_D(const PutDefaultEncryptionConfigurationResponse);
    return static_cast<const PutDefaultEncryptionConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise PutDefaultEncryptionConfiguration \a response.
 */
void PutDefaultEncryptionConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutDefaultEncryptionConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::PutDefaultEncryptionConfigurationResponsePrivate
 * \brief The PutDefaultEncryptionConfigurationResponsePrivate class provides private implementation for PutDefaultEncryptionConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a PutDefaultEncryptionConfigurationResponsePrivate object with public implementation \a q.
 */
PutDefaultEncryptionConfigurationResponsePrivate::PutDefaultEncryptionConfigurationResponsePrivate(
    PutDefaultEncryptionConfigurationResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise PutDefaultEncryptionConfiguration response element from \a xml.
 */
void PutDefaultEncryptionConfigurationResponsePrivate::parsePutDefaultEncryptionConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutDefaultEncryptionConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
