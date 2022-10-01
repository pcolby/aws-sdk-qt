// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
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
