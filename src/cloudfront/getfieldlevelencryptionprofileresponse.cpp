/*
    Copyright 2013-2018 Paul Colby

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

#include "getfieldlevelencryptionprofileresponse.h"
#include "getfieldlevelencryptionprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionProfileResponse
 * \brief The GetFieldLevelEncryptionProfileResponse class provides an interace for CloudFront GetFieldLevelEncryptionProfile responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getFieldLevelEncryptionProfile
 */

/*!
 * Constructs a GetFieldLevelEncryptionProfileResponse object for \a reply to \a request, with parent \a parent.
 */
GetFieldLevelEncryptionProfileResponse::GetFieldLevelEncryptionProfileResponse(
        const GetFieldLevelEncryptionProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetFieldLevelEncryptionProfileResponsePrivate(this), parent)
{
    setRequest(new GetFieldLevelEncryptionProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFieldLevelEncryptionProfileRequest * GetFieldLevelEncryptionProfileResponse::request() const
{
    Q_D(const GetFieldLevelEncryptionProfileResponse);
    return static_cast<const GetFieldLevelEncryptionProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetFieldLevelEncryptionProfile \a response.
 */
void GetFieldLevelEncryptionProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetFieldLevelEncryptionProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionProfileResponsePrivate
 * \brief The GetFieldLevelEncryptionProfileResponsePrivate class provides private implementation for GetFieldLevelEncryptionProfileResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetFieldLevelEncryptionProfileResponsePrivate object with public implementation \a q.
 */
GetFieldLevelEncryptionProfileResponsePrivate::GetFieldLevelEncryptionProfileResponsePrivate(
    GetFieldLevelEncryptionProfileResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetFieldLevelEncryptionProfile response element from \a xml.
 */
void GetFieldLevelEncryptionProfileResponsePrivate::parseGetFieldLevelEncryptionProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFieldLevelEncryptionProfileResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
