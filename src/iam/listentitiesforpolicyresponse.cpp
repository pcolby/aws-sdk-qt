// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listentitiesforpolicyresponse.h"
#include "listentitiesforpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListEntitiesForPolicyResponse
 * \brief The ListEntitiesForPolicyResponse class provides an interace for Iam ListEntitiesForPolicy responses.
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
 * \sa IamClient::listEntitiesForPolicy
 */

/*!
 * Constructs a ListEntitiesForPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
ListEntitiesForPolicyResponse::ListEntitiesForPolicyResponse(
        const ListEntitiesForPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListEntitiesForPolicyResponsePrivate(this), parent)
{
    setRequest(new ListEntitiesForPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEntitiesForPolicyRequest * ListEntitiesForPolicyResponse::request() const
{
    Q_D(const ListEntitiesForPolicyResponse);
    return static_cast<const ListEntitiesForPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListEntitiesForPolicy \a response.
 */
void ListEntitiesForPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEntitiesForPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListEntitiesForPolicyResponsePrivate
 * \brief The ListEntitiesForPolicyResponsePrivate class provides private implementation for ListEntitiesForPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListEntitiesForPolicyResponsePrivate object with public implementation \a q.
 */
ListEntitiesForPolicyResponsePrivate::ListEntitiesForPolicyResponsePrivate(
    ListEntitiesForPolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListEntitiesForPolicy response element from \a xml.
 */
void ListEntitiesForPolicyResponsePrivate::parseListEntitiesForPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEntitiesForPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
