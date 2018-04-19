/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
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
    Q_D(DeleteProgressUpdateStreamResponse);
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
    /// @todo
}

} // namespace MigrationHub
} // namespace QtAws
