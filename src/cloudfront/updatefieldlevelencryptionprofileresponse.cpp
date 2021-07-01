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

#include "updatefieldlevelencryptionprofileresponse.h"
#include "updatefieldlevelencryptionprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateFieldLevelEncryptionProfileResponse
 * \brief The UpdateFieldLevelEncryptionProfileResponse class provides an interace for CloudFront UpdateFieldLevelEncryptionProfile responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateFieldLevelEncryptionProfile
 */

/*!
 * Constructs a UpdateFieldLevelEncryptionProfileResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFieldLevelEncryptionProfileResponse::UpdateFieldLevelEncryptionProfileResponse(
        const UpdateFieldLevelEncryptionProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateFieldLevelEncryptionProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateFieldLevelEncryptionProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFieldLevelEncryptionProfileRequest * UpdateFieldLevelEncryptionProfileResponse::request() const
{
    Q_D(const UpdateFieldLevelEncryptionProfileResponse);
    return static_cast<const UpdateFieldLevelEncryptionProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront UpdateFieldLevelEncryptionProfile \a response.
 */
void UpdateFieldLevelEncryptionProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFieldLevelEncryptionProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::UpdateFieldLevelEncryptionProfileResponsePrivate
 * \brief The UpdateFieldLevelEncryptionProfileResponsePrivate class provides private implementation for UpdateFieldLevelEncryptionProfileResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateFieldLevelEncryptionProfileResponsePrivate object with public implementation \a q.
 */
UpdateFieldLevelEncryptionProfileResponsePrivate::UpdateFieldLevelEncryptionProfileResponsePrivate(
    UpdateFieldLevelEncryptionProfileResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront UpdateFieldLevelEncryptionProfile response element from \a xml.
 */
void UpdateFieldLevelEncryptionProfileResponsePrivate::parseUpdateFieldLevelEncryptionProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFieldLevelEncryptionProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
