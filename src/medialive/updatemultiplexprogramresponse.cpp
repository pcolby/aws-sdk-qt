// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemultiplexprogramresponse.h"
#include "updatemultiplexprogramresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateMultiplexProgramResponse
 * \brief The UpdateMultiplexProgramResponse class provides an interace for MediaLive UpdateMultiplexProgram responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateMultiplexProgram
 */

/*!
 * Constructs a UpdateMultiplexProgramResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMultiplexProgramResponse::UpdateMultiplexProgramResponse(
        const UpdateMultiplexProgramRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new UpdateMultiplexProgramResponsePrivate(this), parent)
{
    setRequest(new UpdateMultiplexProgramRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMultiplexProgramRequest * UpdateMultiplexProgramResponse::request() const
{
    Q_D(const UpdateMultiplexProgramResponse);
    return static_cast<const UpdateMultiplexProgramRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive UpdateMultiplexProgram \a response.
 */
void UpdateMultiplexProgramResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMultiplexProgramResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::UpdateMultiplexProgramResponsePrivate
 * \brief The UpdateMultiplexProgramResponsePrivate class provides private implementation for UpdateMultiplexProgramResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateMultiplexProgramResponsePrivate object with public implementation \a q.
 */
UpdateMultiplexProgramResponsePrivate::UpdateMultiplexProgramResponsePrivate(
    UpdateMultiplexProgramResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive UpdateMultiplexProgram response element from \a xml.
 */
void UpdateMultiplexProgramResponsePrivate::parseUpdateMultiplexProgramResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMultiplexProgramResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
