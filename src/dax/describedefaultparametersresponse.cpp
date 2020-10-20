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

#include "describedefaultparametersresponse.h"
#include "describedefaultparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::DescribeDefaultParametersResponse
 * \brief The DescribeDefaultParametersResponse class provides an interace for DAX DescribeDefaultParameters responses.
 *
 * \inmodule QtAwsDAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::describeDefaultParameters
 */

/*!
 * Constructs a DescribeDefaultParametersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDefaultParametersResponse::DescribeDefaultParametersResponse(
        const DescribeDefaultParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new DescribeDefaultParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeDefaultParametersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDefaultParametersRequest * DescribeDefaultParametersResponse::request() const
{
    Q_D(const DescribeDefaultParametersResponse);
    return static_cast<const DescribeDefaultParametersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DAX DescribeDefaultParameters \a response.
 */
void DescribeDefaultParametersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDefaultParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DAX::DescribeDefaultParametersResponsePrivate
 * \brief The DescribeDefaultParametersResponsePrivate class provides private implementation for DescribeDefaultParametersResponse.
 * \internal
 *
 * \inmodule QtAwsDAX
 */

/*!
 * Constructs a DescribeDefaultParametersResponsePrivate object with public implementation \a q.
 */
DescribeDefaultParametersResponsePrivate::DescribeDefaultParametersResponsePrivate(
    DescribeDefaultParametersResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a DAX DescribeDefaultParameters response element from \a xml.
 */
void DescribeDefaultParametersResponsePrivate::parseDescribeDefaultParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDefaultParametersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DAX
} // namespace QtAws
