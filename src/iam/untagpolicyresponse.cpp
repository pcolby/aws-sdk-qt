/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "untagpolicyresponse.h"
#include "untagpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::UntagPolicyResponse
 * \brief The UntagPolicyResponse class provides an interace for IAM UntagPolicy responses.
 *
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service for securely controlling access to AWS services. With IAM, you
 *  can centrally manage users, security credentials such as access keys, and permissions that control which AWS resources
 *  users and applications can access. For more information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity
 *  and Access Management (IAM)</a> and the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">AWS Identity and
 *  Access Management User
 *
 * \sa IamClient::untagPolicy
 */

/*!
 * Constructs a UntagPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
UntagPolicyResponse::UntagPolicyResponse(
        const UntagPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new UntagPolicyResponsePrivate(this), parent)
{
    setRequest(new UntagPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UntagPolicyRequest * UntagPolicyResponse::request() const
{
    return static_cast<const UntagPolicyRequest *>(IamResponse::request());
}

/*!
 * \reimp
 * Parses a successful IAM UntagPolicy \a response.
 */
void UntagPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UntagPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::UntagPolicyResponsePrivate
 * \brief The UntagPolicyResponsePrivate class provides private implementation for UntagPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a UntagPolicyResponsePrivate object with public implementation \a q.
 */
UntagPolicyResponsePrivate::UntagPolicyResponsePrivate(
    UntagPolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM UntagPolicy response element from \a xml.
 */
void UntagPolicyResponsePrivate::parseUntagPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws
