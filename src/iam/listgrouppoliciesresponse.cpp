// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgrouppoliciesresponse.h"
#include "listgrouppoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListGroupPoliciesResponse
 * \brief The ListGroupPoliciesResponse class provides an interace for Iam ListGroupPolicies responses.
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
 * \sa IamClient::listGroupPolicies
 */

/*!
 * Constructs a ListGroupPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListGroupPoliciesResponse::ListGroupPoliciesResponse(
        const ListGroupPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListGroupPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListGroupPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGroupPoliciesRequest * ListGroupPoliciesResponse::request() const
{
    Q_D(const ListGroupPoliciesResponse);
    return static_cast<const ListGroupPoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListGroupPolicies \a response.
 */
void ListGroupPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGroupPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListGroupPoliciesResponsePrivate
 * \brief The ListGroupPoliciesResponsePrivate class provides private implementation for ListGroupPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListGroupPoliciesResponsePrivate object with public implementation \a q.
 */
ListGroupPoliciesResponsePrivate::ListGroupPoliciesResponsePrivate(
    ListGroupPoliciesResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListGroupPolicies response element from \a xml.
 */
void ListGroupPoliciesResponsePrivate::parseListGroupPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroupPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
