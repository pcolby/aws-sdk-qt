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

#include "deletenetworkresponse.h"
#include "deletenetworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::DeleteNetworkResponse
 * \brief The DeleteNetworkResponse class provides an interace for PrivateNetworks DeleteNetwork responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::deleteNetwork
 */

/*!
 * Constructs a DeleteNetworkResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteNetworkResponse::DeleteNetworkResponse(
        const DeleteNetworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new DeleteNetworkResponsePrivate(this), parent)
{
    setRequest(new DeleteNetworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteNetworkRequest * DeleteNetworkResponse::request() const
{
    Q_D(const DeleteNetworkResponse);
    return static_cast<const DeleteNetworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks DeleteNetwork \a response.
 */
void DeleteNetworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteNetworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::DeleteNetworkResponsePrivate
 * \brief The DeleteNetworkResponsePrivate class provides private implementation for DeleteNetworkResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a DeleteNetworkResponsePrivate object with public implementation \a q.
 */
DeleteNetworkResponsePrivate::DeleteNetworkResponsePrivate(
    DeleteNetworkResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks DeleteNetwork response element from \a xml.
 */
void DeleteNetworkResponsePrivate::parseDeleteNetworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNetworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
