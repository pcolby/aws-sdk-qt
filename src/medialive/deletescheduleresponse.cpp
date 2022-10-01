// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletescheduleresponse.h"
#include "deletescheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteScheduleResponse
 * \brief The DeleteScheduleResponse class provides an interace for MediaLive DeleteSchedule responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::deleteSchedule
 */

/*!
 * Constructs a DeleteScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteScheduleResponse::DeleteScheduleResponse(
        const DeleteScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DeleteScheduleResponsePrivate(this), parent)
{
    setRequest(new DeleteScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteScheduleRequest * DeleteScheduleResponse::request() const
{
    Q_D(const DeleteScheduleResponse);
    return static_cast<const DeleteScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive DeleteSchedule \a response.
 */
void DeleteScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DeleteScheduleResponsePrivate
 * \brief The DeleteScheduleResponsePrivate class provides private implementation for DeleteScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DeleteScheduleResponsePrivate object with public implementation \a q.
 */
DeleteScheduleResponsePrivate::DeleteScheduleResponsePrivate(
    DeleteScheduleResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DeleteSchedule response element from \a xml.
 */
void DeleteScheduleResponsePrivate::parseDeleteScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
