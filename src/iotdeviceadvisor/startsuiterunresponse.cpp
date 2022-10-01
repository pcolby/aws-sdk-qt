// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startsuiterunresponse.h"
#include "startsuiterunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::StartSuiteRunResponse
 * \brief The StartSuiteRunResponse class provides an interace for IotDeviceAdvisor StartSuiteRun responses.
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
 * \sa IotDeviceAdvisorClient::startSuiteRun
 */

/*!
 * Constructs a StartSuiteRunResponse object for \a reply to \a request, with parent \a parent.
 */
StartSuiteRunResponse::StartSuiteRunResponse(
        const StartSuiteRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IotDeviceAdvisorResponse(new StartSuiteRunResponsePrivate(this), parent)
{
    setRequest(new StartSuiteRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartSuiteRunRequest * StartSuiteRunResponse::request() const
{
    Q_D(const StartSuiteRunResponse);
    return static_cast<const StartSuiteRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IotDeviceAdvisor StartSuiteRun \a response.
 */
void StartSuiteRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartSuiteRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IotDeviceAdvisor::StartSuiteRunResponsePrivate
 * \brief The StartSuiteRunResponsePrivate class provides private implementation for StartSuiteRunResponse.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a StartSuiteRunResponsePrivate object with public implementation \a q.
 */
StartSuiteRunResponsePrivate::StartSuiteRunResponsePrivate(
    StartSuiteRunResponse * const q) : IotDeviceAdvisorResponsePrivate(q)
{

}

/*!
 * Parses a IotDeviceAdvisor StartSuiteRun response element from \a xml.
 */
void StartSuiteRunResponsePrivate::parseStartSuiteRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartSuiteRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IotDeviceAdvisor
} // namespace QtAws
