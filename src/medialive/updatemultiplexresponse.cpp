// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemultiplexresponse.h"
#include "updatemultiplexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateMultiplexResponse
 * \brief The UpdateMultiplexResponse class provides an interace for MediaLive UpdateMultiplex responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateMultiplex
 */

/*!
 * Constructs a UpdateMultiplexResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMultiplexResponse::UpdateMultiplexResponse(
        const UpdateMultiplexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new UpdateMultiplexResponsePrivate(this), parent)
{
    setRequest(new UpdateMultiplexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMultiplexRequest * UpdateMultiplexResponse::request() const
{
    Q_D(const UpdateMultiplexResponse);
    return static_cast<const UpdateMultiplexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive UpdateMultiplex \a response.
 */
void UpdateMultiplexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMultiplexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::UpdateMultiplexResponsePrivate
 * \brief The UpdateMultiplexResponsePrivate class provides private implementation for UpdateMultiplexResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateMultiplexResponsePrivate object with public implementation \a q.
 */
UpdateMultiplexResponsePrivate::UpdateMultiplexResponsePrivate(
    UpdateMultiplexResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive UpdateMultiplex response element from \a xml.
 */
void UpdateMultiplexResponsePrivate::parseUpdateMultiplexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMultiplexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
