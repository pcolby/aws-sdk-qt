// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagpolicyresponse.h"
#include "tagpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::TagPolicyResponse
 * \brief The TagPolicyResponse class provides an interace for Iam TagPolicy responses.
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
 * \sa IamClient::tagPolicy
 */

/*!
 * Constructs a TagPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
TagPolicyResponse::TagPolicyResponse(
        const TagPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new TagPolicyResponsePrivate(this), parent)
{
    setRequest(new TagPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TagPolicyRequest * TagPolicyResponse::request() const
{
    Q_D(const TagPolicyResponse);
    return static_cast<const TagPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam TagPolicy \a response.
 */
void TagPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::TagPolicyResponsePrivate
 * \brief The TagPolicyResponsePrivate class provides private implementation for TagPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a TagPolicyResponsePrivate object with public implementation \a q.
 */
TagPolicyResponsePrivate::TagPolicyResponsePrivate(
    TagPolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam TagPolicy response element from \a xml.
 */
void TagPolicyResponsePrivate::parseTagPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
