// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsuiterunreportresponse.h"
#include "getsuiterunreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::GetSuiteRunReportResponse
 * \brief The GetSuiteRunReportResponse class provides an interace for IotDeviceAdvisor GetSuiteRunReport responses.
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
 * \sa IotDeviceAdvisorClient::getSuiteRunReport
 */

/*!
 * Constructs a GetSuiteRunReportResponse object for \a reply to \a request, with parent \a parent.
 */
GetSuiteRunReportResponse::GetSuiteRunReportResponse(
        const GetSuiteRunReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IotDeviceAdvisorResponse(new GetSuiteRunReportResponsePrivate(this), parent)
{
    setRequest(new GetSuiteRunReportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSuiteRunReportRequest * GetSuiteRunReportResponse::request() const
{
    Q_D(const GetSuiteRunReportResponse);
    return static_cast<const GetSuiteRunReportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IotDeviceAdvisor GetSuiteRunReport \a response.
 */
void GetSuiteRunReportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSuiteRunReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IotDeviceAdvisor::GetSuiteRunReportResponsePrivate
 * \brief The GetSuiteRunReportResponsePrivate class provides private implementation for GetSuiteRunReportResponse.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a GetSuiteRunReportResponsePrivate object with public implementation \a q.
 */
GetSuiteRunReportResponsePrivate::GetSuiteRunReportResponsePrivate(
    GetSuiteRunReportResponse * const q) : IotDeviceAdvisorResponsePrivate(q)
{

}

/*!
 * Parses a IotDeviceAdvisor GetSuiteRunReport response element from \a xml.
 */
void GetSuiteRunReportResponsePrivate::parseGetSuiteRunReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSuiteRunReportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IotDeviceAdvisor
} // namespace QtAws
