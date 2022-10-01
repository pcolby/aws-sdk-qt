// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelaunchprofilememberresponse.h"
#include "deletelaunchprofilememberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::DeleteLaunchProfileMemberResponse
 * \brief The DeleteLaunchProfileMemberResponse class provides an interace for Nimble DeleteLaunchProfileMember responses.
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
 * \sa NimbleClient::deleteLaunchProfileMember
 */

/*!
 * Constructs a DeleteLaunchProfileMemberResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLaunchProfileMemberResponse::DeleteLaunchProfileMemberResponse(
        const DeleteLaunchProfileMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new DeleteLaunchProfileMemberResponsePrivate(this), parent)
{
    setRequest(new DeleteLaunchProfileMemberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLaunchProfileMemberRequest * DeleteLaunchProfileMemberResponse::request() const
{
    Q_D(const DeleteLaunchProfileMemberResponse);
    return static_cast<const DeleteLaunchProfileMemberRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble DeleteLaunchProfileMember \a response.
 */
void DeleteLaunchProfileMemberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLaunchProfileMemberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::DeleteLaunchProfileMemberResponsePrivate
 * \brief The DeleteLaunchProfileMemberResponsePrivate class provides private implementation for DeleteLaunchProfileMemberResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a DeleteLaunchProfileMemberResponsePrivate object with public implementation \a q.
 */
DeleteLaunchProfileMemberResponsePrivate::DeleteLaunchProfileMemberResponsePrivate(
    DeleteLaunchProfileMemberResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble DeleteLaunchProfileMember response element from \a xml.
 */
void DeleteLaunchProfileMemberResponsePrivate::parseDeleteLaunchProfileMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLaunchProfileMemberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
