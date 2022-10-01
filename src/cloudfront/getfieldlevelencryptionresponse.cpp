// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfieldlevelencryptionresponse.h"
#include "getfieldlevelencryptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionResponse
 * \brief The GetFieldLevelEncryptionResponse class provides an interace for CloudFront GetFieldLevelEncryption responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getFieldLevelEncryption
 */

/*!
 * Constructs a GetFieldLevelEncryptionResponse object for \a reply to \a request, with parent \a parent.
 */
GetFieldLevelEncryptionResponse::GetFieldLevelEncryptionResponse(
        const GetFieldLevelEncryptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetFieldLevelEncryptionResponsePrivate(this), parent)
{
    setRequest(new GetFieldLevelEncryptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFieldLevelEncryptionRequest * GetFieldLevelEncryptionResponse::request() const
{
    Q_D(const GetFieldLevelEncryptionResponse);
    return static_cast<const GetFieldLevelEncryptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetFieldLevelEncryption \a response.
 */
void GetFieldLevelEncryptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFieldLevelEncryptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionResponsePrivate
 * \brief The GetFieldLevelEncryptionResponsePrivate class provides private implementation for GetFieldLevelEncryptionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetFieldLevelEncryptionResponsePrivate object with public implementation \a q.
 */
GetFieldLevelEncryptionResponsePrivate::GetFieldLevelEncryptionResponsePrivate(
    GetFieldLevelEncryptionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetFieldLevelEncryption response element from \a xml.
 */
void GetFieldLevelEncryptionResponsePrivate::parseGetFieldLevelEncryptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFieldLevelEncryptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
