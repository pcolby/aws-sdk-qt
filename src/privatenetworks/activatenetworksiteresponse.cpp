// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "activatenetworksiteresponse.h"
#include "activatenetworksiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ActivateNetworkSiteResponse
 * \brief The ActivateNetworkSiteResponse class provides an interace for PrivateNetworks ActivateNetworkSite responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::activateNetworkSite
 */

/*!
 * Constructs a ActivateNetworkSiteResponse object for \a reply to \a request, with parent \a parent.
 */
ActivateNetworkSiteResponse::ActivateNetworkSiteResponse(
        const ActivateNetworkSiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new ActivateNetworkSiteResponsePrivate(this), parent)
{
    setRequest(new ActivateNetworkSiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ActivateNetworkSiteRequest * ActivateNetworkSiteResponse::request() const
{
    Q_D(const ActivateNetworkSiteResponse);
    return static_cast<const ActivateNetworkSiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks ActivateNetworkSite \a response.
 */
void ActivateNetworkSiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ActivateNetworkSiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::ActivateNetworkSiteResponsePrivate
 * \brief The ActivateNetworkSiteResponsePrivate class provides private implementation for ActivateNetworkSiteResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ActivateNetworkSiteResponsePrivate object with public implementation \a q.
 */
ActivateNetworkSiteResponsePrivate::ActivateNetworkSiteResponsePrivate(
    ActivateNetworkSiteResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks ActivateNetworkSite response element from \a xml.
 */
void ActivateNetworkSiteResponsePrivate::parseActivateNetworkSiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ActivateNetworkSiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
