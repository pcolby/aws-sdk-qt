/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletecloudfrontoriginaccessidentityresponse.h"
#include "deletecloudfrontoriginaccessidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteCloudFrontOriginAccessIdentityResponse
 * \brief The DeleteCloudFrontOriginAccessIdentityResponse class provides an interace for CloudFront DeleteCloudFrontOriginAccessIdentity responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteCloudFrontOriginAccessIdentity
 */

/*!
 * Constructs a DeleteCloudFrontOriginAccessIdentityResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCloudFrontOriginAccessIdentityResponse::DeleteCloudFrontOriginAccessIdentityResponse(
        const DeleteCloudFrontOriginAccessIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteCloudFrontOriginAccessIdentityResponsePrivate(this), parent)
{
    setRequest(new DeleteCloudFrontOriginAccessIdentityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCloudFrontOriginAccessIdentityRequest * DeleteCloudFrontOriginAccessIdentityResponse::request() const
{
    Q_D(const DeleteCloudFrontOriginAccessIdentityResponse);
    return static_cast<const DeleteCloudFrontOriginAccessIdentityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront DeleteCloudFrontOriginAccessIdentity \a response.
 */
void DeleteCloudFrontOriginAccessIdentityResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteCloudFrontOriginAccessIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DeleteCloudFrontOriginAccessIdentityResponsePrivate
 * \brief The DeleteCloudFrontOriginAccessIdentityResponsePrivate class provides private implementation for DeleteCloudFrontOriginAccessIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteCloudFrontOriginAccessIdentityResponsePrivate object with public implementation \a q.
 */
DeleteCloudFrontOriginAccessIdentityResponsePrivate::DeleteCloudFrontOriginAccessIdentityResponsePrivate(
    DeleteCloudFrontOriginAccessIdentityResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DeleteCloudFrontOriginAccessIdentity response element from \a xml.
 */
void DeleteCloudFrontOriginAccessIdentityResponsePrivate::parseDeleteCloudFrontOriginAccessIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCloudFrontOriginAccessIdentityResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
