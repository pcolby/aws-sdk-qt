// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatechannelclassresponse.h"
#include "updatechannelclassresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateChannelClassResponse
 * \brief The UpdateChannelClassResponse class provides an interace for MediaLive UpdateChannelClass responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateChannelClass
 */

/*!
 * Constructs a UpdateChannelClassResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateChannelClassResponse::UpdateChannelClassResponse(
        const UpdateChannelClassRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new UpdateChannelClassResponsePrivate(this), parent)
{
    setRequest(new UpdateChannelClassRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateChannelClassRequest * UpdateChannelClassResponse::request() const
{
    Q_D(const UpdateChannelClassResponse);
    return static_cast<const UpdateChannelClassRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive UpdateChannelClass \a response.
 */
void UpdateChannelClassResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateChannelClassResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::UpdateChannelClassResponsePrivate
 * \brief The UpdateChannelClassResponsePrivate class provides private implementation for UpdateChannelClassResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateChannelClassResponsePrivate object with public implementation \a q.
 */
UpdateChannelClassResponsePrivate::UpdateChannelClassResponsePrivate(
    UpdateChannelClassResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive UpdateChannelClass response element from \a xml.
 */
void UpdateChannelClassResponsePrivate::parseUpdateChannelClassResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateChannelClassResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
