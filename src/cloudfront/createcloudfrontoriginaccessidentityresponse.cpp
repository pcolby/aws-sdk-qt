// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
