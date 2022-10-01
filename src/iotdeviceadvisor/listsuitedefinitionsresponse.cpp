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

#include "listsuitedefinitionsresponse.h"
#include "listsuitedefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::ListSuiteDefinitionsResponse
 * \brief The ListSuiteDefinitionsResponse class provides an interace for IotDeviceAdvisor ListSuiteDefinitions responses.
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
 * \sa IotDeviceAdvisorClient::listSuiteDefinitions
 */

/*!
 * Constructs a ListSuiteDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSuiteDefinitionsResponse::ListSuiteDefinitionsResponse(
        const ListSuiteDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IotDeviceAdvisorResponse(new ListSuiteDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListSuiteDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSuiteDefinitionsRequest * ListSuiteDefinitionsResponse::request() const
{
    Q_D(const ListSuiteDefinitionsResponse);
    return static_cast<const ListSuiteDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IotDeviceAdvisor ListSuiteDefinitions \a response.
 */
void ListSuiteDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSuiteDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IotDeviceAdvisor::ListSuiteDefinitionsResponsePrivate
 * \brief The ListSuiteDefinitionsResponsePrivate class provides private implementation for ListSuiteDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a ListSuiteDefinitionsResponsePrivate object with public implementation \a q.
 */
ListSuiteDefinitionsResponsePrivate::ListSuiteDefinitionsResponsePrivate(
    ListSuiteDefinitionsResponse * const q) : IotDeviceAdvisorResponsePrivate(q)
{

}

/*!
 * Parses a IotDeviceAdvisor ListSuiteDefinitions response element from \a xml.
 */
void ListSuiteDefinitionsResponsePrivate::parseListSuiteDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSuiteDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IotDeviceAdvisor
} // namespace QtAws
