// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcachepolicyconfigresponse.h"
#include "getcachepolicyconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetCachePolicyConfigResponse
 * \brief The GetCachePolicyConfigResponse class provides an interace for CloudFront GetCachePolicyConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getCachePolicyConfig
 */

/*!
 * Constructs a GetCachePolicyConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetCachePolicyConfigResponse::GetCachePolicyConfigResponse(
        const GetCachePolicyConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetCachePolicyConfigResponsePrivate(this), parent)
{
    setRequest(new GetCachePolicyConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCachePolicyConfigRequest * GetCachePolicyConfigResponse::request() const
{
    Q_D(const GetCachePolicyConfigResponse);
    return static_cast<const GetCachePolicyConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetCachePolicyConfig \a response.
 */
void GetCachePolicyConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCachePolicyConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetCachePolicyConfigResponsePrivate
 * \brief The GetCachePolicyConfigResponsePrivate class provides private implementation for GetCachePolicyConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetCachePolicyConfigResponsePrivate object with public implementation \a q.
 */
GetCachePolicyConfigResponsePrivate::GetCachePolicyConfigResponsePrivate(
    GetCachePolicyConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetCachePolicyConfig response element from \a xml.
 */
void GetCachePolicyConfigResponsePrivate::parseGetCachePolicyConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCachePolicyConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
