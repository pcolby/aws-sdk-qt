// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsitesresponse.h"
#include "getsitesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetSitesResponse
 * \brief The GetSitesResponse class provides an interace for NetworkManager GetSites responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getSites
 */

/*!
 * Constructs a GetSitesResponse object for \a reply to \a request, with parent \a parent.
 */
GetSitesResponse::GetSitesResponse(
        const GetSitesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetSitesResponsePrivate(this), parent)
{
    setRequest(new GetSitesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSitesRequest * GetSitesResponse::request() const
{
    Q_D(const GetSitesResponse);
    return static_cast<const GetSitesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetSites \a response.
 */
void GetSitesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSitesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetSitesResponsePrivate
 * \brief The GetSitesResponsePrivate class provides private implementation for GetSitesResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetSitesResponsePrivate object with public implementation \a q.
 */
GetSitesResponsePrivate::GetSitesResponsePrivate(
    GetSitesResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetSites response element from \a xml.
 */
void GetSitesResponsePrivate::parseGetSitesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSitesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
