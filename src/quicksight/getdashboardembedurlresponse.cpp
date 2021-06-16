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

#include "getdashboardembedurlresponse.h"
#include "getdashboardembedurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::GetDashboardEmbedUrlResponse
 * \brief The GetDashboardEmbedUrlResponse class provides an interace for QuickSight GetDashboardEmbedUrl responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless, cloud business intelligence service that makes it easy to extend data
 *  and insights to every user in your organization. This API interface reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::getDashboardEmbedUrl
 */

/*!
 * Constructs a GetDashboardEmbedUrlResponse object for \a reply to \a request, with parent \a parent.
 */
GetDashboardEmbedUrlResponse::GetDashboardEmbedUrlResponse(
        const GetDashboardEmbedUrlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new GetDashboardEmbedUrlResponsePrivate(this), parent)
{
    setRequest(new GetDashboardEmbedUrlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDashboardEmbedUrlRequest * GetDashboardEmbedUrlResponse::request() const
{
    Q_D(const GetDashboardEmbedUrlResponse);
    return static_cast<const GetDashboardEmbedUrlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight GetDashboardEmbedUrl \a response.
 */
void GetDashboardEmbedUrlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDashboardEmbedUrlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::GetDashboardEmbedUrlResponsePrivate
 * \brief The GetDashboardEmbedUrlResponsePrivate class provides private implementation for GetDashboardEmbedUrlResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a GetDashboardEmbedUrlResponsePrivate object with public implementation \a q.
 */
GetDashboardEmbedUrlResponsePrivate::GetDashboardEmbedUrlResponsePrivate(
    GetDashboardEmbedUrlResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight GetDashboardEmbedUrl response element from \a xml.
 */
void GetDashboardEmbedUrlResponsePrivate::parseGetDashboardEmbedUrlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDashboardEmbedUrlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
