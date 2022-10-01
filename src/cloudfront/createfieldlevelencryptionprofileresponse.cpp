// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const CreateFieldLevelEncryptionProfileResponse);
    return static_cast<const CreateFieldLevelEncryptionProfileRequest *>(d->request);
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
