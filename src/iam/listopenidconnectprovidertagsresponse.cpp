// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listopenidconnectprovidertagsresponse.h"
#include "listopenidconnectprovidertagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListOpenIDConnectProviderTagsResponse
 * \brief The ListOpenIDConnectProviderTagsResponse class provides an interace for Iam ListOpenIDConnectProviderTags responses.
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
 * \sa IamClient::listOpenIDConnectProviderTags
 */

/*!
 * Constructs a ListOpenIDConnectProviderTagsResponse object for \a reply to \a request, with parent \a parent.
 */
ListOpenIDConnectProviderTagsResponse::ListOpenIDConnectProviderTagsResponse(
        const ListOpenIDConnectProviderTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListOpenIDConnectProviderTagsResponsePrivate(this), parent)
{
    setRequest(new ListOpenIDConnectProviderTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOpenIDConnectProviderTagsRequest * ListOpenIDConnectProviderTagsResponse::request() const
{
    Q_D(const ListOpenIDConnectProviderTagsResponse);
    return static_cast<const ListOpenIDConnectProviderTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListOpenIDConnectProviderTags \a response.
 */
void ListOpenIDConnectProviderTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOpenIDConnectProviderTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListOpenIDConnectProviderTagsResponsePrivate
 * \brief The ListOpenIDConnectProviderTagsResponsePrivate class provides private implementation for ListOpenIDConnectProviderTagsResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListOpenIDConnectProviderTagsResponsePrivate object with public implementation \a q.
 */
ListOpenIDConnectProviderTagsResponsePrivate::ListOpenIDConnectProviderTagsResponsePrivate(
    ListOpenIDConnectProviderTagsResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListOpenIDConnectProviderTags response element from \a xml.
 */
void ListOpenIDConnectProviderTagsResponsePrivate::parseListOpenIDConnectProviderTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOpenIDConnectProviderTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
