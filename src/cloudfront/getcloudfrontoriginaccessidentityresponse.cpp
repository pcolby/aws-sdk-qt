// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcloudfrontoriginaccessidentityresponse.h"
#include "getcloudfrontoriginaccessidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetCloudFrontOriginAccessIdentityResponse
 * \brief The GetCloudFrontOriginAccessIdentityResponse class provides an interace for CloudFront GetCloudFrontOriginAccessIdentity responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getCloudFrontOriginAccessIdentity
 */

/*!
 * Constructs a GetCloudFrontOriginAccessIdentityResponse object for \a reply to \a request, with parent \a parent.
 */
GetCloudFrontOriginAccessIdentityResponse::GetCloudFrontOriginAccessIdentityResponse(
        const GetCloudFrontOriginAccessIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetCloudFrontOriginAccessIdentityResponsePrivate(this), parent)
{
    setRequest(new GetCloudFrontOriginAccessIdentityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCloudFrontOriginAccessIdentityRequest * GetCloudFrontOriginAccessIdentityResponse::request() const
{
    Q_D(const GetCloudFrontOriginAccessIdentityResponse);
    return static_cast<const GetCloudFrontOriginAccessIdentityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetCloudFrontOriginAccessIdentity \a response.
 */
void GetCloudFrontOriginAccessIdentityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCloudFrontOriginAccessIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetCloudFrontOriginAccessIdentityResponsePrivate
 * \brief The GetCloudFrontOriginAccessIdentityResponsePrivate class provides private implementation for GetCloudFrontOriginAccessIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetCloudFrontOriginAccessIdentityResponsePrivate object with public implementation \a q.
 */
GetCloudFrontOriginAccessIdentityResponsePrivate::GetCloudFrontOriginAccessIdentityResponsePrivate(
    GetCloudFrontOriginAccessIdentityResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetCloudFrontOriginAccessIdentity response element from \a xml.
 */
void GetCloudFrontOriginAccessIdentityResponsePrivate::parseGetCloudFrontOriginAccessIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCloudFrontOriginAccessIdentityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
