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

#include "createcloudfrontoriginaccessidentityresponse.h"
#include "createcloudfrontoriginaccessidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateCloudFrontOriginAccessIdentityResponse
 * \brief The CreateCloudFrontOriginAccessIdentityResponse class provides an interace for CloudFront CreateCloudFrontOriginAccessIdentity responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createCloudFrontOriginAccessIdentity
 */

/*!
 * Constructs a CreateCloudFrontOriginAccessIdentityResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCloudFrontOriginAccessIdentityResponse::CreateCloudFrontOriginAccessIdentityResponse(
        const CreateCloudFrontOriginAccessIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateCloudFrontOriginAccessIdentityResponsePrivate(this), parent)
{
    setRequest(new CreateCloudFrontOriginAccessIdentityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCloudFrontOriginAccessIdentityRequest * CreateCloudFrontOriginAccessIdentityResponse::request() const
{
    Q_D(const CreateCloudFrontOriginAccessIdentityResponse);
    return static_cast<const CreateCloudFrontOriginAccessIdentityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront CreateCloudFrontOriginAccessIdentity \a response.
 */
void CreateCloudFrontOriginAccessIdentityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCloudFrontOriginAccessIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreateCloudFrontOriginAccessIdentityResponsePrivate
 * \brief The CreateCloudFrontOriginAccessIdentityResponsePrivate class provides private implementation for CreateCloudFrontOriginAccessIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateCloudFrontOriginAccessIdentityResponsePrivate object with public implementation \a q.
 */
CreateCloudFrontOriginAccessIdentityResponsePrivate::CreateCloudFrontOriginAccessIdentityResponsePrivate(
    CreateCloudFrontOriginAccessIdentityResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreateCloudFrontOriginAccessIdentity response element from \a xml.
 */
void CreateCloudFrontOriginAccessIdentityResponsePrivate::parseCreateCloudFrontOriginAccessIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCloudFrontOriginAccessIdentityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
