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

#include "untagmfadeviceresponse.h"
#include "untagmfadeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::UntagMFADeviceResponse
 * \brief The UntagMFADeviceResponse class provides an interace for IAM UntagMFADevice responses.
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
 * \sa IamClient::untagMFADevice
 */

/*!
 * Constructs a UntagMFADeviceResponse object for \a reply to \a request, with parent \a parent.
 */
UntagMFADeviceResponse::UntagMFADeviceResponse(
        const UntagMFADeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new UntagMFADeviceResponsePrivate(this), parent)
{
    setRequest(new UntagMFADeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UntagMFADeviceRequest * UntagMFADeviceResponse::request() const
{
    return static_cast<const UntagMFADeviceRequest *>(IamResponse::request());
}

/*!
 * \reimp
 * Parses a successful IAM UntagMFADevice \a response.
 */
void UntagMFADeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UntagMFADeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::UntagMFADeviceResponsePrivate
 * \brief The UntagMFADeviceResponsePrivate class provides private implementation for UntagMFADeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a UntagMFADeviceResponsePrivate object with public implementation \a q.
 */
UntagMFADeviceResponsePrivate::UntagMFADeviceResponsePrivate(
    UntagMFADeviceResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM UntagMFADevice response element from \a xml.
 */
void UntagMFADeviceResponsePrivate::parseUntagMFADeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagMFADeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws
