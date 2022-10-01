// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlaunchprofilememberresponse.h"
#include "getlaunchprofilememberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetLaunchProfileMemberResponse
 * \brief The GetLaunchProfileMemberResponse class provides an interace for Nimble GetLaunchProfileMember responses.
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
 * \sa NimbleClient::getLaunchProfileMember
 */

/*!
 * Constructs a GetLaunchProfileMemberResponse object for \a reply to \a request, with parent \a parent.
 */
GetLaunchProfileMemberResponse::GetLaunchProfileMemberResponse(
        const GetLaunchProfileMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new GetLaunchProfileMemberResponsePrivate(this), parent)
{
    setRequest(new GetLaunchProfileMemberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLaunchProfileMemberRequest * GetLaunchProfileMemberResponse::request() const
{
    Q_D(const GetLaunchProfileMemberResponse);
    return static_cast<const GetLaunchProfileMemberRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble GetLaunchProfileMember \a response.
 */
void GetLaunchProfileMemberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLaunchProfileMemberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::GetLaunchProfileMemberResponsePrivate
 * \brief The GetLaunchProfileMemberResponsePrivate class provides private implementation for GetLaunchProfileMemberResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetLaunchProfileMemberResponsePrivate object with public implementation \a q.
 */
GetLaunchProfileMemberResponsePrivate::GetLaunchProfileMemberResponsePrivate(
    GetLaunchProfileMemberResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble GetLaunchProfileMember response element from \a xml.
 */
void GetLaunchProfileMemberResponsePrivate::parseGetLaunchProfileMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLaunchProfileMemberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
