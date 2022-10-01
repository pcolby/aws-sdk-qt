// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlinksresponse.h"
#include "getlinksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetLinksResponse
 * \brief The GetLinksResponse class provides an interace for NetworkManager GetLinks responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getLinks
 */

/*!
 * Constructs a GetLinksResponse object for \a reply to \a request, with parent \a parent.
 */
GetLinksResponse::GetLinksResponse(
        const GetLinksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetLinksResponsePrivate(this), parent)
{
    setRequest(new GetLinksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLinksRequest * GetLinksResponse::request() const
{
    Q_D(const GetLinksResponse);
    return static_cast<const GetLinksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetLinks \a response.
 */
void GetLinksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLinksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetLinksResponsePrivate
 * \brief The GetLinksResponsePrivate class provides private implementation for GetLinksResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetLinksResponsePrivate object with public implementation \a q.
 */
GetLinksResponsePrivate::GetLinksResponsePrivate(
    GetLinksResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetLinks response element from \a xml.
 */
void GetLinksResponsePrivate::parseGetLinksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLinksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
