// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenetworksiteresponse.h"
#include "updatenetworksiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::UpdateNetworkSiteResponse
 * \brief The UpdateNetworkSiteResponse class provides an interace for PrivateNetworks UpdateNetworkSite responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::updateNetworkSite
 */

/*!
 * Constructs a UpdateNetworkSiteResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateNetworkSiteResponse::UpdateNetworkSiteResponse(
        const UpdateNetworkSiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new UpdateNetworkSiteResponsePrivate(this), parent)
{
    setRequest(new UpdateNetworkSiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateNetworkSiteRequest * UpdateNetworkSiteResponse::request() const
{
    Q_D(const UpdateNetworkSiteResponse);
    return static_cast<const UpdateNetworkSiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks UpdateNetworkSite \a response.
 */
void UpdateNetworkSiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateNetworkSiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::UpdateNetworkSiteResponsePrivate
 * \brief The UpdateNetworkSiteResponsePrivate class provides private implementation for UpdateNetworkSiteResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a UpdateNetworkSiteResponsePrivate object with public implementation \a q.
 */
UpdateNetworkSiteResponsePrivate::UpdateNetworkSiteResponsePrivate(
    UpdateNetworkSiteResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks UpdateNetworkSite response element from \a xml.
 */
void UpdateNetworkSiteResponsePrivate::parseUpdateNetworkSiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNetworkSiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
