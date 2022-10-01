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

#include "executecorenetworkchangesetresponse.h"
#include "executecorenetworkchangesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::ExecuteCoreNetworkChangeSetResponse
 * \brief The ExecuteCoreNetworkChangeSetResponse class provides an interace for NetworkManager ExecuteCoreNetworkChangeSet responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::executeCoreNetworkChangeSet
 */

/*!
 * Constructs a ExecuteCoreNetworkChangeSetResponse object for \a reply to \a request, with parent \a parent.
 */
ExecuteCoreNetworkChangeSetResponse::ExecuteCoreNetworkChangeSetResponse(
        const ExecuteCoreNetworkChangeSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new ExecuteCoreNetworkChangeSetResponsePrivate(this), parent)
{
    setRequest(new ExecuteCoreNetworkChangeSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExecuteCoreNetworkChangeSetRequest * ExecuteCoreNetworkChangeSetResponse::request() const
{
    Q_D(const ExecuteCoreNetworkChangeSetResponse);
    return static_cast<const ExecuteCoreNetworkChangeSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager ExecuteCoreNetworkChangeSet \a response.
 */
void ExecuteCoreNetworkChangeSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExecuteCoreNetworkChangeSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::ExecuteCoreNetworkChangeSetResponsePrivate
 * \brief The ExecuteCoreNetworkChangeSetResponsePrivate class provides private implementation for ExecuteCoreNetworkChangeSetResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a ExecuteCoreNetworkChangeSetResponsePrivate object with public implementation \a q.
 */
ExecuteCoreNetworkChangeSetResponsePrivate::ExecuteCoreNetworkChangeSetResponsePrivate(
    ExecuteCoreNetworkChangeSetResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager ExecuteCoreNetworkChangeSet response element from \a xml.
 */
void ExecuteCoreNetworkChangeSetResponsePrivate::parseExecuteCoreNetworkChangeSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExecuteCoreNetworkChangeSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
