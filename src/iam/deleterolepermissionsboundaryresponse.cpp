// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterolepermissionsboundaryresponse.h"
#include "deleterolepermissionsboundaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteRolePermissionsBoundaryResponse
 * \brief The DeleteRolePermissionsBoundaryResponse class provides an interace for Iam DeleteRolePermissionsBoundary responses.
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
 * \sa IamClient::deleteRolePermissionsBoundary
 */

/*!
 * Constructs a DeleteRolePermissionsBoundaryResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRolePermissionsBoundaryResponse::DeleteRolePermissionsBoundaryResponse(
        const DeleteRolePermissionsBoundaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeleteRolePermissionsBoundaryResponsePrivate(this), parent)
{
    setRequest(new DeleteRolePermissionsBoundaryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRolePermissionsBoundaryRequest * DeleteRolePermissionsBoundaryResponse::request() const
{
    Q_D(const DeleteRolePermissionsBoundaryResponse);
    return static_cast<const DeleteRolePermissionsBoundaryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeleteRolePermissionsBoundary \a response.
 */
void DeleteRolePermissionsBoundaryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRolePermissionsBoundaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeleteRolePermissionsBoundaryResponsePrivate
 * \brief The DeleteRolePermissionsBoundaryResponsePrivate class provides private implementation for DeleteRolePermissionsBoundaryResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteRolePermissionsBoundaryResponsePrivate object with public implementation \a q.
 */
DeleteRolePermissionsBoundaryResponsePrivate::DeleteRolePermissionsBoundaryResponsePrivate(
    DeleteRolePermissionsBoundaryResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeleteRolePermissionsBoundary response element from \a xml.
 */
void DeleteRolePermissionsBoundaryResponsePrivate::parseDeleteRolePermissionsBoundaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRolePermissionsBoundaryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
