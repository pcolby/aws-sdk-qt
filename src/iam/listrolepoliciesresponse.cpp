// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrolepoliciesresponse.h"
#include "listrolepoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListRolePoliciesResponse
 * \brief The ListRolePoliciesResponse class provides an interace for Iam ListRolePolicies responses.
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
 * \sa IamClient::listRolePolicies
 */

/*!
 * Constructs a ListRolePoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListRolePoliciesResponse::ListRolePoliciesResponse(
        const ListRolePoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListRolePoliciesResponsePrivate(this), parent)
{
    setRequest(new ListRolePoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRolePoliciesRequest * ListRolePoliciesResponse::request() const
{
    Q_D(const ListRolePoliciesResponse);
    return static_cast<const ListRolePoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListRolePolicies \a response.
 */
void ListRolePoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRolePoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListRolePoliciesResponsePrivate
 * \brief The ListRolePoliciesResponsePrivate class provides private implementation for ListRolePoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListRolePoliciesResponsePrivate object with public implementation \a q.
 */
ListRolePoliciesResponsePrivate::ListRolePoliciesResponsePrivate(
    ListRolePoliciesResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListRolePolicies response element from \a xml.
 */
void ListRolePoliciesResponsePrivate::parseListRolePoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRolePoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
