// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprogressupdatestreamresponse.h"
#include "deleteprogressupdatestreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::DeleteProgressUpdateStreamResponse
 * \brief The DeleteProgressUpdateStreamResponse class provides an interace for MigrationHub DeleteProgressUpdateStream responses.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration
 * 
 *  Hub>
 * 
 *  Remember that you must set your AWS Migration Hub home region before you call any of these APIs, or a
 *  <code>HomeRegionNotSetException</code> error will be returned. Also, you must make the API calls while in your home
 *
 * \sa MigrationHubClient::deleteProgressUpdateStream
 */

/*!
 * Constructs a DeleteProgressUpdateStreamResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteProgressUpdateStreamResponse::DeleteProgressUpdateStreamResponse(
        const DeleteProgressUpdateStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new DeleteProgressUpdateStreamResponsePrivate(this), parent)
{
    setRequest(new DeleteProgressUpdateStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteProgressUpdateStreamRequest * DeleteProgressUpdateStreamResponse::request() const
{
    Q_D(const DeleteProgressUpdateStreamResponse);
    return static_cast<const DeleteProgressUpdateStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHub DeleteProgressUpdateStream \a response.
 */
void DeleteProgressUpdateStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteProgressUpdateStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHub::DeleteProgressUpdateStreamResponsePrivate
 * \brief The DeleteProgressUpdateStreamResponsePrivate class provides private implementation for DeleteProgressUpdateStreamResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a DeleteProgressUpdateStreamResponsePrivate object with public implementation \a q.
 */
DeleteProgressUpdateStreamResponsePrivate::DeleteProgressUpdateStreamResponsePrivate(
    DeleteProgressUpdateStreamResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHub DeleteProgressUpdateStream response element from \a xml.
 */
void DeleteProgressUpdateStreamResponsePrivate::parseDeleteProgressUpdateStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProgressUpdateStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHub
} // namespace QtAws
