// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefieldlevelencryptionconfigresponse.h"
#include "updatefieldlevelencryptionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateFieldLevelEncryptionConfigResponse
 * \brief The UpdateFieldLevelEncryptionConfigResponse class provides an interace for CloudFront UpdateFieldLevelEncryptionConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateFieldLevelEncryptionConfig
 */

/*!
 * Constructs a UpdateFieldLevelEncryptionConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFieldLevelEncryptionConfigResponse::UpdateFieldLevelEncryptionConfigResponse(
        const UpdateFieldLevelEncryptionConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateFieldLevelEncryptionConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateFieldLevelEncryptionConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFieldLevelEncryptionConfigRequest * UpdateFieldLevelEncryptionConfigResponse::request() const
{
    Q_D(const UpdateFieldLevelEncryptionConfigResponse);
    return static_cast<const UpdateFieldLevelEncryptionConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront UpdateFieldLevelEncryptionConfig \a response.
 */
void UpdateFieldLevelEncryptionConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFieldLevelEncryptionConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::UpdateFieldLevelEncryptionConfigResponsePrivate
 * \brief The UpdateFieldLevelEncryptionConfigResponsePrivate class provides private implementation for UpdateFieldLevelEncryptionConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateFieldLevelEncryptionConfigResponsePrivate object with public implementation \a q.
 */
UpdateFieldLevelEncryptionConfigResponsePrivate::UpdateFieldLevelEncryptionConfigResponsePrivate(
    UpdateFieldLevelEncryptionConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront UpdateFieldLevelEncryptionConfig response element from \a xml.
 */
void UpdateFieldLevelEncryptionConfigResponsePrivate::parseUpdateFieldLevelEncryptionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFieldLevelEncryptionConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
