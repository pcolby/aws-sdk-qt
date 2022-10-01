// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getoriginaccesscontrolresponse.h"
#include "getoriginaccesscontrolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetOriginAccessControlResponse
 * \brief The GetOriginAccessControlResponse class provides an interace for CloudFront GetOriginAccessControl responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getOriginAccessControl
 */

/*!
 * Constructs a GetOriginAccessControlResponse object for \a reply to \a request, with parent \a parent.
 */
GetOriginAccessControlResponse::GetOriginAccessControlResponse(
        const GetOriginAccessControlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetOriginAccessControlResponsePrivate(this), parent)
{
    setRequest(new GetOriginAccessControlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOriginAccessControlRequest * GetOriginAccessControlResponse::request() const
{
    Q_D(const GetOriginAccessControlResponse);
    return static_cast<const GetOriginAccessControlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetOriginAccessControl \a response.
 */
void GetOriginAccessControlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOriginAccessControlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetOriginAccessControlResponsePrivate
 * \brief The GetOriginAccessControlResponsePrivate class provides private implementation for GetOriginAccessControlResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetOriginAccessControlResponsePrivate object with public implementation \a q.
 */
GetOriginAccessControlResponsePrivate::GetOriginAccessControlResponsePrivate(
    GetOriginAccessControlResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetOriginAccessControl response element from \a xml.
 */
void GetOriginAccessControlResponsePrivate::parseGetOriginAccessControlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOriginAccessControlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
