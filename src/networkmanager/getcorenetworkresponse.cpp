// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcorenetworkresponse.h"
#include "getcorenetworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetCoreNetworkResponse
 * \brief The GetCoreNetworkResponse class provides an interace for NetworkManager GetCoreNetwork responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getCoreNetwork
 */

/*!
 * Constructs a GetCoreNetworkResponse object for \a reply to \a request, with parent \a parent.
 */
GetCoreNetworkResponse::GetCoreNetworkResponse(
        const GetCoreNetworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetCoreNetworkResponsePrivate(this), parent)
{
    setRequest(new GetCoreNetworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCoreNetworkRequest * GetCoreNetworkResponse::request() const
{
    Q_D(const GetCoreNetworkResponse);
    return static_cast<const GetCoreNetworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetCoreNetwork \a response.
 */
void GetCoreNetworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCoreNetworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetCoreNetworkResponsePrivate
 * \brief The GetCoreNetworkResponsePrivate class provides private implementation for GetCoreNetworkResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetCoreNetworkResponsePrivate object with public implementation \a q.
 */
GetCoreNetworkResponsePrivate::GetCoreNetworkResponsePrivate(
    GetCoreNetworkResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetCoreNetwork response element from \a xml.
 */
void GetCoreNetworkResponsePrivate::parseGetCoreNetworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCoreNetworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
