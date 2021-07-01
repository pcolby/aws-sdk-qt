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

#include "describefilterresponse.h"
#include "describefilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeFilterResponse
 * \brief The DescribeFilterResponse class provides an interace for Personalize DescribeFilter responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeFilter
 */

/*!
 * Constructs a DescribeFilterResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFilterResponse::DescribeFilterResponse(
        const DescribeFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DescribeFilterResponsePrivate(this), parent)
{
    setRequest(new DescribeFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFilterRequest * DescribeFilterResponse::request() const
{
    Q_D(const DescribeFilterResponse);
    return static_cast<const DescribeFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DescribeFilter \a response.
 */
void DescribeFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DescribeFilterResponsePrivate
 * \brief The DescribeFilterResponsePrivate class provides private implementation for DescribeFilterResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeFilterResponsePrivate object with public implementation \a q.
 */
DescribeFilterResponsePrivate::DescribeFilterResponsePrivate(
    DescribeFilterResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DescribeFilter response element from \a xml.
 */
void DescribeFilterResponsePrivate::parseDescribeFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
