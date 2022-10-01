// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelaunchprofilememberresponse.h"
#include "updatelaunchprofilememberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::UpdateLaunchProfileMemberResponse
 * \brief The UpdateLaunchProfileMemberResponse class provides an interace for Nimble UpdateLaunchProfileMember responses.
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
 * \sa NimbleClient::updateLaunchProfileMember
 */

/*!
 * Constructs a UpdateLaunchProfileMemberResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLaunchProfileMemberResponse::UpdateLaunchProfileMemberResponse(
        const UpdateLaunchProfileMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new UpdateLaunchProfileMemberResponsePrivate(this), parent)
{
    setRequest(new UpdateLaunchProfileMemberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLaunchProfileMemberRequest * UpdateLaunchProfileMemberResponse::request() const
{
    Q_D(const UpdateLaunchProfileMemberResponse);
    return static_cast<const UpdateLaunchProfileMemberRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble UpdateLaunchProfileMember \a response.
 */
void UpdateLaunchProfileMemberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLaunchProfileMemberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::UpdateLaunchProfileMemberResponsePrivate
 * \brief The UpdateLaunchProfileMemberResponsePrivate class provides private implementation for UpdateLaunchProfileMemberResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a UpdateLaunchProfileMemberResponsePrivate object with public implementation \a q.
 */
UpdateLaunchProfileMemberResponsePrivate::UpdateLaunchProfileMemberResponsePrivate(
    UpdateLaunchProfileMemberResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble UpdateLaunchProfileMember response element from \a xml.
 */
void UpdateLaunchProfileMemberResponsePrivate::parseUpdateLaunchProfileMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLaunchProfileMemberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
