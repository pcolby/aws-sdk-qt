// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startstreamingsessionresponse.h"
#include "startstreamingsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::StartStreamingSessionResponse
 * \brief The StartStreamingSessionResponse class provides an interace for Nimble StartStreamingSession responses.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::startStreamingSession
 */

/*!
 * Constructs a StartStreamingSessionResponse object for \a reply to \a request, with parent \a parent.
 */
StartStreamingSessionResponse::StartStreamingSessionResponse(
        const StartStreamingSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new StartStreamingSessionResponsePrivate(this), parent)
{
    setRequest(new StartStreamingSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartStreamingSessionRequest * StartStreamingSessionResponse::request() const
{
    Q_D(const StartStreamingSessionResponse);
    return static_cast<const StartStreamingSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble StartStreamingSession \a response.
 */
void StartStreamingSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartStreamingSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::StartStreamingSessionResponsePrivate
 * \brief The StartStreamingSessionResponsePrivate class provides private implementation for StartStreamingSessionResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a StartStreamingSessionResponsePrivate object with public implementation \a q.
 */
StartStreamingSessionResponsePrivate::StartStreamingSessionResponsePrivate(
    StartStreamingSessionResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble StartStreamingSession response element from \a xml.
 */
void StartStreamingSessionResponsePrivate::parseStartStreamingSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartStreamingSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
