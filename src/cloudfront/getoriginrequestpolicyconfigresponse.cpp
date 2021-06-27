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

#include "getoriginrequestpolicyconfigresponse.h"
#include "getoriginrequestpolicyconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetOriginRequestPolicyConfigResponse
 * \brief The GetOriginRequestPolicyConfigResponse class provides an interace for CloudFront GetOriginRequestPolicyConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getOriginRequestPolicyConfig
 */

/*!
 * Constructs a GetOriginRequestPolicyConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetOriginRequestPolicyConfigResponse::GetOriginRequestPolicyConfigResponse(
        const GetOriginRequestPolicyConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetOriginRequestPolicyConfigResponsePrivate(this), parent)
{
    setRequest(new GetOriginRequestPolicyConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOriginRequestPolicyConfigRequest * GetOriginRequestPolicyConfigResponse::request() const
{
    return static_cast<const GetOriginRequestPolicyConfigRequest *>(CloudFrontResponse::request());
}

/*!
 * \reimp
 * Parses a successful CloudFront GetOriginRequestPolicyConfig \a response.
 */
void GetOriginRequestPolicyConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOriginRequestPolicyConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetOriginRequestPolicyConfigResponsePrivate
 * \brief The GetOriginRequestPolicyConfigResponsePrivate class provides private implementation for GetOriginRequestPolicyConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetOriginRequestPolicyConfigResponsePrivate object with public implementation \a q.
 */
GetOriginRequestPolicyConfigResponsePrivate::GetOriginRequestPolicyConfigResponsePrivate(
    GetOriginRequestPolicyConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetOriginRequestPolicyConfig response element from \a xml.
 */
void GetOriginRequestPolicyConfigResponsePrivate::parseGetOriginRequestPolicyConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOriginRequestPolicyConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
