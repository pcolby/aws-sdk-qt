// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putlaunchprofilemembersresponse.h"
#include "putlaunchprofilemembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::PutLaunchProfileMembersResponse
 * \brief The PutLaunchProfileMembersResponse class provides an interace for Nimble PutLaunchProfileMembers responses.
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
 * \sa NimbleClient::putLaunchProfileMembers
 */

/*!
 * Constructs a PutLaunchProfileMembersResponse object for \a reply to \a request, with parent \a parent.
 */
PutLaunchProfileMembersResponse::PutLaunchProfileMembersResponse(
        const PutLaunchProfileMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new PutLaunchProfileMembersResponsePrivate(this), parent)
{
    setRequest(new PutLaunchProfileMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutLaunchProfileMembersRequest * PutLaunchProfileMembersResponse::request() const
{
    Q_D(const PutLaunchProfileMembersResponse);
    return static_cast<const PutLaunchProfileMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble PutLaunchProfileMembers \a response.
 */
void PutLaunchProfileMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutLaunchProfileMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::PutLaunchProfileMembersResponsePrivate
 * \brief The PutLaunchProfileMembersResponsePrivate class provides private implementation for PutLaunchProfileMembersResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a PutLaunchProfileMembersResponsePrivate object with public implementation \a q.
 */
PutLaunchProfileMembersResponsePrivate::PutLaunchProfileMembersResponsePrivate(
    PutLaunchProfileMembersResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble PutLaunchProfileMembers response element from \a xml.
 */
void PutLaunchProfileMembersResponsePrivate::parsePutLaunchProfileMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutLaunchProfileMembersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
