/*
    Copyright 2013-2021 Paul Colby

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

#include "listattachedrolepoliciesresponse.h"
#include "listattachedrolepoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::ListAttachedRolePoliciesResponse
 * \brief The ListAttachedRolePoliciesResponse class provides an interace for IAM ListAttachedRolePolicies responses.
 *
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service for securely controlling access to AWS services. With IAM, you
 *  can centrally manage users, security credentials such as access keys, and permissions that control which AWS resources
 *  users and applications can access. For more information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity
 *  and Access Management (IAM)</a> and the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">AWS Identity and
 *  Access Management User
 *
 * \sa IamClient::listAttachedRolePolicies
 */

/*!
 * Constructs a ListAttachedRolePoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAttachedRolePoliciesResponse::ListAttachedRolePoliciesResponse(
        const ListAttachedRolePoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListAttachedRolePoliciesResponsePrivate(this), parent)
{
    setRequest(new ListAttachedRolePoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAttachedRolePoliciesRequest * ListAttachedRolePoliciesResponse::request() const
{
    Q_D(const ListAttachedRolePoliciesResponse);
    return static_cast<const ListAttachedRolePoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IAM ListAttachedRolePolicies \a response.
 */
void ListAttachedRolePoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAttachedRolePoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::ListAttachedRolePoliciesResponsePrivate
 * \brief The ListAttachedRolePoliciesResponsePrivate class provides private implementation for ListAttachedRolePoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a ListAttachedRolePoliciesResponsePrivate object with public implementation \a q.
 */
ListAttachedRolePoliciesResponsePrivate::ListAttachedRolePoliciesResponsePrivate(
    ListAttachedRolePoliciesResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM ListAttachedRolePolicies response element from \a xml.
 */
void ListAttachedRolePoliciesResponsePrivate::parseListAttachedRolePoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAttachedRolePoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws
