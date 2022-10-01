// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstreamingsessionstreamresponse.h"
#include "createstreamingsessionstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::CreateStreamingSessionStreamResponse
 * \brief The CreateStreamingSessionStreamResponse class provides an interace for Nimble CreateStreamingSessionStream responses.
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
 * \sa NimbleClient::createStreamingSessionStream
 */

/*!
 * Constructs a CreateStreamingSessionStreamResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStreamingSessionStreamResponse::CreateStreamingSessionStreamResponse(
        const CreateStreamingSessionStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new CreateStreamingSessionStreamResponsePrivate(this), parent)
{
    setRequest(new CreateStreamingSessionStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStreamingSessionStreamRequest * CreateStreamingSessionStreamResponse::request() const
{
    Q_D(const CreateStreamingSessionStreamResponse);
    return static_cast<const CreateStreamingSessionStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble CreateStreamingSessionStream \a response.
 */
void CreateStreamingSessionStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStreamingSessionStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::CreateStreamingSessionStreamResponsePrivate
 * \brief The CreateStreamingSessionStreamResponsePrivate class provides private implementation for CreateStreamingSessionStreamResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a CreateStreamingSessionStreamResponsePrivate object with public implementation \a q.
 */
CreateStreamingSessionStreamResponsePrivate::CreateStreamingSessionStreamResponsePrivate(
    CreateStreamingSessionStreamResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble CreateStreamingSessionStream response element from \a xml.
 */
void CreateStreamingSessionStreamResponsePrivate::parseCreateStreamingSessionStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStreamingSessionStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
