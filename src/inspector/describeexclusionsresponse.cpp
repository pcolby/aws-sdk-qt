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

#include "describeexclusionsresponse.h"
#include "describeexclusionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeExclusionsResponse
 * \brief The DescribeExclusionsResponse class provides an interace for Inspector DescribeExclusions responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeExclusions
 */

/*!
 * Constructs a DescribeExclusionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeExclusionsResponse::DescribeExclusionsResponse(
        const DescribeExclusionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DescribeExclusionsResponsePrivate(this), parent)
{
    setRequest(new DescribeExclusionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeExclusionsRequest * DescribeExclusionsResponse::request() const
{
    Q_D(const DescribeExclusionsResponse);
    return static_cast<const DescribeExclusionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector DescribeExclusions \a response.
 */
void DescribeExclusionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeExclusionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::DescribeExclusionsResponsePrivate
 * \brief The DescribeExclusionsResponsePrivate class provides private implementation for DescribeExclusionsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeExclusionsResponsePrivate object with public implementation \a q.
 */
DescribeExclusionsResponsePrivate::DescribeExclusionsResponsePrivate(
    DescribeExclusionsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector DescribeExclusions response element from \a xml.
 */
void DescribeExclusionsResponsePrivate::parseDescribeExclusionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeExclusionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
