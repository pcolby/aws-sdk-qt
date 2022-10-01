// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateglobalnetworkresponse.h"
#include "updateglobalnetworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateGlobalNetworkResponse
 * \brief The UpdateGlobalNetworkResponse class provides an interace for NetworkManager UpdateGlobalNetwork responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::updateGlobalNetwork
 */

/*!
 * Constructs a UpdateGlobalNetworkResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGlobalNetworkResponse::UpdateGlobalNetworkResponse(
        const UpdateGlobalNetworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new UpdateGlobalNetworkResponsePrivate(this), parent)
{
    setRequest(new UpdateGlobalNetworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGlobalNetworkRequest * UpdateGlobalNetworkResponse::request() const
{
    Q_D(const UpdateGlobalNetworkResponse);
    return static_cast<const UpdateGlobalNetworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager UpdateGlobalNetwork \a response.
 */
void UpdateGlobalNetworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGlobalNetworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::UpdateGlobalNetworkResponsePrivate
 * \brief The UpdateGlobalNetworkResponsePrivate class provides private implementation for UpdateGlobalNetworkResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateGlobalNetworkResponsePrivate object with public implementation \a q.
 */
UpdateGlobalNetworkResponsePrivate::UpdateGlobalNetworkResponsePrivate(
    UpdateGlobalNetworkResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager UpdateGlobalNetwork response element from \a xml.
 */
void UpdateGlobalNetworkResponsePrivate::parseUpdateGlobalNetworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGlobalNetworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
