// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startmultiplexresponse.h"
#include "startmultiplexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::StartMultiplexResponse
 * \brief The StartMultiplexResponse class provides an interace for MediaLive StartMultiplex responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::startMultiplex
 */

/*!
 * Constructs a StartMultiplexResponse object for \a reply to \a request, with parent \a parent.
 */
StartMultiplexResponse::StartMultiplexResponse(
        const StartMultiplexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new StartMultiplexResponsePrivate(this), parent)
{
    setRequest(new StartMultiplexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartMultiplexRequest * StartMultiplexResponse::request() const
{
    Q_D(const StartMultiplexResponse);
    return static_cast<const StartMultiplexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive StartMultiplex \a response.
 */
void StartMultiplexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartMultiplexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::StartMultiplexResponsePrivate
 * \brief The StartMultiplexResponsePrivate class provides private implementation for StartMultiplexResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a StartMultiplexResponsePrivate object with public implementation \a q.
 */
StartMultiplexResponsePrivate::StartMultiplexResponsePrivate(
    StartMultiplexResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive StartMultiplex response element from \a xml.
 */
void StartMultiplexResponsePrivate::parseStartMultiplexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartMultiplexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
