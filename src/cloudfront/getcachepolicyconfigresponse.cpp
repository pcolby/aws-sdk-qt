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
    return static_cast<const GetCachePolicyConfigRequest *>(CloudFrontResponse::request());
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
