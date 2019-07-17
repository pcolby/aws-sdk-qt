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

#include "describescheduleresponse.h"
#include "describescheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeScheduleResponse
 * \brief The DescribeScheduleResponse class provides an interace for MediaLive DescribeSchedule responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeSchedule
 */

/*!
 * Constructs a DescribeScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeScheduleResponse::DescribeScheduleResponse(
        const DescribeScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DescribeScheduleResponsePrivate(this), parent)
{
    setRequest(new DescribeScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeScheduleRequest * DescribeScheduleResponse::request() const
{
    Q_D(const DescribeScheduleResponse);
    return static_cast<const DescribeScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive DescribeSchedule \a response.
 */
void DescribeScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DescribeScheduleResponsePrivate
 * \brief The DescribeScheduleResponsePrivate class provides private implementation for DescribeScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeScheduleResponsePrivate object with public implementation \a q.
 */
DescribeScheduleResponsePrivate::DescribeScheduleResponsePrivate(
    DescribeScheduleResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DescribeSchedule response element from \a xml.
 */
void DescribeScheduleResponsePrivate::parseDescribeScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
