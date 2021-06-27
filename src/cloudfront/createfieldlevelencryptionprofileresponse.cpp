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

#include "createfieldlevelencryptionprofileresponse.h"
#include "createfieldlevelencryptionprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateFieldLevelEncryptionProfileResponse
 * \brief The CreateFieldLevelEncryptionProfileResponse class provides an interace for CloudFront CreateFieldLevelEncryptionProfile responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createFieldLevelEncryptionProfile
 */

/*!
 * Constructs a CreateFieldLevelEncryptionProfileResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFieldLevelEncryptionProfileResponse::CreateFieldLevelEncryptionProfileResponse(
        const CreateFieldLevelEncryptionProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateFieldLevelEncryptionProfileResponsePrivate(this), parent)
{
    setRequest(new CreateFieldLevelEncryptionProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFieldLevelEncryptionProfileRequest * CreateFieldLevelEncryptionProfileResponse::request() const
{
    return static_cast<const CreateFieldLevelEncryptionProfileRequest *>(CloudFrontResponse::request());
}

/*!
 * \reimp
 * Parses a successful CloudFront CreateFieldLevelEncryptionProfile \a response.
 */
void CreateFieldLevelEncryptionProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFieldLevelEncryptionProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreateFieldLevelEncryptionProfileResponsePrivate
 * \brief The CreateFieldLevelEncryptionProfileResponsePrivate class provides private implementation for CreateFieldLevelEncryptionProfileResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateFieldLevelEncryptionProfileResponsePrivate object with public implementation \a q.
 */
CreateFieldLevelEncryptionProfileResponsePrivate::CreateFieldLevelEncryptionProfileResponsePrivate(
    CreateFieldLevelEncryptionProfileResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreateFieldLevelEncryptionProfile response element from \a xml.
 */
void CreateFieldLevelEncryptionProfileResponsePrivate::parseCreateFieldLevelEncryptionProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFieldLevelEncryptionProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
