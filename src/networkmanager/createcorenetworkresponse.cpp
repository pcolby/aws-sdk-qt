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

#include "createcorenetworkresponse.h"
#include "createcorenetworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateCoreNetworkResponse
 * \brief The CreateCoreNetworkResponse class provides an interace for NetworkManager CreateCoreNetwork responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createCoreNetwork
 */

/*!
 * Constructs a CreateCoreNetworkResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCoreNetworkResponse::CreateCoreNetworkResponse(
        const CreateCoreNetworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new CreateCoreNetworkResponsePrivate(this), parent)
{
    setRequest(new CreateCoreNetworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCoreNetworkRequest * CreateCoreNetworkResponse::request() const
{
    Q_D(const CreateCoreNetworkResponse);
    return static_cast<const CreateCoreNetworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager CreateCoreNetwork \a response.
 */
void CreateCoreNetworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCoreNetworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::CreateCoreNetworkResponsePrivate
 * \brief The CreateCoreNetworkResponsePrivate class provides private implementation for CreateCoreNetworkResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateCoreNetworkResponsePrivate object with public implementation \a q.
 */
CreateCoreNetworkResponsePrivate::CreateCoreNetworkResponsePrivate(
    CreateCoreNetworkResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager CreateCoreNetwork response element from \a xml.
 */
void CreateCoreNetworkResponsePrivate::parseCreateCoreNetworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCoreNetworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
