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

#include "updatecloudfrontoriginaccessidentityresponse.h"
#include "updatecloudfrontoriginaccessidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateCloudFrontOriginAccessIdentityResponse
 * \brief The UpdateCloudFrontOriginAccessIdentityResponse class provides an interace for CloudFront UpdateCloudFrontOriginAccessIdentity responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateCloudFrontOriginAccessIdentity
 */

/*!
 * Constructs a UpdateCloudFrontOriginAccessIdentityResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCloudFrontOriginAccessIdentityResponse::UpdateCloudFrontOriginAccessIdentityResponse(
        const UpdateCloudFrontOriginAccessIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateCloudFrontOriginAccessIdentityResponsePrivate(this), parent)
{
    setRequest(new UpdateCloudFrontOriginAccessIdentityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCloudFrontOriginAccessIdentityRequest * UpdateCloudFrontOriginAccessIdentityResponse::request() const
{
    Q_D(const UpdateCloudFrontOriginAccessIdentityResponse);
    return static_cast<const UpdateCloudFrontOriginAccessIdentityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront UpdateCloudFrontOriginAccessIdentity \a response.
 */
void UpdateCloudFrontOriginAccessIdentityResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateCloudFrontOriginAccessIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::UpdateCloudFrontOriginAccessIdentityResponsePrivate
 * \brief The UpdateCloudFrontOriginAccessIdentityResponsePrivate class provides private implementation for UpdateCloudFrontOriginAccessIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateCloudFrontOriginAccessIdentityResponsePrivate object with public implementation \a q.
 */
UpdateCloudFrontOriginAccessIdentityResponsePrivate::UpdateCloudFrontOriginAccessIdentityResponsePrivate(
    UpdateCloudFrontOriginAccessIdentityResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront UpdateCloudFrontOriginAccessIdentity response element from \a xml.
 */
void UpdateCloudFrontOriginAccessIdentityResponsePrivate::parseUpdateCloudFrontOriginAccessIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCloudFrontOriginAccessIdentityResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
