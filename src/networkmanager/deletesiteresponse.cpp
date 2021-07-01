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

#include "deletesiteresponse.h"
#include "deletesiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteSiteResponse
 * \brief The DeleteSiteResponse class provides an interace for NetworkManager DeleteSite responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Transit Gateway Network Manager (Network Manager) enables you to create a global network, in which you can monitor your
 *  AWS and on-premises networks that are built around transit
 * 
 *  gateways>
 * 
 *  The Network Manager APIs are supported in the US West (Oregon) Region only. You must specify the <code>us-west-2</code>
 *  Region in all requests made to Network
 *
 * \sa NetworkManagerClient::deleteSite
 */

/*!
 * Constructs a DeleteSiteResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSiteResponse::DeleteSiteResponse(
        const DeleteSiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DeleteSiteResponsePrivate(this), parent)
{
    setRequest(new DeleteSiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSiteRequest * DeleteSiteResponse::request() const
{
    Q_D(const DeleteSiteResponse);
    return static_cast<const DeleteSiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DeleteSite \a response.
 */
void DeleteSiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DeleteSiteResponsePrivate
 * \brief The DeleteSiteResponsePrivate class provides private implementation for DeleteSiteResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteSiteResponsePrivate object with public implementation \a q.
 */
DeleteSiteResponsePrivate::DeleteSiteResponsePrivate(
    DeleteSiteResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DeleteSite response element from \a xml.
 */
void DeleteSiteResponsePrivate::parseDeleteSiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
