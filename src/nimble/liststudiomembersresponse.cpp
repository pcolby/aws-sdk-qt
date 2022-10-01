// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststudiomembersresponse.h"
#include "liststudiomembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::ListStudioMembersResponse
 * \brief The ListStudioMembersResponse class provides an interace for Nimble ListStudioMembers responses.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::listStudioMembers
 */

/*!
 * Constructs a ListStudioMembersResponse object for \a reply to \a request, with parent \a parent.
 */
ListStudioMembersResponse::ListStudioMembersResponse(
        const ListStudioMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new ListStudioMembersResponsePrivate(this), parent)
{
    setRequest(new ListStudioMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStudioMembersRequest * ListStudioMembersResponse::request() const
{
    Q_D(const ListStudioMembersResponse);
    return static_cast<const ListStudioMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble ListStudioMembers \a response.
 */
void ListStudioMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStudioMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::ListStudioMembersResponsePrivate
 * \brief The ListStudioMembersResponsePrivate class provides private implementation for ListStudioMembersResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a ListStudioMembersResponsePrivate object with public implementation \a q.
 */
ListStudioMembersResponsePrivate::ListStudioMembersResponsePrivate(
    ListStudioMembersResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble ListStudioMembers response element from \a xml.
 */
void ListStudioMembersResponsePrivate::parseListStudioMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStudioMembersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
