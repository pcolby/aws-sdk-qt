// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfieldlevelencryptionprofileconfigresponse.h"
#include "getfieldlevelencryptionprofileconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionProfileConfigResponse
 * \brief The GetFieldLevelEncryptionProfileConfigResponse class provides an interace for CloudFront GetFieldLevelEncryptionProfileConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getFieldLevelEncryptionProfileConfig
 */

/*!
 * Constructs a GetFieldLevelEncryptionProfileConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetFieldLevelEncryptionProfileConfigResponse::GetFieldLevelEncryptionProfileConfigResponse(
        const GetFieldLevelEncryptionProfileConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetFieldLevelEncryptionProfileConfigResponsePrivate(this), parent)
{
    setRequest(new GetFieldLevelEncryptionProfileConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFieldLevelEncryptionProfileConfigRequest * GetFieldLevelEncryptionProfileConfigResponse::request() const
{
    Q_D(const GetFieldLevelEncryptionProfileConfigResponse);
    return static_cast<const GetFieldLevelEncryptionProfileConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetFieldLevelEncryptionProfileConfig \a response.
 */
void GetFieldLevelEncryptionProfileConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFieldLevelEncryptionProfileConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionProfileConfigResponsePrivate
 * \brief The GetFieldLevelEncryptionProfileConfigResponsePrivate class provides private implementation for GetFieldLevelEncryptionProfileConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetFieldLevelEncryptionProfileConfigResponsePrivate object with public implementation \a q.
 */
GetFieldLevelEncryptionProfileConfigResponsePrivate::GetFieldLevelEncryptionProfileConfigResponsePrivate(
    GetFieldLevelEncryptionProfileConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetFieldLevelEncryptionProfileConfig response element from \a xml.
 */
void GetFieldLevelEncryptionProfileConfigResponsePrivate::parseGetFieldLevelEncryptionProfileConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFieldLevelEncryptionProfileConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
