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

#include "listrealtimelogconfigsresponse.h"
#include "listrealtimelogconfigsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListRealtimeLogConfigsResponse
 * \brief The ListRealtimeLogConfigsResponse class provides an interace for CloudFront ListRealtimeLogConfigs responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listRealtimeLogConfigs
 */

/*!
 * Constructs a ListRealtimeLogConfigsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRealtimeLogConfigsResponse::ListRealtimeLogConfigsResponse(
        const ListRealtimeLogConfigsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListRealtimeLogConfigsResponsePrivate(this), parent)
{
    setRequest(new ListRealtimeLogConfigsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRealtimeLogConfigsRequest * ListRealtimeLogConfigsResponse::request() const
{
    return static_cast<const ListRealtimeLogConfigsRequest *>(CloudFrontResponse::request());
}

/*!
 * \reimp
 * Parses a successful CloudFront ListRealtimeLogConfigs \a response.
 */
void ListRealtimeLogConfigsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRealtimeLogConfigsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListRealtimeLogConfigsResponsePrivate
 * \brief The ListRealtimeLogConfigsResponsePrivate class provides private implementation for ListRealtimeLogConfigsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListRealtimeLogConfigsResponsePrivate object with public implementation \a q.
 */
ListRealtimeLogConfigsResponsePrivate::ListRealtimeLogConfigsResponsePrivate(
    ListRealtimeLogConfigsResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListRealtimeLogConfigs response element from \a xml.
 */
void ListRealtimeLogConfigsResponsePrivate::parseListRealtimeLogConfigsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRealtimeLogConfigsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
