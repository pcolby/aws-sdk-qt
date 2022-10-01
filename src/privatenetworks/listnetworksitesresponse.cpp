// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnetworksitesresponse.h"
#include "listnetworksitesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ListNetworkSitesResponse
 * \brief The ListNetworkSitesResponse class provides an interace for PrivateNetworks ListNetworkSites responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::listNetworkSites
 */

/*!
 * Constructs a ListNetworkSitesResponse object for \a reply to \a request, with parent \a parent.
 */
ListNetworkSitesResponse::ListNetworkSitesResponse(
        const ListNetworkSitesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new ListNetworkSitesResponsePrivate(this), parent)
{
    setRequest(new ListNetworkSitesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListNetworkSitesRequest * ListNetworkSitesResponse::request() const
{
    Q_D(const ListNetworkSitesResponse);
    return static_cast<const ListNetworkSitesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks ListNetworkSites \a response.
 */
void ListNetworkSitesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListNetworkSitesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::ListNetworkSitesResponsePrivate
 * \brief The ListNetworkSitesResponsePrivate class provides private implementation for ListNetworkSitesResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ListNetworkSitesResponsePrivate object with public implementation \a q.
 */
ListNetworkSitesResponsePrivate::ListNetworkSitesResponsePrivate(
    ListNetworkSitesResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks ListNetworkSites response element from \a xml.
 */
void ListNetworkSitesResponsePrivate::parseListNetworkSitesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNetworkSitesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
