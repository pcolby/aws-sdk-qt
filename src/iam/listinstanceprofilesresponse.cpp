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

#include "listinstanceprofilesresponse.h"
#include "listinstanceprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListInstanceProfilesResponse
 * \brief The ListInstanceProfilesResponse class provides an interace for Iam ListInstanceProfiles responses.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::listInstanceProfiles
 */

/*!
 * Constructs a ListInstanceProfilesResponse object for \a reply to \a request, with parent \a parent.
 */
ListInstanceProfilesResponse::ListInstanceProfilesResponse(
        const ListInstanceProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListInstanceProfilesResponsePrivate(this), parent)
{
    setRequest(new ListInstanceProfilesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInstanceProfilesRequest * ListInstanceProfilesResponse::request() const
{
    Q_D(const ListInstanceProfilesResponse);
    return static_cast<const ListInstanceProfilesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListInstanceProfiles \a response.
 */
void ListInstanceProfilesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInstanceProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListInstanceProfilesResponsePrivate
 * \brief The ListInstanceProfilesResponsePrivate class provides private implementation for ListInstanceProfilesResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListInstanceProfilesResponsePrivate object with public implementation \a q.
 */
ListInstanceProfilesResponsePrivate::ListInstanceProfilesResponsePrivate(
    ListInstanceProfilesResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListInstanceProfiles response element from \a xml.
 */
void ListInstanceProfilesResponsePrivate::parseListInstanceProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInstanceProfilesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
