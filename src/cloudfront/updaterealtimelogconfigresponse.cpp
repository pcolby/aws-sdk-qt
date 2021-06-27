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

#include "updaterealtimelogconfigresponse.h"
#include "updaterealtimelogconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateRealtimeLogConfigResponse
 * \brief The UpdateRealtimeLogConfigResponse class provides an interace for CloudFront UpdateRealtimeLogConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateRealtimeLogConfig
 */

/*!
 * Constructs a UpdateRealtimeLogConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRealtimeLogConfigResponse::UpdateRealtimeLogConfigResponse(
        const UpdateRealtimeLogConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateRealtimeLogConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateRealtimeLogConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRealtimeLogConfigRequest * UpdateRealtimeLogConfigResponse::request() const
{
    return static_cast<const UpdateRealtimeLogConfigRequest *>(CloudFrontResponse::request());
}

/*!
 * \reimp
 * Parses a successful CloudFront UpdateRealtimeLogConfig \a response.
 */
void UpdateRealtimeLogConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRealtimeLogConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::UpdateRealtimeLogConfigResponsePrivate
 * \brief The UpdateRealtimeLogConfigResponsePrivate class provides private implementation for UpdateRealtimeLogConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateRealtimeLogConfigResponsePrivate object with public implementation \a q.
 */
UpdateRealtimeLogConfigResponsePrivate::UpdateRealtimeLogConfigResponsePrivate(
    UpdateRealtimeLogConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront UpdateRealtimeLogConfig response element from \a xml.
 */
void UpdateRealtimeLogConfigResponsePrivate::parseUpdateRealtimeLogConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRealtimeLogConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
