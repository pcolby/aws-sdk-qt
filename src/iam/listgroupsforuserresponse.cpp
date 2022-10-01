// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgroupsforuserresponse.h"
#include "listgroupsforuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListGroupsForUserResponse
 * \brief The ListGroupsForUserResponse class provides an interace for Iam ListGroupsForUser responses.
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
 * \sa IamClient::listGroupsForUser
 */

/*!
 * Constructs a ListGroupsForUserResponse object for \a reply to \a request, with parent \a parent.
 */
ListGroupsForUserResponse::ListGroupsForUserResponse(
        const ListGroupsForUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListGroupsForUserResponsePrivate(this), parent)
{
    setRequest(new ListGroupsForUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGroupsForUserRequest * ListGroupsForUserResponse::request() const
{
    Q_D(const ListGroupsForUserResponse);
    return static_cast<const ListGroupsForUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListGroupsForUser \a response.
 */
void ListGroupsForUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGroupsForUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListGroupsForUserResponsePrivate
 * \brief The ListGroupsForUserResponsePrivate class provides private implementation for ListGroupsForUserResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListGroupsForUserResponsePrivate object with public implementation \a q.
 */
ListGroupsForUserResponsePrivate::ListGroupsForUserResponsePrivate(
    ListGroupsForUserResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListGroupsForUser response element from \a xml.
 */
void ListGroupsForUserResponsePrivate::parseListGroupsForUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroupsForUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
