// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopsuiterunresponse.h"
#include "stopsuiterunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::StopSuiteRunResponse
 * \brief The StopSuiteRunResponse class provides an interace for IotDeviceAdvisor StopSuiteRun responses.
 *
 * \inmodule QtAwsIotDeviceAdvisor
 *
 *  Amazon Web Services IoT Core Device Advisor is a cloud-based, fully managed test capability for validating IoT devices
 *  during device software development. Device Advisor provides pre-built tests that you can use to validate IoT devices for
 *  reliable and secure connectivity with Amazon Web Services IoT Core before deploying devices to production. By using
 *  Device Advisor, you can confirm that your devices can connect to Amazon Web Services IoT Core, follow security best
 *  practices and, if applicable, receive software updates from IoT Device Management. You can also download signed
 *  qualification reports to submit to the Amazon Web Services Partner Network to get your device qualified for the Amazon
 *  Web Services Partner Device Catalog without the need to send your device in and wait for it to be
 *
 * \sa IotDeviceAdvisorClient::stopSuiteRun
 */

/*!
 * Constructs a StopSuiteRunResponse object for \a reply to \a request, with parent \a parent.
 */
StopSuiteRunResponse::StopSuiteRunResponse(
        const StopSuiteRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IotDeviceAdvisorResponse(new StopSuiteRunResponsePrivate(this), parent)
{
    setRequest(new StopSuiteRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopSuiteRunRequest * StopSuiteRunResponse::request() const
{
    Q_D(const StopSuiteRunResponse);
    return static_cast<const StopSuiteRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IotDeviceAdvisor StopSuiteRun \a response.
 */
void StopSuiteRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopSuiteRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IotDeviceAdvisor::StopSuiteRunResponsePrivate
 * \brief The StopSuiteRunResponsePrivate class provides private implementation for StopSuiteRunResponse.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a StopSuiteRunResponsePrivate object with public implementation \a q.
 */
StopSuiteRunResponsePrivate::StopSuiteRunResponsePrivate(
    StopSuiteRunResponse * const q) : IotDeviceAdvisorResponsePrivate(q)
{

}

/*!
 * Parses a IotDeviceAdvisor StopSuiteRun response element from \a xml.
 */
void StopSuiteRunResponsePrivate::parseStopSuiteRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopSuiteRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IotDeviceAdvisor
} // namespace QtAws
