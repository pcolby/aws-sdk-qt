// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesignalingchannelresponse.h"
#include "deletesignalingchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::DeleteSignalingChannelResponse
 * \brief The DeleteSignalingChannelResponse class provides an interace for KinesisVideo DeleteSignalingChannel responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::deleteSignalingChannel
 */

/*!
 * Constructs a DeleteSignalingChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSignalingChannelResponse::DeleteSignalingChannelResponse(
        const DeleteSignalingChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new DeleteSignalingChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteSignalingChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSignalingChannelRequest * DeleteSignalingChannelResponse::request() const
{
    Q_D(const DeleteSignalingChannelResponse);
    return static_cast<const DeleteSignalingChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo DeleteSignalingChannel \a response.
 */
void DeleteSignalingChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSignalingChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::DeleteSignalingChannelResponsePrivate
 * \brief The DeleteSignalingChannelResponsePrivate class provides private implementation for DeleteSignalingChannelResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a DeleteSignalingChannelResponsePrivate object with public implementation \a q.
 */
DeleteSignalingChannelResponsePrivate::DeleteSignalingChannelResponsePrivate(
    DeleteSignalingChannelResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo DeleteSignalingChannel response element from \a xml.
 */
void DeleteSignalingChannelResponsePrivate::parseDeleteSignalingChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSignalingChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws
