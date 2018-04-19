/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    Q_D(GetCloudFrontOriginAccessIdentityConfigResponse);
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
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
