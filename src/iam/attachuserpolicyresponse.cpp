// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "attachuserpolicyresponse.h"
#include "attachuserpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::AttachUserPolicyResponse
 * \brief The AttachUserPolicyResponse class provides an interace for Iam AttachUserPolicy responses.
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
 * \sa IamClient::attachUserPolicy
 */

/*!
 * Constructs a AttachUserPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
AttachUserPolicyResponse::AttachUserPolicyResponse(
        const AttachUserPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new AttachUserPolicyResponsePrivate(this), parent)
{
    setRequest(new AttachUserPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AttachUserPolicyRequest * AttachUserPolicyResponse::request() const
{
    Q_D(const AttachUserPolicyResponse);
    return static_cast<const AttachUserPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam AttachUserPolicy \a response.
 */
void AttachUserPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AttachUserPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::AttachUserPolicyResponsePrivate
 * \brief The AttachUserPolicyResponsePrivate class provides private implementation for AttachUserPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a AttachUserPolicyResponsePrivate object with public implementation \a q.
 */
AttachUserPolicyResponsePrivate::AttachUserPolicyResponsePrivate(
    AttachUserPolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam AttachUserPolicy response element from \a xml.
 */
void AttachUserPolicyResponsePrivate::parseAttachUserPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachUserPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
