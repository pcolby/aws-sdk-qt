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

#include "describeimagebuildersresponse.h"
#include "describeimagebuildersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DescribeImageBuildersResponse
 * \brief The DescribeImageBuildersResponse class provides an interace for AppStream DescribeImageBuilders responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::describeImageBuilders
 */

/*!
 * Constructs a DescribeImageBuildersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeImageBuildersResponse::DescribeImageBuildersResponse(
        const DescribeImageBuildersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DescribeImageBuildersResponsePrivate(this), parent)
{
    setRequest(new DescribeImageBuildersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeImageBuildersRequest * DescribeImageBuildersResponse::request() const
{
    Q_D(const DescribeImageBuildersResponse);
    return static_cast<const DescribeImageBuildersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream DescribeImageBuilders \a response.
 */
void DescribeImageBuildersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeImageBuildersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::DescribeImageBuildersResponsePrivate
 * \brief The DescribeImageBuildersResponsePrivate class provides private implementation for DescribeImageBuildersResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DescribeImageBuildersResponsePrivate object with public implementation \a q.
 */
DescribeImageBuildersResponsePrivate::DescribeImageBuildersResponsePrivate(
    DescribeImageBuildersResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream DescribeImageBuilders response element from \a xml.
 */
void DescribeImageBuildersResponsePrivate::parseDescribeImageBuildersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImageBuildersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
