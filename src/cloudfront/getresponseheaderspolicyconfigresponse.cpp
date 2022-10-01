// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
