// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcloudfrontoriginaccessidentityconfigresponse.h"
#include "getcloudfrontoriginaccessidentityconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetCloudFrontOriginAccessIdentityConfigResponse
 * \brief The GetCloudFrontOriginAccessIdentityConfigResponse class provides an interace for CloudFront GetCloudFrontOriginAccessIdentityConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getCloudFrontOriginAccessIdentityConfig
 */

/*!
 * Constructs a GetCloudFrontOriginAccessIdentityConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetCloudFrontOriginAccessIdentityConfigResponse::GetCloudFrontOriginAccessIdentityConfigResponse(
        const GetCloudFrontOriginAccessIdentityConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetCloudFrontOriginAccessIdentityConfigResponsePrivate(this), parent)
{
    setRequest(new GetCloudFrontOriginAccessIdentityConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCloudFrontOriginAccessIdentityConfigRequest * GetCloudFrontOriginAccessIdentityConfigResponse::request() const
{
    Q_D(const GetCloudFrontOriginAccessIdentityConfigResponse);
    return static_cast<const GetCloudFrontOriginAccessIdentityConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetCloudFrontOriginAccessIdentityConfig \a response.
 */
void GetCloudFrontOriginAccessIdentityConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCloudFrontOriginAccessIdentityConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetCloudFrontOriginAccessIdentityConfigResponsePrivate
 * \brief The GetCloudFrontOriginAccessIdentityConfigResponsePrivate class provides private implementation for GetCloudFrontOriginAccessIdentityConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetCloudFrontOriginAccessIdentityConfigResponsePrivate object with public implementation \a q.
 */
GetCloudFrontOriginAccessIdentityConfigResponsePrivate::GetCloudFrontOriginAccessIdentityConfigResponsePrivate(
    GetCloudFrontOriginAccessIdentityConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetCloudFrontOriginAccessIdentityConfig response element from \a xml.
 */
void GetCloudFrontOriginAccessIdentityConfigResponsePrivate::parseGetCloudFrontOriginAccessIdentityConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCloudFrontOriginAccessIdentityConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
