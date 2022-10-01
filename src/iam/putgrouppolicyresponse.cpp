// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putgrouppolicyresponse.h"
#include "putgrouppolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::PutGroupPolicyResponse
 * \brief The PutGroupPolicyResponse class provides an interace for Iam PutGroupPolicy responses.
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
 * \sa IamClient::putGroupPolicy
 */

/*!
 * Constructs a PutGroupPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutGroupPolicyResponse::PutGroupPolicyResponse(
        const PutGroupPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new PutGroupPolicyResponsePrivate(this), parent)
{
    setRequest(new PutGroupPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutGroupPolicyRequest * PutGroupPolicyResponse::request() const
{
    Q_D(const PutGroupPolicyResponse);
    return static_cast<const PutGroupPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam PutGroupPolicy \a response.
 */
void PutGroupPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutGroupPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::PutGroupPolicyResponsePrivate
 * \brief The PutGroupPolicyResponsePrivate class provides private implementation for PutGroupPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a PutGroupPolicyResponsePrivate object with public implementation \a q.
 */
PutGroupPolicyResponsePrivate::PutGroupPolicyResponsePrivate(
    PutGroupPolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam PutGroupPolicy response element from \a xml.
 */
void PutGroupPolicyResponsePrivate::parsePutGroupPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutGroupPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
