// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startgeneratedcodejobresponse.h"
#include "startgeneratedcodejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::StartGeneratedCodeJobResponse
 * \brief The StartGeneratedCodeJobResponse class provides an interace for GameSparks StartGeneratedCodeJob responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::startGeneratedCodeJob
 */

/*!
 * Constructs a StartGeneratedCodeJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartGeneratedCodeJobResponse::StartGeneratedCodeJobResponse(
        const StartGeneratedCodeJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new StartGeneratedCodeJobResponsePrivate(this), parent)
{
    setRequest(new StartGeneratedCodeJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartGeneratedCodeJobRequest * StartGeneratedCodeJobResponse::request() const
{
    Q_D(const StartGeneratedCodeJobResponse);
    return static_cast<const StartGeneratedCodeJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks StartGeneratedCodeJob \a response.
 */
void StartGeneratedCodeJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartGeneratedCodeJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::StartGeneratedCodeJobResponsePrivate
 * \brief The StartGeneratedCodeJobResponsePrivate class provides private implementation for StartGeneratedCodeJobResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a StartGeneratedCodeJobResponsePrivate object with public implementation \a q.
 */
StartGeneratedCodeJobResponsePrivate::StartGeneratedCodeJobResponsePrivate(
    StartGeneratedCodeJobResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks StartGeneratedCodeJob response element from \a xml.
 */
void StartGeneratedCodeJobResponsePrivate::parseStartGeneratedCodeJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartGeneratedCodeJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
