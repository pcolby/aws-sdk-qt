// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listusertagsresponse.h"
#include "listusertagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListUserTagsResponse
 * \brief The ListUserTagsResponse class provides an interace for Iam ListUserTags responses.
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
 * \sa IamClient::listUserTags
 */

/*!
 * Constructs a ListUserTagsResponse object for \a reply to \a request, with parent \a parent.
 */
ListUserTagsResponse::ListUserTagsResponse(
        const ListUserTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListUserTagsResponsePrivate(this), parent)
{
    setRequest(new ListUserTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUserTagsRequest * ListUserTagsResponse::request() const
{
    Q_D(const ListUserTagsResponse);
    return static_cast<const ListUserTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListUserTags \a response.
 */
void ListUserTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUserTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListUserTagsResponsePrivate
 * \brief The ListUserTagsResponsePrivate class provides private implementation for ListUserTagsResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListUserTagsResponsePrivate object with public implementation \a q.
 */
ListUserTagsResponsePrivate::ListUserTagsResponsePrivate(
    ListUserTagsResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListUserTags response element from \a xml.
 */
void ListUserTagsResponsePrivate::parseListUserTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUserTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
