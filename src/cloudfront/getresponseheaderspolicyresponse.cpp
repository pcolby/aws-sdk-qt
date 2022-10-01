// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresponseheaderspolicyresponse.h"
#include "getresponseheaderspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetResponseHeadersPolicyResponse
 * \brief The GetResponseHeadersPolicyResponse class provides an interace for CloudFront GetResponseHeadersPolicy responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getResponseHeadersPolicy
 */

/*!
 * Constructs a GetResponseHeadersPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetResponseHeadersPolicyResponse::GetResponseHeadersPolicyResponse(
        const GetResponseHeadersPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetResponseHeadersPolicyResponsePrivate(this), parent)
{
    setRequest(new GetResponseHeadersPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResponseHeadersPolicyRequest * GetResponseHeadersPolicyResponse::request() const
{
    Q_D(const GetResponseHeadersPolicyResponse);
    return static_cast<const GetResponseHeadersPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetResponseHeadersPolicy \a response.
 */
void GetResponseHeadersPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResponseHeadersPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetResponseHeadersPolicyResponsePrivate
 * \brief The GetResponseHeadersPolicyResponsePrivate class provides private implementation for GetResponseHeadersPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetResponseHeadersPolicyResponsePrivate object with public implementation \a q.
 */
GetResponseHeadersPolicyResponsePrivate::GetResponseHeadersPolicyResponsePrivate(
    GetResponseHeadersPolicyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetResponseHeadersPolicy response element from \a xml.
 */
void GetResponseHeadersPolicyResponsePrivate::parseGetResponseHeadersPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResponseHeadersPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
