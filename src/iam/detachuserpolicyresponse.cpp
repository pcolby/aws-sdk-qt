// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detachuserpolicyresponse.h"
#include "detachuserpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DetachUserPolicyResponse
 * \brief The DetachUserPolicyResponse class provides an interace for Iam DetachUserPolicy responses.
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
 * \sa IamClient::detachUserPolicy
 */

/*!
 * Constructs a DetachUserPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DetachUserPolicyResponse::DetachUserPolicyResponse(
        const DetachUserPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DetachUserPolicyResponsePrivate(this), parent)
{
    setRequest(new DetachUserPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetachUserPolicyRequest * DetachUserPolicyResponse::request() const
{
    Q_D(const DetachUserPolicyResponse);
    return static_cast<const DetachUserPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DetachUserPolicy \a response.
 */
void DetachUserPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetachUserPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DetachUserPolicyResponsePrivate
 * \brief The DetachUserPolicyResponsePrivate class provides private implementation for DetachUserPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DetachUserPolicyResponsePrivate object with public implementation \a q.
 */
DetachUserPolicyResponsePrivate::DetachUserPolicyResponsePrivate(
    DetachUserPolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DetachUserPolicy response element from \a xml.
 */
void DetachUserPolicyResponsePrivate::parseDetachUserPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachUserPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
