// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpolicyversionsresponse.h"
#include "listpolicyversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListPolicyVersionsResponse
 * \brief The ListPolicyVersionsResponse class provides an interace for Iam ListPolicyVersions responses.
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
 * Parses a successful Iam ListPolicyVersions \a response.
 */
void ListPolicyVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPolicyVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListPolicyVersionsResponsePrivate
 * \brief The ListPolicyVersionsResponsePrivate class provides private implementation for ListPolicyVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListPolicyVersionsResponsePrivate object with public implementation \a q.
 */
ListPolicyVersionsResponsePrivate::ListPolicyVersionsResponsePrivate(
    ListPolicyVersionsResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListPolicyVersions response element from \a xml.
 */
void ListPolicyVersionsResponsePrivate::parseListPolicyVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPolicyVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
