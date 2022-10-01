// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpolicytagsresponse.h"
#include "listpolicytagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListPolicyTagsResponse
 * \brief The ListPolicyTagsResponse class provides an interace for Iam ListPolicyTags responses.
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
 * \sa IamClient::listPolicyTags
 */

/*!
 * Constructs a ListPolicyTagsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPolicyTagsResponse::ListPolicyTagsResponse(
        const ListPolicyTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListPolicyTagsResponsePrivate(this), parent)
{
    setRequest(new ListPolicyTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPolicyTagsRequest * ListPolicyTagsResponse::request() const
{
    Q_D(const ListPolicyTagsResponse);
    return static_cast<const ListPolicyTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListPolicyTags \a response.
 */
void ListPolicyTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPolicyTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListPolicyTagsResponsePrivate
 * \brief The ListPolicyTagsResponsePrivate class provides private implementation for ListPolicyTagsResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListPolicyTagsResponsePrivate object with public implementation \a q.
 */
ListPolicyTagsResponsePrivate::ListPolicyTagsResponsePrivate(
    ListPolicyTagsResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListPolicyTags response element from \a xml.
 */
void ListPolicyTagsResponsePrivate::parseListPolicyTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPolicyTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
