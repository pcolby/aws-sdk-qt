// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopstreamingsessionresponse.h"
#include "stopstreamingsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::StopStreamingSessionResponse
 * \brief The StopStreamingSessionResponse class provides an interace for Nimble StopStreamingSession responses.
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
 * \sa NimbleClient::stopStreamingSession
 */

/*!
 * Constructs a StopStreamingSessionResponse object for \a reply to \a request, with parent \a parent.
 */
StopStreamingSessionResponse::StopStreamingSessionResponse(
        const StopStreamingSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new StopStreamingSessionResponsePrivate(this), parent)
{
    setRequest(new StopStreamingSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopStreamingSessionRequest * StopStreamingSessionResponse::request() const
{
    Q_D(const StopStreamingSessionResponse);
    return static_cast<const StopStreamingSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble StopStreamingSession \a response.
 */
void StopStreamingSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopStreamingSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::StopStreamingSessionResponsePrivate
 * \brief The StopStreamingSessionResponsePrivate class provides private implementation for StopStreamingSessionResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a StopStreamingSessionResponsePrivate object with public implementation \a q.
 */
StopStreamingSessionResponsePrivate::StopStreamingSessionResponsePrivate(
    StopStreamingSessionResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble StopStreamingSession response element from \a xml.
 */
void StopStreamingSessionResponsePrivate::parseStopStreamingSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopStreamingSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
