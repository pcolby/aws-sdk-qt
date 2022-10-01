// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecorenetworkresponse.h"
#include "updatecorenetworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateCoreNetworkResponse
 * \brief The UpdateCoreNetworkResponse class provides an interace for NetworkManager UpdateCoreNetwork responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::updateCoreNetwork
 */

/*!
 * Constructs a UpdateCoreNetworkResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCoreNetworkResponse::UpdateCoreNetworkResponse(
        const UpdateCoreNetworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new UpdateCoreNetworkResponsePrivate(this), parent)
{
    setRequest(new UpdateCoreNetworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCoreNetworkRequest * UpdateCoreNetworkResponse::request() const
{
    Q_D(const UpdateCoreNetworkResponse);
    return static_cast<const UpdateCoreNetworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager UpdateCoreNetwork \a response.
 */
void UpdateCoreNetworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCoreNetworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::UpdateCoreNetworkResponsePrivate
 * \brief The UpdateCoreNetworkResponsePrivate class provides private implementation for UpdateCoreNetworkResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateCoreNetworkResponsePrivate object with public implementation \a q.
 */
UpdateCoreNetworkResponsePrivate::UpdateCoreNetworkResponsePrivate(
    UpdateCoreNetworkResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager UpdateCoreNetwork response element from \a xml.
 */
void UpdateCoreNetworkResponsePrivate::parseUpdateCoreNetworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCoreNetworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
