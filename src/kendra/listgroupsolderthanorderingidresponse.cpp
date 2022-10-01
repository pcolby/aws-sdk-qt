// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgroupsolderthanorderingidresponse.h"
#include "listgroupsolderthanorderingidresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListGroupsOlderThanOrderingIdResponse
 * \brief The ListGroupsOlderThanOrderingIdResponse class provides an interace for Kendra ListGroupsOlderThanOrderingId responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listGroupsOlderThanOrderingId
 */

/*!
 * Constructs a ListGroupsOlderThanOrderingIdResponse object for \a reply to \a request, with parent \a parent.
 */
ListGroupsOlderThanOrderingIdResponse::ListGroupsOlderThanOrderingIdResponse(
        const ListGroupsOlderThanOrderingIdRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new ListGroupsOlderThanOrderingIdResponsePrivate(this), parent)
{
    setRequest(new ListGroupsOlderThanOrderingIdRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGroupsOlderThanOrderingIdRequest * ListGroupsOlderThanOrderingIdResponse::request() const
{
    Q_D(const ListGroupsOlderThanOrderingIdResponse);
    return static_cast<const ListGroupsOlderThanOrderingIdRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra ListGroupsOlderThanOrderingId \a response.
 */
void ListGroupsOlderThanOrderingIdResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGroupsOlderThanOrderingIdResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::ListGroupsOlderThanOrderingIdResponsePrivate
 * \brief The ListGroupsOlderThanOrderingIdResponsePrivate class provides private implementation for ListGroupsOlderThanOrderingIdResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListGroupsOlderThanOrderingIdResponsePrivate object with public implementation \a q.
 */
ListGroupsOlderThanOrderingIdResponsePrivate::ListGroupsOlderThanOrderingIdResponsePrivate(
    ListGroupsOlderThanOrderingIdResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra ListGroupsOlderThanOrderingId response element from \a xml.
 */
void ListGroupsOlderThanOrderingIdResponsePrivate::parseListGroupsOlderThanOrderingIdResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroupsOlderThanOrderingIdResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
