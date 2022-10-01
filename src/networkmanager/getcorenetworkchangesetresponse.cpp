// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
