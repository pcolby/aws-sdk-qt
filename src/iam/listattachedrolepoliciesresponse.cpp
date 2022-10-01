// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listattachedrolepoliciesresponse.h"
#include "listattachedrolepoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListAttachedRolePoliciesResponse
 * \brief The ListAttachedRolePoliciesResponse class provides an interace for Iam ListAttachedRolePolicies responses.
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
 * Parses a successful Iam ListAttachedRolePolicies \a response.
 */
void ListAttachedRolePoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAttachedRolePoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListAttachedRolePoliciesResponsePrivate
 * \brief The ListAttachedRolePoliciesResponsePrivate class provides private implementation for ListAttachedRolePoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListAttachedRolePoliciesResponsePrivate object with public implementation \a q.
 */
ListAttachedRolePoliciesResponsePrivate::ListAttachedRolePoliciesResponsePrivate(
    ListAttachedRolePoliciesResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListAttachedRolePolicies response element from \a xml.
 */
void ListAttachedRolePoliciesResponsePrivate::parseListAttachedRolePoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAttachedRolePoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
