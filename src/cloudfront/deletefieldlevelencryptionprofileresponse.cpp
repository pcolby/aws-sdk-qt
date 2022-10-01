// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefieldlevelencryptionprofileresponse.h"
#include "deletefieldlevelencryptionprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteFieldLevelEncryptionProfileResponse
 * \brief The DeleteFieldLevelEncryptionProfileResponse class provides an interace for CloudFront DeleteFieldLevelEncryptionProfile responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteFieldLevelEncryptionProfile
 */

/*!
 * Constructs a DeleteFieldLevelEncryptionProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFieldLevelEncryptionProfileResponse::DeleteFieldLevelEncryptionProfileResponse(
        const DeleteFieldLevelEncryptionProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteFieldLevelEncryptionProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteFieldLevelEncryptionProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFieldLevelEncryptionProfileRequest * DeleteFieldLevelEncryptionProfileResponse::request() const
{
    Q_D(const DeleteFieldLevelEncryptionProfileResponse);
    return static_cast<const DeleteFieldLevelEncryptionProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront DeleteFieldLevelEncryptionProfile \a response.
 */
void DeleteFieldLevelEncryptionProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFieldLevelEncryptionProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DeleteFieldLevelEncryptionProfileResponsePrivate
 * \brief The DeleteFieldLevelEncryptionProfileResponsePrivate class provides private implementation for DeleteFieldLevelEncryptionProfileResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteFieldLevelEncryptionProfileResponsePrivate object with public implementation \a q.
 */
DeleteFieldLevelEncryptionProfileResponsePrivate::DeleteFieldLevelEncryptionProfileResponsePrivate(
    DeleteFieldLevelEncryptionProfileResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DeleteFieldLevelEncryptionProfile response element from \a xml.
 */
void DeleteFieldLevelEncryptionProfileResponsePrivate::parseDeleteFieldLevelEncryptionProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFieldLevelEncryptionProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
