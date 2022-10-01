// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsuiterunresponse.h"
#include "getsuiterunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::GetSuiteRunResponse
 * \brief The GetSuiteRunResponse class provides an interace for IotDeviceAdvisor GetSuiteRun responses.
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
 * \sa IotDeviceAdvisorClient::getSuiteRun
 */

/*!
 * Constructs a GetSuiteRunResponse object for \a reply to \a request, with parent \a parent.
 */
GetSuiteRunResponse::GetSuiteRunResponse(
        const GetSuiteRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IotDeviceAdvisorResponse(new GetSuiteRunResponsePrivate(this), parent)
{
    setRequest(new GetSuiteRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSuiteRunRequest * GetSuiteRunResponse::request() const
{
    Q_D(const GetSuiteRunResponse);
    return static_cast<const GetSuiteRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IotDeviceAdvisor GetSuiteRun \a response.
 */
void GetSuiteRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSuiteRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IotDeviceAdvisor::GetSuiteRunResponsePrivate
 * \brief The GetSuiteRunResponsePrivate class provides private implementation for GetSuiteRunResponse.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a GetSuiteRunResponsePrivate object with public implementation \a q.
 */
GetSuiteRunResponsePrivate::GetSuiteRunResponsePrivate(
    GetSuiteRunResponse * const q) : IotDeviceAdvisorResponsePrivate(q)
{

}

/*!
 * Parses a IotDeviceAdvisor GetSuiteRun response element from \a xml.
 */
void GetSuiteRunResponsePrivate::parseGetSuiteRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSuiteRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IotDeviceAdvisor
} // namespace QtAws
