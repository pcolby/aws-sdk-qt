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
    return static_cast<const GetRealtimeLogConfigRequest *>(CloudFrontResponse::request());
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
