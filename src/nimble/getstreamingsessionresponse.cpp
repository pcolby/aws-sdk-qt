// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstreamingsessionresponse.h"
#include "getstreamingsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetStreamingSessionResponse
 * \brief The GetStreamingSessionResponse class provides an interace for Nimble GetStreamingSession responses.
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
 * \sa NimbleClient::getStreamingSession
 */

/*!
 * Constructs a GetStreamingSessionResponse object for \a reply to \a request, with parent \a parent.
 */
GetStreamingSessionResponse::GetStreamingSessionResponse(
        const GetStreamingSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new GetStreamingSessionResponsePrivate(this), parent)
{
    setRequest(new GetStreamingSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStreamingSessionRequest * GetStreamingSessionResponse::request() const
{
    Q_D(const GetStreamingSessionResponse);
    return static_cast<const GetStreamingSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble GetStreamingSession \a response.
 */
void GetStreamingSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStreamingSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::GetStreamingSessionResponsePrivate
 * \brief The GetStreamingSessionResponsePrivate class provides private implementation for GetStreamingSessionResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetStreamingSessionResponsePrivate object with public implementation \a q.
 */
GetStreamingSessionResponsePrivate::GetStreamingSessionResponsePrivate(
    GetStreamingSessionResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble GetStreamingSession response element from \a xml.
 */
void GetStreamingSessionResponsePrivate::parseGetStreamingSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStreamingSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
