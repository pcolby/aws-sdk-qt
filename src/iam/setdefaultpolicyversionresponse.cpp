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

#include "setdefaultpolicyversionresponse.h"
#include "setdefaultpolicyversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::SetDefaultPolicyVersionResponse
 * \brief The SetDefaultPolicyVersionResponse class provides an interace for IAM SetDefaultPolicyVersion responses.
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
 * \sa IamClient::setDefaultPolicyVersion
 */

/*!
 * Constructs a SetDefaultPolicyVersionResponse object for \a reply to \a request, with parent \a parent.
 */
SetDefaultPolicyVersionResponse::SetDefaultPolicyVersionResponse(
        const SetDefaultPolicyVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new SetDefaultPolicyVersionResponsePrivate(this), parent)
{
    setRequest(new SetDefaultPolicyVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetDefaultPolicyVersionRequest * SetDefaultPolicyVersionResponse::request() const
{
    return static_cast<const SetDefaultPolicyVersionRequest *>(IamResponse::request());
}

/*!
 * \reimp
 * Parses a successful IAM SetDefaultPolicyVersion \a response.
 */
void SetDefaultPolicyVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetDefaultPolicyVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::SetDefaultPolicyVersionResponsePrivate
 * \brief The SetDefaultPolicyVersionResponsePrivate class provides private implementation for SetDefaultPolicyVersionResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a SetDefaultPolicyVersionResponsePrivate object with public implementation \a q.
 */
SetDefaultPolicyVersionResponsePrivate::SetDefaultPolicyVersionResponsePrivate(
    SetDefaultPolicyVersionResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM SetDefaultPolicyVersion response element from \a xml.
 */
void SetDefaultPolicyVersionResponsePrivate::parseSetDefaultPolicyVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetDefaultPolicyVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws
