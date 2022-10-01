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

#include "getcorenetworkchangesetresponse.h"
#include "getcorenetworkchangesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetCoreNetworkChangeSetResponse
 * \brief The GetCoreNetworkChangeSetResponse class provides an interace for NetworkManager GetCoreNetworkChangeSet responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getCoreNetworkChangeSet
 */

/*!
 * Constructs a GetCoreNetworkChangeSetResponse object for \a reply to \a request, with parent \a parent.
 */
GetCoreNetworkChangeSetResponse::GetCoreNetworkChangeSetResponse(
        const GetCoreNetworkChangeSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetCoreNetworkChangeSetResponsePrivate(this), parent)
{
    setRequest(new GetCoreNetworkChangeSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCoreNetworkChangeSetRequest * GetCoreNetworkChangeSetResponse::request() const
{
    Q_D(const GetCoreNetworkChangeSetResponse);
    return static_cast<const GetCoreNetworkChangeSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetCoreNetworkChangeSet \a response.
 */
void GetCoreNetworkChangeSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCoreNetworkChangeSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetCoreNetworkChangeSetResponsePrivate
 * \brief The GetCoreNetworkChangeSetResponsePrivate class provides private implementation for GetCoreNetworkChangeSetResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetCoreNetworkChangeSetResponsePrivate object with public implementation \a q.
 */
GetCoreNetworkChangeSetResponsePrivate::GetCoreNetworkChangeSetResponsePrivate(
    GetCoreNetworkChangeSetResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetCoreNetworkChangeSet response element from \a xml.
 */
void GetCoreNetworkChangeSetResponsePrivate::parseGetCoreNetworkChangeSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCoreNetworkChangeSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
