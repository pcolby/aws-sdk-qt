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

#include "updatesiteresponse.h"
#include "updatesiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateSiteResponse
 * \brief The UpdateSiteResponse class provides an interace for NetworkManager UpdateSite responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::updateSite
 */

/*!
 * Constructs a UpdateSiteResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSiteResponse::UpdateSiteResponse(
        const UpdateSiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new UpdateSiteResponsePrivate(this), parent)
{
    setRequest(new UpdateSiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSiteRequest * UpdateSiteResponse::request() const
{
    Q_D(const UpdateSiteResponse);
    return static_cast<const UpdateSiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager UpdateSite \a response.
 */
void UpdateSiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::UpdateSiteResponsePrivate
 * \brief The UpdateSiteResponsePrivate class provides private implementation for UpdateSiteResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateSiteResponsePrivate object with public implementation \a q.
 */
UpdateSiteResponsePrivate::UpdateSiteResponsePrivate(
    UpdateSiteResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager UpdateSite response element from \a xml.
 */
void UpdateSiteResponsePrivate::parseUpdateSiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
