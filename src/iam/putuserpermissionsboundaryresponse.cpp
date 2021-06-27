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

#include "putuserpermissionsboundaryresponse.h"
#include "putuserpermissionsboundaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::PutUserPermissionsBoundaryResponse
 * \brief The PutUserPermissionsBoundaryResponse class provides an interace for IAM PutUserPermissionsBoundary responses.
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
 * \sa IamClient::putUserPermissionsBoundary
 */

/*!
 * Constructs a PutUserPermissionsBoundaryResponse object for \a reply to \a request, with parent \a parent.
 */
PutUserPermissionsBoundaryResponse::PutUserPermissionsBoundaryResponse(
        const PutUserPermissionsBoundaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new PutUserPermissionsBoundaryResponsePrivate(this), parent)
{
    setRequest(new PutUserPermissionsBoundaryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutUserPermissionsBoundaryRequest * PutUserPermissionsBoundaryResponse::request() const
{
    return static_cast<const PutUserPermissionsBoundaryRequest *>(IamResponse::request());
}

/*!
 * \reimp
 * Parses a successful IAM PutUserPermissionsBoundary \a response.
 */
void PutUserPermissionsBoundaryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutUserPermissionsBoundaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::PutUserPermissionsBoundaryResponsePrivate
 * \brief The PutUserPermissionsBoundaryResponsePrivate class provides private implementation for PutUserPermissionsBoundaryResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a PutUserPermissionsBoundaryResponsePrivate object with public implementation \a q.
 */
PutUserPermissionsBoundaryResponsePrivate::PutUserPermissionsBoundaryResponsePrivate(
    PutUserPermissionsBoundaryResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM PutUserPermissionsBoundary response element from \a xml.
 */
void PutUserPermissionsBoundaryResponsePrivate::parsePutUserPermissionsBoundaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutUserPermissionsBoundaryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws
