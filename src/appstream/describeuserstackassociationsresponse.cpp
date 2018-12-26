/*
    Copyright 2013-2018 Paul Colby

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

#include "describeuserstackassociationsresponse.h"
#include "describeuserstackassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DescribeUserStackAssociationsResponse
 * \brief The DescribeUserStackAssociationsResponse class provides an interace for AppStream DescribeUserStackAssociations responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::describeUserStackAssociations
 */

/*!
 * Constructs a DescribeUserStackAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeUserStackAssociationsResponse::DescribeUserStackAssociationsResponse(
        const DescribeUserStackAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DescribeUserStackAssociationsResponsePrivate(this), parent)
{
    setRequest(new DescribeUserStackAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeUserStackAssociationsRequest * DescribeUserStackAssociationsResponse::request() const
{
    Q_D(const DescribeUserStackAssociationsResponse);
    return static_cast<const DescribeUserStackAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream DescribeUserStackAssociations \a response.
 */
void DescribeUserStackAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeUserStackAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::DescribeUserStackAssociationsResponsePrivate
 * \brief The DescribeUserStackAssociationsResponsePrivate class provides private implementation for DescribeUserStackAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DescribeUserStackAssociationsResponsePrivate object with public implementation \a q.
 */
DescribeUserStackAssociationsResponsePrivate::DescribeUserStackAssociationsResponsePrivate(
    DescribeUserStackAssociationsResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream DescribeUserStackAssociations response element from \a xml.
 */
void DescribeUserStackAssociationsResponsePrivate::parseDescribeUserStackAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserStackAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
