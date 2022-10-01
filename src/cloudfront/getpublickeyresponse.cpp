// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpublickeyresponse.h"
#include "getpublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetPublicKeyResponse
 * \brief The GetPublicKeyResponse class provides an interace for CloudFront GetPublicKey responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getPublicKey
 */

/*!
 * Constructs a GetPublicKeyResponse object for \a reply to \a request, with parent \a parent.
 */
GetPublicKeyResponse::GetPublicKeyResponse(
        const GetPublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetPublicKeyResponsePrivate(this), parent)
{
    setRequest(new GetPublicKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPublicKeyRequest * GetPublicKeyResponse::request() const
{
    Q_D(const GetPublicKeyResponse);
    return static_cast<const GetPublicKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetPublicKey \a response.
 */
void GetPublicKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPublicKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetPublicKeyResponsePrivate
 * \brief The GetPublicKeyResponsePrivate class provides private implementation for GetPublicKeyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetPublicKeyResponsePrivate object with public implementation \a q.
 */
GetPublicKeyResponsePrivate::GetPublicKeyResponsePrivate(
    GetPublicKeyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetPublicKey response element from \a xml.
 */
void GetPublicKeyResponsePrivate::parseGetPublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPublicKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
