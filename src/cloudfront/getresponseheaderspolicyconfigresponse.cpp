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

#include "getresponseheaderspolicyconfigresponse.h"
#include "getresponseheaderspolicyconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetResponseHeadersPolicyConfigResponse
 * \brief The GetResponseHeadersPolicyConfigResponse class provides an interace for CloudFront GetResponseHeadersPolicyConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getResponseHeadersPolicyConfig
 */

/*!
 * Constructs a GetResponseHeadersPolicyConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetResponseHeadersPolicyConfigResponse::GetResponseHeadersPolicyConfigResponse(
        const GetResponseHeadersPolicyConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetResponseHeadersPolicyConfigResponsePrivate(this), parent)
{
    setRequest(new GetResponseHeadersPolicyConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResponseHeadersPolicyConfigRequest * GetResponseHeadersPolicyConfigResponse::request() const
{
    Q_D(const GetResponseHeadersPolicyConfigResponse);
    return static_cast<const GetResponseHeadersPolicyConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetResponseHeadersPolicyConfig \a response.
 */
void GetResponseHeadersPolicyConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResponseHeadersPolicyConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetResponseHeadersPolicyConfigResponsePrivate
 * \brief The GetResponseHeadersPolicyConfigResponsePrivate class provides private implementation for GetResponseHeadersPolicyConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetResponseHeadersPolicyConfigResponsePrivate object with public implementation \a q.
 */
GetResponseHeadersPolicyConfigResponsePrivate::GetResponseHeadersPolicyConfigResponsePrivate(
    GetResponseHeadersPolicyConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetResponseHeadersPolicyConfig response element from \a xml.
 */
void GetResponseHeadersPolicyConfigResponsePrivate::parseGetResponseHeadersPolicyConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResponseHeadersPolicyConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
