// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatelinkresponse.h"
#include "associatelinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::AssociateLinkResponse
 * \brief The AssociateLinkResponse class provides an interace for NetworkManager AssociateLink responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::associateLink
 */

/*!
 * Constructs a AssociateLinkResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateLinkResponse::AssociateLinkResponse(
        const AssociateLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new AssociateLinkResponsePrivate(this), parent)
{
    setRequest(new AssociateLinkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateLinkRequest * AssociateLinkResponse::request() const
{
    Q_D(const AssociateLinkResponse);
    return static_cast<const AssociateLinkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager AssociateLink \a response.
 */
void AssociateLinkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::AssociateLinkResponsePrivate
 * \brief The AssociateLinkResponsePrivate class provides private implementation for AssociateLinkResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a AssociateLinkResponsePrivate object with public implementation \a q.
 */
AssociateLinkResponsePrivate::AssociateLinkResponsePrivate(
    AssociateLinkResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager AssociateLink response element from \a xml.
 */
void AssociateLinkResponsePrivate::parseAssociateLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateLinkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
