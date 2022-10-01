// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbulkdeploymentsresponse.h"
#include "listbulkdeploymentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListBulkDeploymentsResponse
 * \brief The ListBulkDeploymentsResponse class provides an interace for Greengrass ListBulkDeployments responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listBulkDeployments
 */

/*!
 * Constructs a ListBulkDeploymentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBulkDeploymentsResponse::ListBulkDeploymentsResponse(
        const ListBulkDeploymentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListBulkDeploymentsResponsePrivate(this), parent)
{
    setRequest(new ListBulkDeploymentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBulkDeploymentsRequest * ListBulkDeploymentsResponse::request() const
{
    Q_D(const ListBulkDeploymentsResponse);
    return static_cast<const ListBulkDeploymentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListBulkDeployments \a response.
 */
void ListBulkDeploymentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBulkDeploymentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListBulkDeploymentsResponsePrivate
 * \brief The ListBulkDeploymentsResponsePrivate class provides private implementation for ListBulkDeploymentsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListBulkDeploymentsResponsePrivate object with public implementation \a q.
 */
ListBulkDeploymentsResponsePrivate::ListBulkDeploymentsResponsePrivate(
    ListBulkDeploymentsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListBulkDeployments response element from \a xml.
 */
void ListBulkDeploymentsResponsePrivate::parseListBulkDeploymentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBulkDeploymentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
