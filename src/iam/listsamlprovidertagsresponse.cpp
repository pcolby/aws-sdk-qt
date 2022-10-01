// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsamlprovidertagsresponse.h"
#include "listsamlprovidertagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListSAMLProviderTagsResponse
 * \brief The ListSAMLProviderTagsResponse class provides an interace for Iam ListSAMLProviderTags responses.
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
 * \sa IamClient::listSAMLProviderTags
 */

/*!
 * Constructs a ListSAMLProviderTagsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSAMLProviderTagsResponse::ListSAMLProviderTagsResponse(
        const ListSAMLProviderTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListSAMLProviderTagsResponsePrivate(this), parent)
{
    setRequest(new ListSAMLProviderTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSAMLProviderTagsRequest * ListSAMLProviderTagsResponse::request() const
{
    Q_D(const ListSAMLProviderTagsResponse);
    return static_cast<const ListSAMLProviderTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListSAMLProviderTags \a response.
 */
void ListSAMLProviderTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSAMLProviderTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListSAMLProviderTagsResponsePrivate
 * \brief The ListSAMLProviderTagsResponsePrivate class provides private implementation for ListSAMLProviderTagsResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListSAMLProviderTagsResponsePrivate object with public implementation \a q.
 */
ListSAMLProviderTagsResponsePrivate::ListSAMLProviderTagsResponsePrivate(
    ListSAMLProviderTagsResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListSAMLProviderTags response element from \a xml.
 */
void ListSAMLProviderTagsResponsePrivate::parseListSAMLProviderTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSAMLProviderTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
