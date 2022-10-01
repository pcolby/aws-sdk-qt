// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(GetFieldLevelEncryptionProfileResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
