// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmultiplexprogramresponse.h"
#include "createmultiplexprogramresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CreateMultiplexProgramResponse
 * \brief The CreateMultiplexProgramResponse class provides an interace for MediaLive CreateMultiplexProgram responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::createMultiplexProgram
 */

/*!
 * Constructs a CreateMultiplexProgramResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMultiplexProgramResponse::CreateMultiplexProgramResponse(
        const CreateMultiplexProgramRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new CreateMultiplexProgramResponsePrivate(this), parent)
{
    setRequest(new CreateMultiplexProgramRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMultiplexProgramRequest * CreateMultiplexProgramResponse::request() const
{
    Q_D(const CreateMultiplexProgramResponse);
    return static_cast<const CreateMultiplexProgramRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive CreateMultiplexProgram \a response.
 */
void CreateMultiplexProgramResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMultiplexProgramResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::CreateMultiplexProgramResponsePrivate
 * \brief The CreateMultiplexProgramResponsePrivate class provides private implementation for CreateMultiplexProgramResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CreateMultiplexProgramResponsePrivate object with public implementation \a q.
 */
CreateMultiplexProgramResponsePrivate::CreateMultiplexProgramResponsePrivate(
    CreateMultiplexProgramResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive CreateMultiplexProgram response element from \a xml.
 */
void CreateMultiplexProgramResponsePrivate::parseCreateMultiplexProgramResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMultiplexProgramResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
