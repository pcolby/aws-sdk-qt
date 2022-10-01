// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesuitedefinitionresponse.h"
#include "updatesuitedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::UpdateSuiteDefinitionResponse
 * \brief The UpdateSuiteDefinitionResponse class provides an interace for IotDeviceAdvisor UpdateSuiteDefinition responses.
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
 * \sa IotDeviceAdvisorClient::updateSuiteDefinition
 */

/*!
 * Constructs a UpdateSuiteDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSuiteDefinitionResponse::UpdateSuiteDefinitionResponse(
        const UpdateSuiteDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IotDeviceAdvisorResponse(new UpdateSuiteDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateSuiteDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSuiteDefinitionRequest * UpdateSuiteDefinitionResponse::request() const
{
    Q_D(const UpdateSuiteDefinitionResponse);
    return static_cast<const UpdateSuiteDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IotDeviceAdvisor UpdateSuiteDefinition \a response.
 */
void UpdateSuiteDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSuiteDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IotDeviceAdvisor::UpdateSuiteDefinitionResponsePrivate
 * \brief The UpdateSuiteDefinitionResponsePrivate class provides private implementation for UpdateSuiteDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a UpdateSuiteDefinitionResponsePrivate object with public implementation \a q.
 */
UpdateSuiteDefinitionResponsePrivate::UpdateSuiteDefinitionResponsePrivate(
    UpdateSuiteDefinitionResponse * const q) : IotDeviceAdvisorResponsePrivate(q)
{

}

/*!
 * Parses a IotDeviceAdvisor UpdateSuiteDefinition response element from \a xml.
 */
void UpdateSuiteDefinitionResponsePrivate::parseUpdateSuiteDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSuiteDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IotDeviceAdvisor
} // namespace QtAws
