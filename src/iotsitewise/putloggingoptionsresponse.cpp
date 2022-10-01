// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putloggingoptionsresponse.h"
#include "putloggingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::PutLoggingOptionsResponse
 * \brief The PutLoggingOptionsResponse class provides an interace for IoTSiteWise PutLoggingOptions responses.
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
 * \sa IoTSiteWiseClient::putLoggingOptions
 */

/*!
 * Constructs a PutLoggingOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
PutLoggingOptionsResponse::PutLoggingOptionsResponse(
        const PutLoggingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new PutLoggingOptionsResponsePrivate(this), parent)
{
    setRequest(new PutLoggingOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutLoggingOptionsRequest * PutLoggingOptionsResponse::request() const
{
    Q_D(const PutLoggingOptionsResponse);
    return static_cast<const PutLoggingOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise PutLoggingOptions \a response.
 */
void PutLoggingOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutLoggingOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::PutLoggingOptionsResponsePrivate
 * \brief The PutLoggingOptionsResponsePrivate class provides private implementation for PutLoggingOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a PutLoggingOptionsResponsePrivate object with public implementation \a q.
 */
PutLoggingOptionsResponsePrivate::PutLoggingOptionsResponsePrivate(
    PutLoggingOptionsResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise PutLoggingOptions response element from \a xml.
 */
void PutLoggingOptionsResponsePrivate::parsePutLoggingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutLoggingOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
