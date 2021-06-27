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

#include "listattachedgrouppoliciesresponse.h"
#include "listattachedgrouppoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::ListAttachedGroupPoliciesResponse
 * \brief The ListAttachedGroupPoliciesResponse class provides an interace for IAM ListAttachedGroupPolicies responses.
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
 * \sa IamClient::listAttachedGroupPolicies
 */

/*!
 * Constructs a ListAttachedGroupPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAttachedGroupPoliciesResponse::ListAttachedGroupPoliciesResponse(
        const ListAttachedGroupPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListAttachedGroupPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListAttachedGroupPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAttachedGroupPoliciesRequest * ListAttachedGroupPoliciesResponse::request() const
{
    return static_cast<const ListAttachedGroupPoliciesRequest *>(IamResponse::request());
}

/*!
 * \reimp
 * Parses a successful IAM ListAttachedGroupPolicies \a response.
 */
void ListAttachedGroupPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAttachedGroupPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::ListAttachedGroupPoliciesResponsePrivate
 * \brief The ListAttachedGroupPoliciesResponsePrivate class provides private implementation for ListAttachedGroupPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a ListAttachedGroupPoliciesResponsePrivate object with public implementation \a q.
 */
ListAttachedGroupPoliciesResponsePrivate::ListAttachedGroupPoliciesResponsePrivate(
    ListAttachedGroupPoliciesResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM ListAttachedGroupPolicies response element from \a xml.
 */
void ListAttachedGroupPoliciesResponsePrivate::parseListAttachedGroupPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAttachedGroupPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws
