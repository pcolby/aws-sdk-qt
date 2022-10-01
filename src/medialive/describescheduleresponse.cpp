// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
