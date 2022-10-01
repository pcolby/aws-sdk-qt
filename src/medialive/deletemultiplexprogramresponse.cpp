// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemultiplexprogramresponse.h"
#include "deletemultiplexprogramresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteMultiplexProgramResponse
 * \brief The DeleteMultiplexProgramResponse class provides an interace for MediaLive DeleteMultiplexProgram responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::deleteMultiplexProgram
 */

/*!
 * Constructs a DeleteMultiplexProgramResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMultiplexProgramResponse::DeleteMultiplexProgramResponse(
        const DeleteMultiplexProgramRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DeleteMultiplexProgramResponsePrivate(this), parent)
{
    setRequest(new DeleteMultiplexProgramRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMultiplexProgramRequest * DeleteMultiplexProgramResponse::request() const
{
    Q_D(const DeleteMultiplexProgramResponse);
    return static_cast<const DeleteMultiplexProgramRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive DeleteMultiplexProgram \a response.
 */
void DeleteMultiplexProgramResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMultiplexProgramResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DeleteMultiplexProgramResponsePrivate
 * \brief The DeleteMultiplexProgramResponsePrivate class provides private implementation for DeleteMultiplexProgramResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DeleteMultiplexProgramResponsePrivate object with public implementation \a q.
 */
DeleteMultiplexProgramResponsePrivate::DeleteMultiplexProgramResponsePrivate(
    DeleteMultiplexProgramResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DeleteMultiplexProgram response element from \a xml.
 */
void DeleteMultiplexProgramResponsePrivate::parseDeleteMultiplexProgramResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMultiplexProgramResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
