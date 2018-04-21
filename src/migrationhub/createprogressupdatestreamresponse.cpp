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

#include "createprogressupdatestreamresponse.h"
#include "createprogressupdatestreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::CreateProgressUpdateStreamResponse
 * \brief The CreateProgressUpdateStreamResponse class provides an interace for MigrationHub CreateProgressUpdateStream responses.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::createProgressUpdateStream
 */

/*!
 * Constructs a CreateProgressUpdateStreamResponse object for \a reply to \a request, with parent \a parent.
 */
CreateProgressUpdateStreamResponse::CreateProgressUpdateStreamResponse(
        const CreateProgressUpdateStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new CreateProgressUpdateStreamResponsePrivate(this), parent)
{
    setRequest(new CreateProgressUpdateStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateProgressUpdateStreamRequest * CreateProgressUpdateStreamResponse::request() const
{
    Q_D(const CreateProgressUpdateStreamResponse);
    return static_cast<const CreateProgressUpdateStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHub CreateProgressUpdateStream \a response.
 */
void CreateProgressUpdateStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateProgressUpdateStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHub::CreateProgressUpdateStreamResponsePrivate
 * \brief The CreateProgressUpdateStreamResponsePrivate class provides private implementation for CreateProgressUpdateStreamResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a CreateProgressUpdateStreamResponsePrivate object with public implementation \a q.
 */
CreateProgressUpdateStreamResponsePrivate::CreateProgressUpdateStreamResponsePrivate(
    CreateProgressUpdateStreamResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHub CreateProgressUpdateStream response element from \a xml.
 */
void CreateProgressUpdateStreamResponsePrivate::parseCreateProgressUpdateStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProgressUpdateStreamResponse"));
    /// @todo
}

} // namespace MigrationHub
} // namespace QtAws
