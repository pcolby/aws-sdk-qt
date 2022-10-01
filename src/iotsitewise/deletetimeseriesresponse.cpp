// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetimeseriesresponse.h"
#include "deletetimeseriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DeleteTimeSeriesResponse
 * \brief The DeleteTimeSeriesResponse class provides an interace for IoTSiteWise DeleteTimeSeries responses.
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
 * \sa IoTSiteWiseClient::deleteTimeSeries
 */

/*!
 * Constructs a DeleteTimeSeriesResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTimeSeriesResponse::DeleteTimeSeriesResponse(
        const DeleteTimeSeriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DeleteTimeSeriesResponsePrivate(this), parent)
{
    setRequest(new DeleteTimeSeriesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTimeSeriesRequest * DeleteTimeSeriesResponse::request() const
{
    Q_D(const DeleteTimeSeriesResponse);
    return static_cast<const DeleteTimeSeriesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DeleteTimeSeries \a response.
 */
void DeleteTimeSeriesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTimeSeriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DeleteTimeSeriesResponsePrivate
 * \brief The DeleteTimeSeriesResponsePrivate class provides private implementation for DeleteTimeSeriesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DeleteTimeSeriesResponsePrivate object with public implementation \a q.
 */
DeleteTimeSeriesResponsePrivate::DeleteTimeSeriesResponsePrivate(
    DeleteTimeSeriesResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DeleteTimeSeries response element from \a xml.
 */
void DeleteTimeSeriesResponsePrivate::parseDeleteTimeSeriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTimeSeriesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
