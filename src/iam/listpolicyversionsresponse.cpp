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

#include "listpolicyversionsresponse.h"
#include "listpolicyversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::ListPolicyVersionsResponse
 * \brief The ListPolicyVersionsResponse class provides an interace for IAM ListPolicyVersions responses.
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
 * \sa IamClient::listPolicyVersions
 */

/*!
 * Constructs a ListPolicyVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPolicyVersionsResponse::ListPolicyVersionsResponse(
        const ListPolicyVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListPolicyVersionsResponsePrivate(this), parent)
{
    setRequest(new ListPolicyVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPolicyVersionsRequest * ListPolicyVersionsResponse::request() const
{
    Q_D(const ListPolicyVersionsResponse);
    return static_cast<const ListPolicyVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IAM ListPolicyVersions \a response.
 */
void ListPolicyVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPolicyVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::ListPolicyVersionsResponsePrivate
 * \brief The ListPolicyVersionsResponsePrivate class provides private implementation for ListPolicyVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a ListPolicyVersionsResponsePrivate object with public implementation \a q.
 */
ListPolicyVersionsResponsePrivate::ListPolicyVersionsResponsePrivate(
    ListPolicyVersionsResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM ListPolicyVersions response element from \a xml.
 */
void ListPolicyVersionsResponsePrivate::parseListPolicyVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPolicyVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws
