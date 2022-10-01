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

#include "createglobalnetworkresponse.h"
#include "createglobalnetworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateGlobalNetworkResponse
 * \brief The CreateGlobalNetworkResponse class provides an interace for NetworkManager CreateGlobalNetwork responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createGlobalNetwork
 */

/*!
 * Constructs a CreateGlobalNetworkResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGlobalNetworkResponse::CreateGlobalNetworkResponse(
        const CreateGlobalNetworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new CreateGlobalNetworkResponsePrivate(this), parent)
{
    setRequest(new CreateGlobalNetworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGlobalNetworkRequest * CreateGlobalNetworkResponse::request() const
{
    Q_D(const CreateGlobalNetworkResponse);
    return static_cast<const CreateGlobalNetworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager CreateGlobalNetwork \a response.
 */
void CreateGlobalNetworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGlobalNetworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::CreateGlobalNetworkResponsePrivate
 * \brief The CreateGlobalNetworkResponsePrivate class provides private implementation for CreateGlobalNetworkResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateGlobalNetworkResponsePrivate object with public implementation \a q.
 */
CreateGlobalNetworkResponsePrivate::CreateGlobalNetworkResponsePrivate(
    CreateGlobalNetworkResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager CreateGlobalNetwork response element from \a xml.
 */
void CreateGlobalNetworkResponsePrivate::parseCreateGlobalNetworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGlobalNetworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
