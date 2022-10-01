// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfieldlevelencryptionconfigresponse.h"
#include "getfieldlevelencryptionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionConfigResponse
 * \brief The GetFieldLevelEncryptionConfigResponse class provides an interace for CloudFront GetFieldLevelEncryptionConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getFieldLevelEncryptionConfig
 */

/*!
 * Constructs a GetFieldLevelEncryptionConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetFieldLevelEncryptionConfigResponse::GetFieldLevelEncryptionConfigResponse(
        const GetFieldLevelEncryptionConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetFieldLevelEncryptionConfigResponsePrivate(this), parent)
{
    setRequest(new GetFieldLevelEncryptionConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFieldLevelEncryptionConfigRequest * GetFieldLevelEncryptionConfigResponse::request() const
{
    Q_D(const GetFieldLevelEncryptionConfigResponse);
    return static_cast<const GetFieldLevelEncryptionConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetFieldLevelEncryptionConfig \a response.
 */
void GetFieldLevelEncryptionConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFieldLevelEncryptionConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionConfigResponsePrivate
 * \brief The GetFieldLevelEncryptionConfigResponsePrivate class provides private implementation for GetFieldLevelEncryptionConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetFieldLevelEncryptionConfigResponsePrivate object with public implementation \a q.
 */
GetFieldLevelEncryptionConfigResponsePrivate::GetFieldLevelEncryptionConfigResponsePrivate(
    GetFieldLevelEncryptionConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetFieldLevelEncryptionConfig response element from \a xml.
 */
void GetFieldLevelEncryptionConfigResponsePrivate::parseGetFieldLevelEncryptionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFieldLevelEncryptionConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
