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

#include "deleteservicespecificcredentialresponse.h"
#include "deleteservicespecificcredentialresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::DeleteServiceSpecificCredentialResponse
 * \brief The DeleteServiceSpecificCredentialResponse class provides an interace for IAM DeleteServiceSpecificCredential responses.
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
 * \sa IamClient::deleteServiceSpecificCredential
 */

/*!
 * Constructs a DeleteServiceSpecificCredentialResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteServiceSpecificCredentialResponse::DeleteServiceSpecificCredentialResponse(
        const DeleteServiceSpecificCredentialRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeleteServiceSpecificCredentialResponsePrivate(this), parent)
{
    setRequest(new DeleteServiceSpecificCredentialRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteServiceSpecificCredentialRequest * DeleteServiceSpecificCredentialResponse::request() const
{
    Q_D(const DeleteServiceSpecificCredentialResponse);
    return static_cast<const DeleteServiceSpecificCredentialRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IAM DeleteServiceSpecificCredential \a response.
 */
void DeleteServiceSpecificCredentialResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteServiceSpecificCredentialResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::DeleteServiceSpecificCredentialResponsePrivate
 * \brief The DeleteServiceSpecificCredentialResponsePrivate class provides private implementation for DeleteServiceSpecificCredentialResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a DeleteServiceSpecificCredentialResponsePrivate object with public implementation \a q.
 */
DeleteServiceSpecificCredentialResponsePrivate::DeleteServiceSpecificCredentialResponsePrivate(
    DeleteServiceSpecificCredentialResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM DeleteServiceSpecificCredential response element from \a xml.
 */
void DeleteServiceSpecificCredentialResponsePrivate::parseDeleteServiceSpecificCredentialResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteServiceSpecificCredentialResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws
