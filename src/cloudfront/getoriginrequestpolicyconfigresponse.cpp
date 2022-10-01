// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const GetOriginRequestPolicyConfigResponse);
    return static_cast<const GetOriginRequestPolicyConfigRequest *>(d->request);
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
