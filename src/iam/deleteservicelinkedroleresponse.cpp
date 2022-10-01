// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteservicelinkedroleresponse.h"
#include "deleteservicelinkedroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteServiceLinkedRoleResponse
 * \brief The DeleteServiceLinkedRoleResponse class provides an interace for Iam DeleteServiceLinkedRole responses.
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
 * \sa IamClient::deleteServiceLinkedRole
 */

/*!
 * Constructs a DeleteServiceLinkedRoleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteServiceLinkedRoleResponse::DeleteServiceLinkedRoleResponse(
        const DeleteServiceLinkedRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeleteServiceLinkedRoleResponsePrivate(this), parent)
{
    setRequest(new DeleteServiceLinkedRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteServiceLinkedRoleRequest * DeleteServiceLinkedRoleResponse::request() const
{
    Q_D(const DeleteServiceLinkedRoleResponse);
    return static_cast<const DeleteServiceLinkedRoleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeleteServiceLinkedRole \a response.
 */
void DeleteServiceLinkedRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteServiceLinkedRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeleteServiceLinkedRoleResponsePrivate
 * \brief The DeleteServiceLinkedRoleResponsePrivate class provides private implementation for DeleteServiceLinkedRoleResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteServiceLinkedRoleResponsePrivate object with public implementation \a q.
 */
DeleteServiceLinkedRoleResponsePrivate::DeleteServiceLinkedRoleResponsePrivate(
    DeleteServiceLinkedRoleResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeleteServiceLinkedRole response element from \a xml.
 */
void DeleteServiceLinkedRoleResponsePrivate::parseDeleteServiceLinkedRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteServiceLinkedRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
