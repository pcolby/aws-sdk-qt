// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlaunchprofilemembersresponse.h"
#include "listlaunchprofilemembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::ListLaunchProfileMembersResponse
 * \brief The ListLaunchProfileMembersResponse class provides an interace for Nimble ListLaunchProfileMembers responses.
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
 * \sa NimbleClient::listLaunchProfileMembers
 */

/*!
 * Constructs a ListLaunchProfileMembersResponse object for \a reply to \a request, with parent \a parent.
 */
ListLaunchProfileMembersResponse::ListLaunchProfileMembersResponse(
        const ListLaunchProfileMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new ListLaunchProfileMembersResponsePrivate(this), parent)
{
    setRequest(new ListLaunchProfileMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLaunchProfileMembersRequest * ListLaunchProfileMembersResponse::request() const
{
    Q_D(const ListLaunchProfileMembersResponse);
    return static_cast<const ListLaunchProfileMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble ListLaunchProfileMembers \a response.
 */
void ListLaunchProfileMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLaunchProfileMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::ListLaunchProfileMembersResponsePrivate
 * \brief The ListLaunchProfileMembersResponsePrivate class provides private implementation for ListLaunchProfileMembersResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a ListLaunchProfileMembersResponsePrivate object with public implementation \a q.
 */
ListLaunchProfileMembersResponsePrivate::ListLaunchProfileMembersResponsePrivate(
    ListLaunchProfileMembersResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble ListLaunchProfileMembers response element from \a xml.
 */
void ListLaunchProfileMembersResponsePrivate::parseListLaunchProfileMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLaunchProfileMembersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
