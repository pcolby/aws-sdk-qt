// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlaunchprofilesresponse.h"
#include "listlaunchprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::ListLaunchProfilesResponse
 * \brief The ListLaunchProfilesResponse class provides an interace for Nimble ListLaunchProfiles responses.
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
 * \sa NimbleClient::listLaunchProfiles
 */

/*!
 * Constructs a ListLaunchProfilesResponse object for \a reply to \a request, with parent \a parent.
 */
ListLaunchProfilesResponse::ListLaunchProfilesResponse(
        const ListLaunchProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new ListLaunchProfilesResponsePrivate(this), parent)
{
    setRequest(new ListLaunchProfilesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLaunchProfilesRequest * ListLaunchProfilesResponse::request() const
{
    Q_D(const ListLaunchProfilesResponse);
    return static_cast<const ListLaunchProfilesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble ListLaunchProfiles \a response.
 */
void ListLaunchProfilesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLaunchProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::ListLaunchProfilesResponsePrivate
 * \brief The ListLaunchProfilesResponsePrivate class provides private implementation for ListLaunchProfilesResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a ListLaunchProfilesResponsePrivate object with public implementation \a q.
 */
ListLaunchProfilesResponsePrivate::ListLaunchProfilesResponsePrivate(
    ListLaunchProfilesResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble ListLaunchProfiles response element from \a xml.
 */
void ListLaunchProfilesResponsePrivate::parseListLaunchProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLaunchProfilesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
