// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststreamingsessionsresponse.h"
#include "liststreamingsessionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::ListStreamingSessionsResponse
 * \brief The ListStreamingSessionsResponse class provides an interace for Nimble ListStreamingSessions responses.
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
 * \sa NimbleClient::listStreamingSessions
 */

/*!
 * Constructs a ListStreamingSessionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStreamingSessionsResponse::ListStreamingSessionsResponse(
        const ListStreamingSessionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new ListStreamingSessionsResponsePrivate(this), parent)
{
    setRequest(new ListStreamingSessionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStreamingSessionsRequest * ListStreamingSessionsResponse::request() const
{
    Q_D(const ListStreamingSessionsResponse);
    return static_cast<const ListStreamingSessionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble ListStreamingSessions \a response.
 */
void ListStreamingSessionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStreamingSessionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::ListStreamingSessionsResponsePrivate
 * \brief The ListStreamingSessionsResponsePrivate class provides private implementation for ListStreamingSessionsResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a ListStreamingSessionsResponsePrivate object with public implementation \a q.
 */
ListStreamingSessionsResponsePrivate::ListStreamingSessionsResponsePrivate(
    ListStreamingSessionsResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble ListStreamingSessions response element from \a xml.
 */
void ListStreamingSessionsResponsePrivate::parseListStreamingSessionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStreamingSessionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
