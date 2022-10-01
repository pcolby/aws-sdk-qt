// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrealtimelogconfigresponse.h"
#include "getrealtimelogconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetRealtimeLogConfigResponse
 * \brief The GetRealtimeLogConfigResponse class provides an interace for CloudFront GetRealtimeLogConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getRealtimeLogConfig
 */

/*!
 * Constructs a GetRealtimeLogConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetRealtimeLogConfigResponse::GetRealtimeLogConfigResponse(
        const GetRealtimeLogConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetRealtimeLogConfigResponsePrivate(this), parent)
{
    setRequest(new GetRealtimeLogConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRealtimeLogConfigRequest * GetRealtimeLogConfigResponse::request() const
{
    Q_D(const GetRealtimeLogConfigResponse);
    return static_cast<const GetRealtimeLogConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetRealtimeLogConfig \a response.
 */
void GetRealtimeLogConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRealtimeLogConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetRealtimeLogConfigResponsePrivate
 * \brief The GetRealtimeLogConfigResponsePrivate class provides private implementation for GetRealtimeLogConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetRealtimeLogConfigResponsePrivate object with public implementation \a q.
 */
GetRealtimeLogConfigResponsePrivate::GetRealtimeLogConfigResponsePrivate(
    GetRealtimeLogConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetRealtimeLogConfig response element from \a xml.
 */
void GetRealtimeLogConfigResponsePrivate::parseGetRealtimeLogConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRealtimeLogConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
