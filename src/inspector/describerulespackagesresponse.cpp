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

#include "describerulespackagesresponse.h"
#include "describerulespackagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeRulesPackagesResponse
 * \brief The DescribeRulesPackagesResponse class provides an interace for Inspector DescribeRulesPackages responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeRulesPackages
 */

/*!
 * Constructs a DescribeRulesPackagesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRulesPackagesResponse::DescribeRulesPackagesResponse(
        const DescribeRulesPackagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DescribeRulesPackagesResponsePrivate(this), parent)
{
    setRequest(new DescribeRulesPackagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRulesPackagesRequest * DescribeRulesPackagesResponse::request() const
{
    Q_D(const DescribeRulesPackagesResponse);
    return static_cast<const DescribeRulesPackagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector DescribeRulesPackages \a response.
 */
void DescribeRulesPackagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRulesPackagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::DescribeRulesPackagesResponsePrivate
 * \brief The DescribeRulesPackagesResponsePrivate class provides private implementation for DescribeRulesPackagesResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeRulesPackagesResponsePrivate object with public implementation \a q.
 */
DescribeRulesPackagesResponsePrivate::DescribeRulesPackagesResponsePrivate(
    DescribeRulesPackagesResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector DescribeRulesPackages response element from \a xml.
 */
void DescribeRulesPackagesResponsePrivate::parseDescribeRulesPackagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRulesPackagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
