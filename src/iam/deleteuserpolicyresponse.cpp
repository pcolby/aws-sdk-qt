// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteuserpolicyresponse.h"
#include "deleteuserpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteUserPolicyResponse
 * \brief The DeleteUserPolicyResponse class provides an interace for Iam DeleteUserPolicy responses.
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
 * \sa IamClient::deleteUserPolicy
 */

/*!
 * Constructs a DeleteUserPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUserPolicyResponse::DeleteUserPolicyResponse(
        const DeleteUserPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeleteUserPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteUserPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUserPolicyRequest * DeleteUserPolicyResponse::request() const
{
    Q_D(const DeleteUserPolicyResponse);
    return static_cast<const DeleteUserPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeleteUserPolicy \a response.
 */
void DeleteUserPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUserPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeleteUserPolicyResponsePrivate
 * \brief The DeleteUserPolicyResponsePrivate class provides private implementation for DeleteUserPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteUserPolicyResponsePrivate object with public implementation \a q.
 */
DeleteUserPolicyResponsePrivate::DeleteUserPolicyResponsePrivate(
    DeleteUserPolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeleteUserPolicy response element from \a xml.
 */
void DeleteUserPolicyResponsePrivate::parseDeleteUserPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
