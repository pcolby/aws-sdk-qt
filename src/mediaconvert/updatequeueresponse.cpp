// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
