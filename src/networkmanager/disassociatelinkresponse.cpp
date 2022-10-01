// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatelinkresponse.h"
#include "disassociatelinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DisassociateLinkResponse
 * \brief The DisassociateLinkResponse class provides an interace for NetworkManager DisassociateLink responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::disassociateLink
 */

/*!
 * Constructs a DisassociateLinkResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateLinkResponse::DisassociateLinkResponse(
        const DisassociateLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DisassociateLinkResponsePrivate(this), parent)
{
    setRequest(new DisassociateLinkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateLinkRequest * DisassociateLinkResponse::request() const
{
    Q_D(const DisassociateLinkResponse);
    return static_cast<const DisassociateLinkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DisassociateLink \a response.
 */
void DisassociateLinkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DisassociateLinkResponsePrivate
 * \brief The DisassociateLinkResponsePrivate class provides private implementation for DisassociateLinkResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DisassociateLinkResponsePrivate object with public implementation \a q.
 */
DisassociateLinkResponsePrivate::DisassociateLinkResponsePrivate(
    DisassociateLinkResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DisassociateLink response element from \a xml.
 */
void DisassociateLinkResponsePrivate::parseDisassociateLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateLinkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
