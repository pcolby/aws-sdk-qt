// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterolepolicyresponse.h"
#include "deleterolepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteRolePolicyResponse
 * \brief The DeleteRolePolicyResponse class provides an interace for Iam DeleteRolePolicy responses.
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
 * \sa IamClient::deleteRolePolicy
 */

/*!
 * Constructs a DeleteRolePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRolePolicyResponse::DeleteRolePolicyResponse(
        const DeleteRolePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeleteRolePolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteRolePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRolePolicyRequest * DeleteRolePolicyResponse::request() const
{
    Q_D(const DeleteRolePolicyResponse);
    return static_cast<const DeleteRolePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeleteRolePolicy \a response.
 */
void DeleteRolePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRolePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeleteRolePolicyResponsePrivate
 * \brief The DeleteRolePolicyResponsePrivate class provides private implementation for DeleteRolePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteRolePolicyResponsePrivate object with public implementation \a q.
 */
DeleteRolePolicyResponsePrivate::DeleteRolePolicyResponsePrivate(
    DeleteRolePolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeleteRolePolicy response element from \a xml.
 */
void DeleteRolePolicyResponsePrivate::parseDeleteRolePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRolePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
