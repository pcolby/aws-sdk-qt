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

#include "describefindingsresponse.h"
#include "describefindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeFindingsResponse
 * \brief The DescribeFindingsResponse class provides an interace for Inspector DescribeFindings responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeFindings
 */

/*!
 * Constructs a DescribeFindingsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFindingsResponse::DescribeFindingsResponse(
        const DescribeFindingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DescribeFindingsResponsePrivate(this), parent)
{
    setRequest(new DescribeFindingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFindingsRequest * DescribeFindingsResponse::request() const
{
    Q_D(const DescribeFindingsResponse);
    return static_cast<const DescribeFindingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector DescribeFindings \a response.
 */
void DescribeFindingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFindingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::DescribeFindingsResponsePrivate
 * \brief The DescribeFindingsResponsePrivate class provides private implementation for DescribeFindingsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeFindingsResponsePrivate object with public implementation \a q.
 */
DescribeFindingsResponsePrivate::DescribeFindingsResponsePrivate(
    DescribeFindingsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector DescribeFindings response element from \a xml.
 */
void DescribeFindingsResponsePrivate::parseDescribeFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFindingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
