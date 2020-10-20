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

#include "describeeventtrackerresponse.h"
#include "describeeventtrackerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeEventTrackerResponse
 * \brief The DescribeEventTrackerResponse class provides an interace for Personalize DescribeEventTracker responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeEventTracker
 */

/*!
 * Constructs a DescribeEventTrackerResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEventTrackerResponse::DescribeEventTrackerResponse(
        const DescribeEventTrackerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DescribeEventTrackerResponsePrivate(this), parent)
{
    setRequest(new DescribeEventTrackerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEventTrackerRequest * DescribeEventTrackerResponse::request() const
{
    Q_D(const DescribeEventTrackerResponse);
    return static_cast<const DescribeEventTrackerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DescribeEventTracker \a response.
 */
void DescribeEventTrackerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEventTrackerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DescribeEventTrackerResponsePrivate
 * \brief The DescribeEventTrackerResponsePrivate class provides private implementation for DescribeEventTrackerResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeEventTrackerResponsePrivate object with public implementation \a q.
 */
DescribeEventTrackerResponsePrivate::DescribeEventTrackerResponsePrivate(
    DescribeEventTrackerResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DescribeEventTracker response element from \a xml.
 */
void DescribeEventTrackerResponsePrivate::parseDescribeEventTrackerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventTrackerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
