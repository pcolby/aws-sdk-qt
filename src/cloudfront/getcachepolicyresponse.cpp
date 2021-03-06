/*
    Copyright 2013-2021 Paul Colby

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
