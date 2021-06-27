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

#include "deletesuitedefinitionresponse.h"
#include "deletesuitedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTDeviceAdvisor {

/*!
 * \class QtAws::IoTDeviceAdvisor::DeleteSuiteDefinitionResponse
 * \brief The DeleteSuiteDefinitionResponse class provides an interace for IoTDeviceAdvisor DeleteSuiteDefinition responses.
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
 * \sa IoTDeviceAdvisorClient::deleteSuiteDefinition
 */

/*!
 * Constructs a DeleteSuiteDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSuiteDefinitionResponse::DeleteSuiteDefinitionResponse(
        const DeleteSuiteDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTDeviceAdvisorResponse(new DeleteSuiteDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteSuiteDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSuiteDefinitionRequest * DeleteSuiteDefinitionResponse::request() const
{
    return static_cast<const DeleteSuiteDefinitionRequest *>(IoTDeviceAdvisorResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTDeviceAdvisor DeleteSuiteDefinition \a response.
 */
void DeleteSuiteDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSuiteDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTDeviceAdvisor::DeleteSuiteDefinitionResponsePrivate
 * \brief The DeleteSuiteDefinitionResponsePrivate class provides private implementation for DeleteSuiteDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsIoTDeviceAdvisor
 */

/*!
 * Constructs a DeleteSuiteDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteSuiteDefinitionResponsePrivate::DeleteSuiteDefinitionResponsePrivate(
    DeleteSuiteDefinitionResponse * const q) : IoTDeviceAdvisorResponsePrivate(q)
{

}

/*!
 * Parses a IoTDeviceAdvisor DeleteSuiteDefinition response element from \a xml.
 */
void DeleteSuiteDefinitionResponsePrivate::parseDeleteSuiteDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSuiteDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTDeviceAdvisor
} // namespace QtAws
