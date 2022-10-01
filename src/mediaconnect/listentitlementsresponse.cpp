// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listentitlementsresponse.h"
#include "listentitlementsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::ListEntitlementsResponse
 * \brief The ListEntitlementsResponse class provides an interace for MediaConnect ListEntitlements responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::listEntitlements
 */

/*!
 * Constructs a ListEntitlementsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEntitlementsResponse::ListEntitlementsResponse(
        const ListEntitlementsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new ListEntitlementsResponsePrivate(this), parent)
{
    setRequest(new ListEntitlementsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEntitlementsRequest * ListEntitlementsResponse::request() const
{
    Q_D(const ListEntitlementsResponse);
    return static_cast<const ListEntitlementsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect ListEntitlements \a response.
 */
void ListEntitlementsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEntitlementsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::ListEntitlementsResponsePrivate
 * \brief The ListEntitlementsResponsePrivate class provides private implementation for ListEntitlementsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a ListEntitlementsResponsePrivate object with public implementation \a q.
 */
ListEntitlementsResponsePrivate::ListEntitlementsResponsePrivate(
    ListEntitlementsResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect ListEntitlements response element from \a xml.
 */
void ListEntitlementsResponsePrivate::parseListEntitlementsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEntitlementsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
