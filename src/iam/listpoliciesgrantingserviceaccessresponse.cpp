// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpoliciesgrantingserviceaccessresponse.h"
#include "listpoliciesgrantingserviceaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListPoliciesGrantingServiceAccessResponse
 * \brief The ListPoliciesGrantingServiceAccessResponse class provides an interace for Iam ListPoliciesGrantingServiceAccess responses.
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
 * \sa IamClient::listPoliciesGrantingServiceAccess
 */

/*!
 * Constructs a ListPoliciesGrantingServiceAccessResponse object for \a reply to \a request, with parent \a parent.
 */
ListPoliciesGrantingServiceAccessResponse::ListPoliciesGrantingServiceAccessResponse(
        const ListPoliciesGrantingServiceAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListPoliciesGrantingServiceAccessResponsePrivate(this), parent)
{
    setRequest(new ListPoliciesGrantingServiceAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPoliciesGrantingServiceAccessRequest * ListPoliciesGrantingServiceAccessResponse::request() const
{
    Q_D(const ListPoliciesGrantingServiceAccessResponse);
    return static_cast<const ListPoliciesGrantingServiceAccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListPoliciesGrantingServiceAccess \a response.
 */
void ListPoliciesGrantingServiceAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPoliciesGrantingServiceAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListPoliciesGrantingServiceAccessResponsePrivate
 * \brief The ListPoliciesGrantingServiceAccessResponsePrivate class provides private implementation for ListPoliciesGrantingServiceAccessResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListPoliciesGrantingServiceAccessResponsePrivate object with public implementation \a q.
 */
ListPoliciesGrantingServiceAccessResponsePrivate::ListPoliciesGrantingServiceAccessResponsePrivate(
    ListPoliciesGrantingServiceAccessResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListPoliciesGrantingServiceAccess response element from \a xml.
 */
void ListPoliciesGrantingServiceAccessResponsePrivate::parseListPoliciesGrantingServiceAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPoliciesGrantingServiceAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
