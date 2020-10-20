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

#include "describeparametersresponse.h"
#include "describeparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::DescribeParametersResponse
 * \brief The DescribeParametersResponse class provides an interace for DAX DescribeParameters responses.
 *
 * \inmodule QtAwsDAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::describeParameters
 */

/*!
 * Constructs a DescribeParametersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeParametersResponse::DescribeParametersResponse(
        const DescribeParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new DescribeParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeParametersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeParametersRequest * DescribeParametersResponse::request() const
{
    Q_D(const DescribeParametersResponse);
    return static_cast<const DescribeParametersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DAX DescribeParameters \a response.
 */
void DescribeParametersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DAX::DescribeParametersResponsePrivate
 * \brief The DescribeParametersResponsePrivate class provides private implementation for DescribeParametersResponse.
 * \internal
 *
 * \inmodule QtAwsDAX
 */

/*!
 * Constructs a DescribeParametersResponsePrivate object with public implementation \a q.
 */
DescribeParametersResponsePrivate::DescribeParametersResponsePrivate(
    DescribeParametersResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a DAX DescribeParameters response element from \a xml.
 */
void DescribeParametersResponsePrivate::parseDescribeParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeParametersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DAX
} // namespace QtAws
