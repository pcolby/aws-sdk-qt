// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteuserpermissionsboundaryresponse.h"
#include "deleteuserpermissionsboundaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteUserPermissionsBoundaryResponse
 * \brief The DeleteUserPermissionsBoundaryResponse class provides an interace for Iam DeleteUserPermissionsBoundary responses.
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
 * \sa IamClient::deleteUserPermissionsBoundary
 */

/*!
 * Constructs a DeleteUserPermissionsBoundaryResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUserPermissionsBoundaryResponse::DeleteUserPermissionsBoundaryResponse(
        const DeleteUserPermissionsBoundaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeleteUserPermissionsBoundaryResponsePrivate(this), parent)
{
    setRequest(new DeleteUserPermissionsBoundaryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUserPermissionsBoundaryRequest * DeleteUserPermissionsBoundaryResponse::request() const
{
    Q_D(const DeleteUserPermissionsBoundaryResponse);
    return static_cast<const DeleteUserPermissionsBoundaryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeleteUserPermissionsBoundary \a response.
 */
void DeleteUserPermissionsBoundaryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUserPermissionsBoundaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeleteUserPermissionsBoundaryResponsePrivate
 * \brief The DeleteUserPermissionsBoundaryResponsePrivate class provides private implementation for DeleteUserPermissionsBoundaryResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteUserPermissionsBoundaryResponsePrivate object with public implementation \a q.
 */
DeleteUserPermissionsBoundaryResponsePrivate::DeleteUserPermissionsBoundaryResponsePrivate(
    DeleteUserPermissionsBoundaryResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeleteUserPermissionsBoundary response element from \a xml.
 */
void DeleteUserPermissionsBoundaryResponsePrivate::parseDeleteUserPermissionsBoundaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserPermissionsBoundaryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
