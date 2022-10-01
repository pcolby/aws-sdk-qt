// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstreamingsessionresponse.h"
#include "createstreamingsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::CreateStreamingSessionResponse
 * \brief The CreateStreamingSessionResponse class provides an interace for Nimble CreateStreamingSession responses.
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
 * \sa NimbleClient::createStreamingSession
 */

/*!
 * Constructs a CreateStreamingSessionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStreamingSessionResponse::CreateStreamingSessionResponse(
        const CreateStreamingSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new CreateStreamingSessionResponsePrivate(this), parent)
{
    setRequest(new CreateStreamingSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStreamingSessionRequest * CreateStreamingSessionResponse::request() const
{
    Q_D(const CreateStreamingSessionResponse);
    return static_cast<const CreateStreamingSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble CreateStreamingSession \a response.
 */
void CreateStreamingSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStreamingSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::CreateStreamingSessionResponsePrivate
 * \brief The CreateStreamingSessionResponsePrivate class provides private implementation for CreateStreamingSessionResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a CreateStreamingSessionResponsePrivate object with public implementation \a q.
 */
CreateStreamingSessionResponsePrivate::CreateStreamingSessionResponsePrivate(
    CreateStreamingSessionResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble CreateStreamingSession response element from \a xml.
 */
void CreateStreamingSessionResponsePrivate::parseCreateStreamingSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStreamingSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
