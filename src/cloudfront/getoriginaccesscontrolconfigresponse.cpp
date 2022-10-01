// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getoriginaccesscontrolconfigresponse.h"
#include "getoriginaccesscontrolconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetOriginAccessControlConfigResponse
 * \brief The GetOriginAccessControlConfigResponse class provides an interace for CloudFront GetOriginAccessControlConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getOriginAccessControlConfig
 */

/*!
 * Constructs a GetOriginAccessControlConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetOriginAccessControlConfigResponse::GetOriginAccessControlConfigResponse(
        const GetOriginAccessControlConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetOriginAccessControlConfigResponsePrivate(this), parent)
{
    setRequest(new GetOriginAccessControlConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOriginAccessControlConfigRequest * GetOriginAccessControlConfigResponse::request() const
{
    Q_D(const GetOriginAccessControlConfigResponse);
    return static_cast<const GetOriginAccessControlConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetOriginAccessControlConfig \a response.
 */
void GetOriginAccessControlConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOriginAccessControlConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetOriginAccessControlConfigResponsePrivate
 * \brief The GetOriginAccessControlConfigResponsePrivate class provides private implementation for GetOriginAccessControlConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetOriginAccessControlConfigResponsePrivate object with public implementation \a q.
 */
GetOriginAccessControlConfigResponsePrivate::GetOriginAccessControlConfigResponsePrivate(
    GetOriginAccessControlConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetOriginAccessControlConfig response element from \a xml.
 */
void GetOriginAccessControlConfigResponsePrivate::parseGetOriginAccessControlConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOriginAccessControlConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
