// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestreamingsessionresponse.h"
#include "deletestreamingsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::DeleteStreamingSessionResponse
 * \brief The DeleteStreamingSessionResponse class provides an interace for Nimble DeleteStreamingSession responses.
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
 * \sa NimbleClient::deleteStreamingSession
 */

/*!
 * Constructs a DeleteStreamingSessionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStreamingSessionResponse::DeleteStreamingSessionResponse(
        const DeleteStreamingSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new DeleteStreamingSessionResponsePrivate(this), parent)
{
    setRequest(new DeleteStreamingSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStreamingSessionRequest * DeleteStreamingSessionResponse::request() const
{
    Q_D(const DeleteStreamingSessionResponse);
    return static_cast<const DeleteStreamingSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble DeleteStreamingSession \a response.
 */
void DeleteStreamingSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStreamingSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::DeleteStreamingSessionResponsePrivate
 * \brief The DeleteStreamingSessionResponsePrivate class provides private implementation for DeleteStreamingSessionResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a DeleteStreamingSessionResponsePrivate object with public implementation \a q.
 */
DeleteStreamingSessionResponsePrivate::DeleteStreamingSessionResponsePrivate(
    DeleteStreamingSessionResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble DeleteStreamingSession response element from \a xml.
 */
void DeleteStreamingSessionResponsePrivate::parseDeleteStreamingSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStreamingSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
