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

#include "deleterealtimelogconfigresponse.h"
#include "deleterealtimelogconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteRealtimeLogConfigResponse
 * \brief The DeleteRealtimeLogConfigResponse class provides an interace for CloudFront DeleteRealtimeLogConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteRealtimeLogConfig
 */

/*!
 * Constructs a DeleteRealtimeLogConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRealtimeLogConfigResponse::DeleteRealtimeLogConfigResponse(
        const DeleteRealtimeLogConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteRealtimeLogConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteRealtimeLogConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRealtimeLogConfigRequest * DeleteRealtimeLogConfigResponse::request() const
{
    return static_cast<const DeleteRealtimeLogConfigRequest *>(CloudFrontResponse::request());
}

/*!
 * \reimp
 * Parses a successful CloudFront DeleteRealtimeLogConfig \a response.
 */
void DeleteRealtimeLogConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRealtimeLogConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DeleteRealtimeLogConfigResponsePrivate
 * \brief The DeleteRealtimeLogConfigResponsePrivate class provides private implementation for DeleteRealtimeLogConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteRealtimeLogConfigResponsePrivate object with public implementation \a q.
 */
DeleteRealtimeLogConfigResponsePrivate::DeleteRealtimeLogConfigResponsePrivate(
    DeleteRealtimeLogConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DeleteRealtimeLogConfig response element from \a xml.
 */
void DeleteRealtimeLogConfigResponsePrivate::parseDeleteRealtimeLogConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRealtimeLogConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
