// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsuitedefinitionresponse.h"
#include "createsuitedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::CreateSuiteDefinitionResponse
 * \brief The CreateSuiteDefinitionResponse class provides an interace for IotDeviceAdvisor CreateSuiteDefinition responses.
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
 * \sa IotDeviceAdvisorClient::createSuiteDefinition
 */

/*!
 * Constructs a CreateSuiteDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSuiteDefinitionResponse::CreateSuiteDefinitionResponse(
        const CreateSuiteDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IotDeviceAdvisorResponse(new CreateSuiteDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateSuiteDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSuiteDefinitionRequest * CreateSuiteDefinitionResponse::request() const
{
    Q_D(const CreateSuiteDefinitionResponse);
    return static_cast<const CreateSuiteDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IotDeviceAdvisor CreateSuiteDefinition \a response.
 */
void CreateSuiteDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSuiteDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IotDeviceAdvisor::CreateSuiteDefinitionResponsePrivate
 * \brief The CreateSuiteDefinitionResponsePrivate class provides private implementation for CreateSuiteDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a CreateSuiteDefinitionResponsePrivate object with public implementation \a q.
 */
CreateSuiteDefinitionResponsePrivate::CreateSuiteDefinitionResponsePrivate(
    CreateSuiteDefinitionResponse * const q) : IotDeviceAdvisorResponsePrivate(q)
{

}

/*!
 * Parses a IotDeviceAdvisor CreateSuiteDefinition response element from \a xml.
 */
void CreateSuiteDefinitionResponsePrivate::parseCreateSuiteDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSuiteDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IotDeviceAdvisor
} // namespace QtAws
