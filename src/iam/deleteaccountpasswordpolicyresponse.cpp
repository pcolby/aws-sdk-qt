// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaccountpasswordpolicyresponse.h"
#include "deleteaccountpasswordpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteAccountPasswordPolicyResponse
 * \brief The DeleteAccountPasswordPolicyResponse class provides an interace for Iam DeleteAccountPasswordPolicy responses.
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
 * \sa IamClient::deleteAccountPasswordPolicy
 */

/*!
 * Constructs a DeleteAccountPasswordPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAccountPasswordPolicyResponse::DeleteAccountPasswordPolicyResponse(
        const DeleteAccountPasswordPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeleteAccountPasswordPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteAccountPasswordPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAccountPasswordPolicyRequest * DeleteAccountPasswordPolicyResponse::request() const
{
    Q_D(const DeleteAccountPasswordPolicyResponse);
    return static_cast<const DeleteAccountPasswordPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeleteAccountPasswordPolicy \a response.
 */
void DeleteAccountPasswordPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAccountPasswordPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeleteAccountPasswordPolicyResponsePrivate
 * \brief The DeleteAccountPasswordPolicyResponsePrivate class provides private implementation for DeleteAccountPasswordPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteAccountPasswordPolicyResponsePrivate object with public implementation \a q.
 */
DeleteAccountPasswordPolicyResponsePrivate::DeleteAccountPasswordPolicyResponsePrivate(
    DeleteAccountPasswordPolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeleteAccountPasswordPolicy response element from \a xml.
 */
void DeleteAccountPasswordPolicyResponsePrivate::parseDeleteAccountPasswordPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccountPasswordPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
