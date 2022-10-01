// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgroupsresponse.h"
#include "listgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListGroupsResponse
 * \brief The ListGroupsResponse class provides an interace for Iam ListGroups responses.
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
 * \sa IamClient::listGroups
 */

/*!
 * Constructs a ListGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListGroupsResponse::ListGroupsResponse(
        const ListGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListGroupsResponsePrivate(this), parent)
{
    setRequest(new ListGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGroupsRequest * ListGroupsResponse::request() const
{
    Q_D(const ListGroupsResponse);
    return static_cast<const ListGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListGroups \a response.
 */
void ListGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListGroupsResponsePrivate
 * \brief The ListGroupsResponsePrivate class provides private implementation for ListGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListGroupsResponsePrivate object with public implementation \a q.
 */
ListGroupsResponsePrivate::ListGroupsResponsePrivate(
    ListGroupsResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListGroups response element from \a xml.
 */
void ListGroupsResponsePrivate::parseListGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
