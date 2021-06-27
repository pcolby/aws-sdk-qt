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

#include "taginstanceprofileresponse.h"
#include "taginstanceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::TagInstanceProfileResponse
 * \brief The TagInstanceProfileResponse class provides an interace for IAM TagInstanceProfile responses.
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
 * \sa IamClient::tagInstanceProfile
 */

/*!
 * Constructs a TagInstanceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
TagInstanceProfileResponse::TagInstanceProfileResponse(
        const TagInstanceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new TagInstanceProfileResponsePrivate(this), parent)
{
    setRequest(new TagInstanceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TagInstanceProfileRequest * TagInstanceProfileResponse::request() const
{
    return static_cast<const TagInstanceProfileRequest *>(IamResponse::request());
}

/*!
 * \reimp
 * Parses a successful IAM TagInstanceProfile \a response.
 */
void TagInstanceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagInstanceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::TagInstanceProfileResponsePrivate
 * \brief The TagInstanceProfileResponsePrivate class provides private implementation for TagInstanceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a TagInstanceProfileResponsePrivate object with public implementation \a q.
 */
TagInstanceProfileResponsePrivate::TagInstanceProfileResponsePrivate(
    TagInstanceProfileResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM TagInstanceProfile response element from \a xml.
 */
void TagInstanceProfileResponsePrivate::parseTagInstanceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagInstanceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws
