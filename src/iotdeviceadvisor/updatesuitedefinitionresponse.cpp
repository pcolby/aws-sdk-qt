/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatesuitedefinitionresponse.h"
#include "updatesuitedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTDeviceAdvisor {

/*!
 * \class QtAws::IoTDeviceAdvisor::UpdateSuiteDefinitionResponse
 * \brief The UpdateSuiteDefinitionResponse class provides an interace for IoTDeviceAdvisor UpdateSuiteDefinition responses.
 *
 * \inmodule QtAwsIoTDeviceAdvisor
 *
 *  AWS IoT Core Device Advisor is a cloud-based, fully managed test capability for validating IoT devices during device
 *  software development. Device Advisor provides pre-built tests that you can use to validate IoT devices for reliable and
 *  secure connectivity with AWS IoT Core before deploying devices to production. By using Device Advisor, you can confirm
 *  that your devices can connect to AWS IoT Core, follow security best practices and, if applicable, receive software
 *  updates from IoT Device Management. You can also download signed qualification reports to submit to the AWS Partner
 *  Network to get your device qualified for the AWS Partner Device Catalog without the need to send your device in and wait
 *  for it to be
 *
 * \sa IoTDeviceAdvisorClient::updateSuiteDefinition
 */

/*!
 * Constructs a UpdateSuiteDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSuiteDefinitionResponse::UpdateSuiteDefinitionResponse(
        const UpdateSuiteDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTDeviceAdvisorResponse(new UpdateSuiteDefinitionResponsePrivate(this), parent)
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
 * Parses a successful IoTDeviceAdvisor UpdateSuiteDefinition \a response.
 */
void UpdateSuiteDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSuiteDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTDeviceAdvisor::UpdateSuiteDefinitionResponsePrivate
 * \brief The UpdateSuiteDefinitionResponsePrivate class provides private implementation for UpdateSuiteDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsIoTDeviceAdvisor
 */

/*!
 * Constructs a UpdateSuiteDefinitionResponsePrivate object with public implementation \a q.
 */
UpdateSuiteDefinitionResponsePrivate::UpdateSuiteDefinitionResponsePrivate(
    UpdateSuiteDefinitionResponse * const q) : IoTDeviceAdvisorResponsePrivate(q)
{

}

/*!
 * Parses a IoTDeviceAdvisor UpdateSuiteDefinition response element from \a xml.
 */
void UpdateSuiteDefinitionResponsePrivate::parseUpdateSuiteDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSuiteDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTDeviceAdvisor
} // namespace QtAws
