// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenetworksiteplanresponse.h"
#include "updatenetworksiteplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::UpdateNetworkSitePlanResponse
 * \brief The UpdateNetworkSitePlanResponse class provides an interace for PrivateNetworks UpdateNetworkSitePlan responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::updateNetworkSitePlan
 */

/*!
 * Constructs a UpdateNetworkSitePlanResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateNetworkSitePlanResponse::UpdateNetworkSitePlanResponse(
        const UpdateNetworkSitePlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new UpdateNetworkSitePlanResponsePrivate(this), parent)
{
    setRequest(new UpdateNetworkSitePlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateNetworkSitePlanRequest * UpdateNetworkSitePlanResponse::request() const
{
    Q_D(const UpdateNetworkSitePlanResponse);
    return static_cast<const UpdateNetworkSitePlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks UpdateNetworkSitePlan \a response.
 */
void UpdateNetworkSitePlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateNetworkSitePlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::UpdateNetworkSitePlanResponsePrivate
 * \brief The UpdateNetworkSitePlanResponsePrivate class provides private implementation for UpdateNetworkSitePlanResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a UpdateNetworkSitePlanResponsePrivate object with public implementation \a q.
 */
UpdateNetworkSitePlanResponsePrivate::UpdateNetworkSitePlanResponsePrivate(
    UpdateNetworkSitePlanResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks UpdateNetworkSitePlan response element from \a xml.
 */
void UpdateNetworkSitePlanResponsePrivate::parseUpdateNetworkSitePlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNetworkSitePlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
