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

#include "deleteinstanceprofileresponse.h"
#include "deleteinstanceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteInstanceProfileResponse
 * \brief The DeleteInstanceProfileResponse class provides an interace for Iam DeleteInstanceProfile responses.
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
 * \sa IamClient::deleteInstanceProfile
 */

/*!
 * Constructs a DeleteInstanceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInstanceProfileResponse::DeleteInstanceProfileResponse(
        const DeleteInstanceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeleteInstanceProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteInstanceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInstanceProfileRequest * DeleteInstanceProfileResponse::request() const
{
    Q_D(const DeleteInstanceProfileResponse);
    return static_cast<const DeleteInstanceProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeleteInstanceProfile \a response.
 */
void DeleteInstanceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInstanceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeleteInstanceProfileResponsePrivate
 * \brief The DeleteInstanceProfileResponsePrivate class provides private implementation for DeleteInstanceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteInstanceProfileResponsePrivate object with public implementation \a q.
 */
DeleteInstanceProfileResponsePrivate::DeleteInstanceProfileResponsePrivate(
    DeleteInstanceProfileResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeleteInstanceProfile response element from \a xml.
 */
void DeleteInstanceProfileResponsePrivate::parseDeleteInstanceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInstanceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
