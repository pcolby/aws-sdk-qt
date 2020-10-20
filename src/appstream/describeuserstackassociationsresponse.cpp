/*
    Copyright 2013-2020 Paul Colby

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
 *  This is the <i>Amazon AppStream 2.0 API Reference</i>. This documentation provides descriptions and syntax for each of
 *  the actions and data types in AppStream 2.0. AppStream 2.0 is a fully managed, secure application streaming service that
 *  lets you stream desktop applications to users without rewriting applications. AppStream 2.0 manages the AWS resources
 *  that are required to host and run your applications, scales automatically, and provides access to your users on
 * 
 *  demand>
 * 
 *  To learn more about AppStream 2.0, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/appstream2">Amazon AppStream 2.0 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/appstream2">Amazon AppStream 2.0 documentation</a>
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
