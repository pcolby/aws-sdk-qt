// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteroleresponse.h"
#include "deleteroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteRoleResponse
 * \brief The DeleteRoleResponse class provides an interace for Iam DeleteRole responses.
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
 * \sa IamClient::deleteRole
 */

/*!
 * Constructs a DeleteRoleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRoleResponse::DeleteRoleResponse(
        const DeleteRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeleteRoleResponsePrivate(this), parent)
{
    setRequest(new DeleteRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRoleRequest * DeleteRoleResponse::request() const
{
    Q_D(const DeleteRoleResponse);
    return static_cast<const DeleteRoleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeleteRole \a response.
 */
void DeleteRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeleteRoleResponsePrivate
 * \brief The DeleteRoleResponsePrivate class provides private implementation for DeleteRoleResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteRoleResponsePrivate object with public implementation \a q.
 */
DeleteRoleResponsePrivate::DeleteRoleResponsePrivate(
    DeleteRoleResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeleteRole response element from \a xml.
 */
void DeleteRoleResponsePrivate::parseDeleteRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
