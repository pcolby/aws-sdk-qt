// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelinkresponse.h"
#include "deletelinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteLinkResponse
 * \brief The DeleteLinkResponse class provides an interace for NetworkManager DeleteLink responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteLink
 */

/*!
 * Constructs a DeleteLinkResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLinkResponse::DeleteLinkResponse(
        const DeleteLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DeleteLinkResponsePrivate(this), parent)
{
    setRequest(new DeleteLinkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLinkRequest * DeleteLinkResponse::request() const
{
    Q_D(const DeleteLinkResponse);
    return static_cast<const DeleteLinkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DeleteLink \a response.
 */
void DeleteLinkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DeleteLinkResponsePrivate
 * \brief The DeleteLinkResponsePrivate class provides private implementation for DeleteLinkResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteLinkResponsePrivate object with public implementation \a q.
 */
DeleteLinkResponsePrivate::DeleteLinkResponsePrivate(
    DeleteLinkResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DeleteLink response element from \a xml.
 */
void DeleteLinkResponsePrivate::parseDeleteLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLinkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
