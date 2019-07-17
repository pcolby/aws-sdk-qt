/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "associatedelegatetoresourceresponse.h"
#include "associatedelegatetoresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/*!
 * \class QtAws::WorkMail::AssociateDelegateToResourceResponse
 * \brief The AssociateDelegateToResourceResponse class provides an interace for WorkMail AssociateDelegateToResource responses.
 *
 * \inmodule QtAwsWorkMail
 *
 *  Amazon WorkMail is a secure, managed business email and calendaring service with support for existing desktop and mobile
 *  email clients. You can access your email, contacts, and calendars using Microsoft Outlook, your browser, or their native
 *  iOS and Android email applications. You can integrate Amazon WorkMail with your existing corporate directory and control
 *  both the keys that encrypt your data and the location in which your data is
 * 
 *  stored>
 * 
 *  The Amazon WorkMail API is designed for the following
 * 
 *  scenarios> <ul> <li>
 * 
 *  Listing and describing
 * 
 *  organization> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  user> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  group> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  resource> </li> </ul>
 * 
 *  All Amazon WorkMail API actions are Amazon-authenticated and certificate-signed. They not only require the use of the
 *  AWS SDK, but also allow for the exclusive use of IAM users and roles to help facilitate access, trust, and permission
 *  policies. By creating a role and allowing an IAM user to access the Amazon WorkMail site, the IAM user gains full
 *  administrative visibility into the entire Amazon WorkMail organization (or as set in the IAM policy). This includes, but
 *  is not limited to, the ability to create, update, and delete users, groups, and resources. This allows developers to
 *  perform the scenarios listed above, as well as give users the ability to grant access on a selective basis using the IAM
 *
 * \sa WorkMailClient::associateDelegateToResource
 */

/*!
 * Constructs a AssociateDelegateToResourceResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateDelegateToResourceResponse::AssociateDelegateToResourceResponse(
        const AssociateDelegateToResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new AssociateDelegateToResourceResponsePrivate(this), parent)
{
    setRequest(new AssociateDelegateToResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateDelegateToResourceRequest * AssociateDelegateToResourceResponse::request() const
{
    Q_D(const AssociateDelegateToResourceResponse);
    return static_cast<const AssociateDelegateToResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkMail AssociateDelegateToResource \a response.
 */
void AssociateDelegateToResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateDelegateToResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkMail::AssociateDelegateToResourceResponsePrivate
 * \brief The AssociateDelegateToResourceResponsePrivate class provides private implementation for AssociateDelegateToResourceResponse.
 * \internal
 *
 * \inmodule QtAwsWorkMail
 */

/*!
 * Constructs a AssociateDelegateToResourceResponsePrivate object with public implementation \a q.
 */
AssociateDelegateToResourceResponsePrivate::AssociateDelegateToResourceResponsePrivate(
    AssociateDelegateToResourceResponse * const q) : WorkMailResponsePrivate(q)
{

}

/*!
 * Parses a WorkMail AssociateDelegateToResource response element from \a xml.
 */
void AssociateDelegateToResourceResponsePrivate::parseAssociateDelegateToResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateDelegateToResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkMail
} // namespace QtAws
