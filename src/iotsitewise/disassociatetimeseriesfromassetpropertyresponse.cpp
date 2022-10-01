// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatetimeseriesfromassetpropertyresponse.h"
#include "disassociatetimeseriesfromassetpropertyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DisassociateTimeSeriesFromAssetPropertyResponse
 * \brief The DisassociateTimeSeriesFromAssetPropertyResponse class provides an interace for IoTSiteWise DisassociateTimeSeriesFromAssetProperty responses.
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
 * \sa IoTSiteWiseClient::disassociateTimeSeriesFromAssetProperty
 */

/*!
 * Constructs a DisassociateTimeSeriesFromAssetPropertyResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateTimeSeriesFromAssetPropertyResponse::DisassociateTimeSeriesFromAssetPropertyResponse(
        const DisassociateTimeSeriesFromAssetPropertyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DisassociateTimeSeriesFromAssetPropertyResponsePrivate(this), parent)
{
    setRequest(new DisassociateTimeSeriesFromAssetPropertyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateTimeSeriesFromAssetPropertyRequest * DisassociateTimeSeriesFromAssetPropertyResponse::request() const
{
    Q_D(const DisassociateTimeSeriesFromAssetPropertyResponse);
    return static_cast<const DisassociateTimeSeriesFromAssetPropertyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DisassociateTimeSeriesFromAssetProperty \a response.
 */
void DisassociateTimeSeriesFromAssetPropertyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateTimeSeriesFromAssetPropertyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DisassociateTimeSeriesFromAssetPropertyResponsePrivate
 * \brief The DisassociateTimeSeriesFromAssetPropertyResponsePrivate class provides private implementation for DisassociateTimeSeriesFromAssetPropertyResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DisassociateTimeSeriesFromAssetPropertyResponsePrivate object with public implementation \a q.
 */
DisassociateTimeSeriesFromAssetPropertyResponsePrivate::DisassociateTimeSeriesFromAssetPropertyResponsePrivate(
    DisassociateTimeSeriesFromAssetPropertyResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DisassociateTimeSeriesFromAssetProperty response element from \a xml.
 */
void DisassociateTimeSeriesFromAssetPropertyResponsePrivate::parseDisassociateTimeSeriesFromAssetPropertyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateTimeSeriesFromAssetPropertyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
