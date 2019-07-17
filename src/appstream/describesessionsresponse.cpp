/*
    Copyright 2013-2019 Paul Colby

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

#include "describesessionsresponse.h"
#include "describesessionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DescribeSessionsResponse
 * \brief The DescribeSessionsResponse class provides an interace for AppStream DescribeSessions responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::describeSessions
 */

/*!
 * Constructs a DescribeSessionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSessionsResponse::DescribeSessionsResponse(
        const DescribeSessionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DescribeSessionsResponsePrivate(this), parent)
{
    setRequest(new DescribeSessionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSessionsRequest * DescribeSessionsResponse::request() const
{
    Q_D(const DescribeSessionsResponse);
    return static_cast<const DescribeSessionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream DescribeSessions \a response.
 */
void DescribeSessionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSessionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::DescribeSessionsResponsePrivate
 * \brief The DescribeSessionsResponsePrivate class provides private implementation for DescribeSessionsResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DescribeSessionsResponsePrivate object with public implementation \a q.
 */
DescribeSessionsResponsePrivate::DescribeSessionsResponsePrivate(
    DescribeSessionsResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream DescribeSessions response element from \a xml.
 */
void DescribeSessionsResponsePrivate::parseDescribeSessionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSessionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
