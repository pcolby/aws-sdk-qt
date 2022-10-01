// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesiteresponse.h"
#include "updatesiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateSiteResponse
 * \brief The UpdateSiteResponse class provides an interace for NetworkManager UpdateSite responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::updateSite
 */

/*!
 * Constructs a UpdateSiteResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSiteResponse::UpdateSiteResponse(
        const UpdateSiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new UpdateSiteResponsePrivate(this), parent)
{
    setRequest(new UpdateSiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSiteRequest * UpdateSiteResponse::request() const
{
    Q_D(const UpdateSiteResponse);
    return static_cast<const UpdateSiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager UpdateSite \a response.
 */
void UpdateSiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::UpdateSiteResponsePrivate
 * \brief The UpdateSiteResponsePrivate class provides private implementation for UpdateSiteResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateSiteResponsePrivate object with public implementation \a q.
 */
UpdateSiteResponsePrivate::UpdateSiteResponsePrivate(
    UpdateSiteResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager UpdateSite response element from \a xml.
 */
void UpdateSiteResponsePrivate::parseUpdateSiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
