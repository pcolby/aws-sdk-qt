// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getoriginrequestpolicyresponse.h"
#include "getoriginrequestpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetOriginRequestPolicyResponse
 * \brief The GetOriginRequestPolicyResponse class provides an interace for CloudFront GetOriginRequestPolicy responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getOriginRequestPolicy
 */

/*!
 * Constructs a GetOriginRequestPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetOriginRequestPolicyResponse::GetOriginRequestPolicyResponse(
        const GetOriginRequestPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetOriginRequestPolicyResponsePrivate(this), parent)
{
    setRequest(new GetOriginRequestPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOriginRequestPolicyRequest * GetOriginRequestPolicyResponse::request() const
{
    Q_D(const GetOriginRequestPolicyResponse);
    return static_cast<const GetOriginRequestPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetOriginRequestPolicy \a response.
 */
void GetOriginRequestPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOriginRequestPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetOriginRequestPolicyResponsePrivate
 * \brief The GetOriginRequestPolicyResponsePrivate class provides private implementation for GetOriginRequestPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetOriginRequestPolicyResponsePrivate object with public implementation \a q.
 */
GetOriginRequestPolicyResponsePrivate::GetOriginRequestPolicyResponsePrivate(
    GetOriginRequestPolicyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetOriginRequestPolicy response element from \a xml.
 */
void GetOriginRequestPolicyResponsePrivate::parseGetOriginRequestPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOriginRequestPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
