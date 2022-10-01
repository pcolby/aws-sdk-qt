// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefieldlevelencryptionconfigresponse.h"
#include "deletefieldlevelencryptionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteFieldLevelEncryptionConfigResponse
 * \brief The DeleteFieldLevelEncryptionConfigResponse class provides an interace for CloudFront DeleteFieldLevelEncryptionConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteFieldLevelEncryptionConfig
 */

/*!
 * Constructs a DeleteFieldLevelEncryptionConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFieldLevelEncryptionConfigResponse::DeleteFieldLevelEncryptionConfigResponse(
        const DeleteFieldLevelEncryptionConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteFieldLevelEncryptionConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteFieldLevelEncryptionConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFieldLevelEncryptionConfigRequest * DeleteFieldLevelEncryptionConfigResponse::request() const
{
    Q_D(const DeleteFieldLevelEncryptionConfigResponse);
    return static_cast<const DeleteFieldLevelEncryptionConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront DeleteFieldLevelEncryptionConfig \a response.
 */
void DeleteFieldLevelEncryptionConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFieldLevelEncryptionConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DeleteFieldLevelEncryptionConfigResponsePrivate
 * \brief The DeleteFieldLevelEncryptionConfigResponsePrivate class provides private implementation for DeleteFieldLevelEncryptionConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteFieldLevelEncryptionConfigResponsePrivate object with public implementation \a q.
 */
DeleteFieldLevelEncryptionConfigResponsePrivate::DeleteFieldLevelEncryptionConfigResponsePrivate(
    DeleteFieldLevelEncryptionConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DeleteFieldLevelEncryptionConfig response element from \a xml.
 */
void DeleteFieldLevelEncryptionConfigResponsePrivate::parseDeleteFieldLevelEncryptionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFieldLevelEncryptionConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
