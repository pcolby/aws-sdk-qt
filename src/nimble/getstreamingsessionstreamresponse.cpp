// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstreamingsessionstreamresponse.h"
#include "getstreamingsessionstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetStreamingSessionStreamResponse
 * \brief The GetStreamingSessionStreamResponse class provides an interace for Nimble GetStreamingSessionStream responses.
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
 * \sa NimbleClient::getStreamingSessionStream
 */

/*!
 * Constructs a GetStreamingSessionStreamResponse object for \a reply to \a request, with parent \a parent.
 */
GetStreamingSessionStreamResponse::GetStreamingSessionStreamResponse(
        const GetStreamingSessionStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new GetStreamingSessionStreamResponsePrivate(this), parent)
{
    setRequest(new GetStreamingSessionStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStreamingSessionStreamRequest * GetStreamingSessionStreamResponse::request() const
{
    Q_D(const GetStreamingSessionStreamResponse);
    return static_cast<const GetStreamingSessionStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble GetStreamingSessionStream \a response.
 */
void GetStreamingSessionStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStreamingSessionStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::GetStreamingSessionStreamResponsePrivate
 * \brief The GetStreamingSessionStreamResponsePrivate class provides private implementation for GetStreamingSessionStreamResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetStreamingSessionStreamResponsePrivate object with public implementation \a q.
 */
GetStreamingSessionStreamResponsePrivate::GetStreamingSessionStreamResponsePrivate(
    GetStreamingSessionStreamResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble GetStreamingSessionStream response element from \a xml.
 */
void GetStreamingSessionStreamResponsePrivate::parseGetStreamingSessionStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStreamingSessionStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
