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
