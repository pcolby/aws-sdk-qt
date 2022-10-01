// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcachepolicyresponse.h"
#include "getcachepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetCachePolicyResponse
 * \brief The GetCachePolicyResponse class provides an interace for CloudFront GetCachePolicy responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getCachePolicy
 */

/*!
 * Constructs a GetCachePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetCachePolicyResponse::GetCachePolicyResponse(
        const GetCachePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetCachePolicyResponsePrivate(this), parent)
{
    setRequest(new GetCachePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCachePolicyRequest * GetCachePolicyResponse::request() const
{
    Q_D(const GetCachePolicyResponse);
    return static_cast<const GetCachePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetCachePolicy \a response.
 */
void GetCachePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCachePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetCachePolicyResponsePrivate
 * \brief The GetCachePolicyResponsePrivate class provides private implementation for GetCachePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetCachePolicyResponsePrivate object with public implementation \a q.
 */
GetCachePolicyResponsePrivate::GetCachePolicyResponsePrivate(
    GetCachePolicyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetCachePolicy response element from \a xml.
 */
void GetCachePolicyResponsePrivate::parseGetCachePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCachePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
