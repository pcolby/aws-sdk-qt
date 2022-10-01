// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listattacheduserpoliciesresponse.h"
#include "listattacheduserpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListAttachedUserPoliciesResponse
 * \brief The ListAttachedUserPoliciesResponse class provides an interace for Iam ListAttachedUserPolicies responses.
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
 * \sa IamClient::listAttachedUserPolicies
 */

/*!
 * Constructs a ListAttachedUserPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAttachedUserPoliciesResponse::ListAttachedUserPoliciesResponse(
        const ListAttachedUserPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListAttachedUserPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListAttachedUserPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAttachedUserPoliciesRequest * ListAttachedUserPoliciesResponse::request() const
{
    Q_D(const ListAttachedUserPoliciesResponse);
    return static_cast<const ListAttachedUserPoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListAttachedUserPolicies \a response.
 */
void ListAttachedUserPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAttachedUserPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListAttachedUserPoliciesResponsePrivate
 * \brief The ListAttachedUserPoliciesResponsePrivate class provides private implementation for ListAttachedUserPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListAttachedUserPoliciesResponsePrivate object with public implementation \a q.
 */
ListAttachedUserPoliciesResponsePrivate::ListAttachedUserPoliciesResponsePrivate(
    ListAttachedUserPoliciesResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListAttachedUserPolicies response element from \a xml.
 */
void ListAttachedUserPoliciesResponsePrivate::parseListAttachedUserPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAttachedUserPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
