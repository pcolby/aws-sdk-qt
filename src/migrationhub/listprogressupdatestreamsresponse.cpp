/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listprogressupdatestreamsresponse.h"
#include "listprogressupdatestreamsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::ListProgressUpdateStreamsResponse
 * \brief The ListProgressUpdateStreamsResponse class provides an interace for MigrationHub ListProgressUpdateStreams responses.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::listProgressUpdateStreams
 */

/*!
 * Constructs a ListProgressUpdateStreamsResponse object for \a reply to \a request, with parent \a parent.
 */
ListProgressUpdateStreamsResponse::ListProgressUpdateStreamsResponse(
        const ListProgressUpdateStreamsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new ListProgressUpdateStreamsResponsePrivate(this), parent)
{
    setRequest(new ListProgressUpdateStreamsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProgressUpdateStreamsRequest * ListProgressUpdateStreamsResponse::request() const
{
    Q_D(const ListProgressUpdateStreamsResponse);
    return static_cast<const ListProgressUpdateStreamsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHub ListProgressUpdateStreams \a response.
 */
void ListProgressUpdateStreamsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProgressUpdateStreamsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHub::ListProgressUpdateStreamsResponsePrivate
 * \brief The ListProgressUpdateStreamsResponsePrivate class provides private implementation for ListProgressUpdateStreamsResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a ListProgressUpdateStreamsResponsePrivate object with public implementation \a q.
 */
ListProgressUpdateStreamsResponsePrivate::ListProgressUpdateStreamsResponsePrivate(
    ListProgressUpdateStreamsResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHub ListProgressUpdateStreams response element from \a xml.
 */
void ListProgressUpdateStreamsResponsePrivate::parseListProgressUpdateStreamsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProgressUpdateStreamsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHub
} // namespace QtAws
