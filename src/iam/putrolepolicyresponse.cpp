// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putrolepolicyresponse.h"
#include "putrolepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::PutRolePolicyResponse
 * \brief The PutRolePolicyResponse class provides an interace for Iam PutRolePolicy responses.
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
 * \sa IamClient::putRolePolicy
 */

/*!
 * Constructs a PutRolePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutRolePolicyResponse::PutRolePolicyResponse(
        const PutRolePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new PutRolePolicyResponsePrivate(this), parent)
{
    setRequest(new PutRolePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutRolePolicyRequest * PutRolePolicyResponse::request() const
{
    Q_D(const PutRolePolicyResponse);
    return static_cast<const PutRolePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam PutRolePolicy \a response.
 */
void PutRolePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRolePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::PutRolePolicyResponsePrivate
 * \brief The PutRolePolicyResponsePrivate class provides private implementation for PutRolePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a PutRolePolicyResponsePrivate object with public implementation \a q.
 */
PutRolePolicyResponsePrivate::PutRolePolicyResponsePrivate(
    PutRolePolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam PutRolePolicy response element from \a xml.
 */
void PutRolePolicyResponsePrivate::parsePutRolePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRolePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
