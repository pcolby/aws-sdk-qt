// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsuitedefinitionresponse.h"
#include "getsuitedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::GetSuiteDefinitionResponse
 * \brief The GetSuiteDefinitionResponse class provides an interace for IotDeviceAdvisor GetSuiteDefinition responses.
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
 * \sa IotDeviceAdvisorClient::getSuiteDefinition
 */

/*!
 * Constructs a GetSuiteDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetSuiteDefinitionResponse::GetSuiteDefinitionResponse(
        const GetSuiteDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IotDeviceAdvisorResponse(new GetSuiteDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetSuiteDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSuiteDefinitionRequest * GetSuiteDefinitionResponse::request() const
{
    Q_D(const GetSuiteDefinitionResponse);
    return static_cast<const GetSuiteDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IotDeviceAdvisor GetSuiteDefinition \a response.
 */
void GetSuiteDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSuiteDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IotDeviceAdvisor::GetSuiteDefinitionResponsePrivate
 * \brief The GetSuiteDefinitionResponsePrivate class provides private implementation for GetSuiteDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a GetSuiteDefinitionResponsePrivate object with public implementation \a q.
 */
GetSuiteDefinitionResponsePrivate::GetSuiteDefinitionResponsePrivate(
    GetSuiteDefinitionResponse * const q) : IotDeviceAdvisorResponsePrivate(q)
{

}

/*!
 * Parses a IotDeviceAdvisor GetSuiteDefinition response element from \a xml.
 */
void GetSuiteDefinitionResponsePrivate::parseGetSuiteDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSuiteDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IotDeviceAdvisor
} // namespace QtAws
