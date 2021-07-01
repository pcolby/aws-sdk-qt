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

#include "getsessionembedurlresponse.h"
#include "getsessionembedurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::GetSessionEmbedUrlResponse
 * \brief The GetSessionEmbedUrlResponse class provides an interace for QuickSight GetSessionEmbedUrl responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::getSessionEmbedUrl
 */

/*!
 * Constructs a GetSessionEmbedUrlResponse object for \a reply to \a request, with parent \a parent.
 */
GetSessionEmbedUrlResponse::GetSessionEmbedUrlResponse(
        const GetSessionEmbedUrlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new GetSessionEmbedUrlResponsePrivate(this), parent)
{
    setRequest(new GetSessionEmbedUrlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSessionEmbedUrlRequest * GetSessionEmbedUrlResponse::request() const
{
    Q_D(const GetSessionEmbedUrlResponse);
    return static_cast<const GetSessionEmbedUrlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight GetSessionEmbedUrl \a response.
 */
void GetSessionEmbedUrlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSessionEmbedUrlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::GetSessionEmbedUrlResponsePrivate
 * \brief The GetSessionEmbedUrlResponsePrivate class provides private implementation for GetSessionEmbedUrlResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a GetSessionEmbedUrlResponsePrivate object with public implementation \a q.
 */
GetSessionEmbedUrlResponsePrivate::GetSessionEmbedUrlResponsePrivate(
    GetSessionEmbedUrlResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight GetSessionEmbedUrl response element from \a xml.
 */
void GetSessionEmbedUrlResponsePrivate::parseGetSessionEmbedUrlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSessionEmbedUrlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
