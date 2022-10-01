// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listattachmentsresponse.h"
#include "listattachmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::ListAttachmentsResponse
 * \brief The ListAttachmentsResponse class provides an interace for NetworkManager ListAttachments responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::listAttachments
 */

/*!
 * Constructs a ListAttachmentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAttachmentsResponse::ListAttachmentsResponse(
        const ListAttachmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new ListAttachmentsResponsePrivate(this), parent)
{
    setRequest(new ListAttachmentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAttachmentsRequest * ListAttachmentsResponse::request() const
{
    Q_D(const ListAttachmentsResponse);
    return static_cast<const ListAttachmentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager ListAttachments \a response.
 */
void ListAttachmentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAttachmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::ListAttachmentsResponsePrivate
 * \brief The ListAttachmentsResponsePrivate class provides private implementation for ListAttachmentsResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a ListAttachmentsResponsePrivate object with public implementation \a q.
 */
ListAttachmentsResponsePrivate::ListAttachmentsResponsePrivate(
    ListAttachmentsResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager ListAttachments response element from \a xml.
 */
void ListAttachmentsResponsePrivate::parseListAttachmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAttachmentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
