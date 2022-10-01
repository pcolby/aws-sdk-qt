// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdeploymentsresponse.h"
#include "listdeploymentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListDeploymentsResponse
 * \brief The ListDeploymentsResponse class provides an interace for Greengrass ListDeployments responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listDeployments
 */

/*!
 * Constructs a ListDeploymentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDeploymentsResponse::ListDeploymentsResponse(
        const ListDeploymentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListDeploymentsResponsePrivate(this), parent)
{
    setRequest(new ListDeploymentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDeploymentsRequest * ListDeploymentsResponse::request() const
{
    Q_D(const ListDeploymentsResponse);
    return static_cast<const ListDeploymentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListDeployments \a response.
 */
void ListDeploymentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDeploymentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListDeploymentsResponsePrivate
 * \brief The ListDeploymentsResponsePrivate class provides private implementation for ListDeploymentsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListDeploymentsResponsePrivate object with public implementation \a q.
 */
ListDeploymentsResponsePrivate::ListDeploymentsResponsePrivate(
    ListDeploymentsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListDeployments response element from \a xml.
 */
void ListDeploymentsResponsePrivate::parseListDeploymentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeploymentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
