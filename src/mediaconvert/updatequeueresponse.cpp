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

#include "updatequeueresponse.h"
#include "updatequeueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::UpdateQueueResponse
 * \brief The UpdateQueueResponse class provides an interace for MediaConvert UpdateQueue responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::updateQueue
 */

/*!
 * Constructs a UpdateQueueResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateQueueResponse::UpdateQueueResponse(
        const UpdateQueueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new UpdateQueueResponsePrivate(this), parent)
{
    setRequest(new UpdateQueueRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateQueueRequest * UpdateQueueResponse::request() const
{
    Q_D(const UpdateQueueResponse);
    return static_cast<const UpdateQueueRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert UpdateQueue \a response.
 */
void UpdateQueueResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateQueueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::UpdateQueueResponsePrivate
 * \brief The UpdateQueueResponsePrivate class provides private implementation for UpdateQueueResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a UpdateQueueResponsePrivate object with public implementation \a q.
 */
UpdateQueueResponsePrivate::UpdateQueueResponsePrivate(
    UpdateQueueResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert UpdateQueue response element from \a xml.
 */
void UpdateQueueResponsePrivate::parseUpdateQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateQueueResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws
