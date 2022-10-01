// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfleetsresponse.h"
#include "listfleetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::ListFleetsResponse
 * \brief The ListFleetsResponse class provides an interace for WorkLink ListFleets responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::listFleets
 */

/*!
 * Constructs a ListFleetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFleetsResponse::ListFleetsResponse(
        const ListFleetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new ListFleetsResponsePrivate(this), parent)
{
    setRequest(new ListFleetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFleetsRequest * ListFleetsResponse::request() const
{
    Q_D(const ListFleetsResponse);
    return static_cast<const ListFleetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink ListFleets \a response.
 */
void ListFleetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFleetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::ListFleetsResponsePrivate
 * \brief The ListFleetsResponsePrivate class provides private implementation for ListFleetsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a ListFleetsResponsePrivate object with public implementation \a q.
 */
ListFleetsResponsePrivate::ListFleetsResponsePrivate(
    ListFleetsResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink ListFleets response element from \a xml.
 */
void ListFleetsResponsePrivate::parseListFleetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFleetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
