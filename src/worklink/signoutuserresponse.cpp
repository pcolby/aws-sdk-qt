// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "signoutuserresponse.h"
#include "signoutuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::SignOutUserResponse
 * \brief The SignOutUserResponse class provides an interace for WorkLink SignOutUser responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::signOutUser
 */

/*!
 * Constructs a SignOutUserResponse object for \a reply to \a request, with parent \a parent.
 */
SignOutUserResponse::SignOutUserResponse(
        const SignOutUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new SignOutUserResponsePrivate(this), parent)
{
    setRequest(new SignOutUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SignOutUserRequest * SignOutUserResponse::request() const
{
    Q_D(const SignOutUserResponse);
    return static_cast<const SignOutUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink SignOutUser \a response.
 */
void SignOutUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SignOutUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::SignOutUserResponsePrivate
 * \brief The SignOutUserResponsePrivate class provides private implementation for SignOutUserResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a SignOutUserResponsePrivate object with public implementation \a q.
 */
SignOutUserResponsePrivate::SignOutUserResponsePrivate(
    SignOutUserResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink SignOutUser response element from \a xml.
 */
void SignOutUserResponsePrivate::parseSignOutUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SignOutUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
