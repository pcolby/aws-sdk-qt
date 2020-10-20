/*
    Copyright 2013-2020 Paul Colby

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

#include "listbulkdeploymentdetailedreportsresponse.h"
#include "listbulkdeploymentdetailedreportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListBulkDeploymentDetailedReportsResponse
 * \brief The ListBulkDeploymentDetailedReportsResponse class provides an interace for Greengrass ListBulkDeploymentDetailedReports responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listBulkDeploymentDetailedReports
 */

/*!
 * Constructs a ListBulkDeploymentDetailedReportsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBulkDeploymentDetailedReportsResponse::ListBulkDeploymentDetailedReportsResponse(
        const ListBulkDeploymentDetailedReportsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListBulkDeploymentDetailedReportsResponsePrivate(this), parent)
{
    setRequest(new ListBulkDeploymentDetailedReportsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBulkDeploymentDetailedReportsRequest * ListBulkDeploymentDetailedReportsResponse::request() const
{
    Q_D(const ListBulkDeploymentDetailedReportsResponse);
    return static_cast<const ListBulkDeploymentDetailedReportsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListBulkDeploymentDetailedReports \a response.
 */
void ListBulkDeploymentDetailedReportsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBulkDeploymentDetailedReportsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListBulkDeploymentDetailedReportsResponsePrivate
 * \brief The ListBulkDeploymentDetailedReportsResponsePrivate class provides private implementation for ListBulkDeploymentDetailedReportsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListBulkDeploymentDetailedReportsResponsePrivate object with public implementation \a q.
 */
ListBulkDeploymentDetailedReportsResponsePrivate::ListBulkDeploymentDetailedReportsResponsePrivate(
    ListBulkDeploymentDetailedReportsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListBulkDeploymentDetailedReports response element from \a xml.
 */
void ListBulkDeploymentDetailedReportsResponsePrivate::parseListBulkDeploymentDetailedReportsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBulkDeploymentDetailedReportsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
