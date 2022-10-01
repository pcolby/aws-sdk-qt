// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenetworksiteresponse.h"
#include "deletenetworksiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::DeleteNetworkSiteResponse
 * \brief The DeleteNetworkSiteResponse class provides an interace for PrivateNetworks DeleteNetworkSite responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::deleteNetworkSite
 */

/*!
 * Constructs a DeleteNetworkSiteResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteNetworkSiteResponse::DeleteNetworkSiteResponse(
        const DeleteNetworkSiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new DeleteNetworkSiteResponsePrivate(this), parent)
{
    setRequest(new DeleteNetworkSiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteNetworkSiteRequest * DeleteNetworkSiteResponse::request() const
{
    Q_D(const DeleteNetworkSiteResponse);
    return static_cast<const DeleteNetworkSiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks DeleteNetworkSite \a response.
 */
void DeleteNetworkSiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteNetworkSiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::DeleteNetworkSiteResponsePrivate
 * \brief The DeleteNetworkSiteResponsePrivate class provides private implementation for DeleteNetworkSiteResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a DeleteNetworkSiteResponsePrivate object with public implementation \a q.
 */
DeleteNetworkSiteResponsePrivate::DeleteNetworkSiteResponsePrivate(
    DeleteNetworkSiteResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks DeleteNetworkSite response element from \a xml.
 */
void DeleteNetworkSiteResponsePrivate::parseDeleteNetworkSiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNetworkSiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
