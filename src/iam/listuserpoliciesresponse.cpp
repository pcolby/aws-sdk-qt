// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listuserpoliciesresponse.h"
#include "listuserpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListUserPoliciesResponse
 * \brief The ListUserPoliciesResponse class provides an interace for Iam ListUserPolicies responses.
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
 * \sa IamClient::listUserPolicies
 */

/*!
 * Constructs a ListUserPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListUserPoliciesResponse::ListUserPoliciesResponse(
        const ListUserPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListUserPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListUserPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUserPoliciesRequest * ListUserPoliciesResponse::request() const
{
    Q_D(const ListUserPoliciesResponse);
    return static_cast<const ListUserPoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListUserPolicies \a response.
 */
void ListUserPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUserPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListUserPoliciesResponsePrivate
 * \brief The ListUserPoliciesResponsePrivate class provides private implementation for ListUserPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListUserPoliciesResponsePrivate object with public implementation \a q.
 */
ListUserPoliciesResponsePrivate::ListUserPoliciesResponsePrivate(
    ListUserPoliciesResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListUserPolicies response element from \a xml.
 */
void ListUserPoliciesResponsePrivate::parseListUserPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUserPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
