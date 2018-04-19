/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describestacksresponse.h"
#include "describestacksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DescribeStacksResponse
 * \brief The DescribeStacksResponse class provides an interace for AppStream DescribeStacks responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::describeStacks
 */

/*!
 * Constructs a DescribeStacksResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeStacksResponse::DescribeStacksResponse(
        const DescribeStacksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DescribeStacksResponsePrivate(this), parent)
{
    setRequest(new DescribeStacksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeStacksRequest * DescribeStacksResponse::request() const
{
    Q_D(const DescribeStacksResponse);
    return static_cast<const DescribeStacksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream DescribeStacks \a response.
 */
void DescribeStacksResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeStacksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::DescribeStacksResponsePrivate
 * \brief The DescribeStacksResponsePrivate class provides private implementation for DescribeStacksResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DescribeStacksResponsePrivate object with public implementation \a q.
 */
DescribeStacksResponsePrivate::DescribeStacksResponsePrivate(
    DescribeStacksResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream DescribeStacks response element from \a xml.
 */
void DescribeStacksResponsePrivate::parseDescribeStacksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStacksResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
