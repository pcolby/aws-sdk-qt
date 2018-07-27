/*
    Copyright 2013-2018 Paul Colby

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

#include "importmigrationtaskresponse.h"
#include "importmigrationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::ImportMigrationTaskResponse
 * \brief The ImportMigrationTaskResponse class provides an interace for MigrationHub ImportMigrationTask responses.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::importMigrationTask
 */

/*!
 * Constructs a ImportMigrationTaskResponse object for \a reply to \a request, with parent \a parent.
 */
ImportMigrationTaskResponse::ImportMigrationTaskResponse(
        const ImportMigrationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new ImportMigrationTaskResponsePrivate(this), parent)
{
    setRequest(new ImportMigrationTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportMigrationTaskRequest * ImportMigrationTaskResponse::request() const
{
    Q_D(const ImportMigrationTaskResponse);
    return static_cast<const ImportMigrationTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHub ImportMigrationTask \a response.
 */
void ImportMigrationTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportMigrationTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHub::ImportMigrationTaskResponsePrivate
 * \brief The ImportMigrationTaskResponsePrivate class provides private implementation for ImportMigrationTaskResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a ImportMigrationTaskResponsePrivate object with public implementation \a q.
 */
ImportMigrationTaskResponsePrivate::ImportMigrationTaskResponsePrivate(
    ImportMigrationTaskResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHub ImportMigrationTask response element from \a xml.
 */
void ImportMigrationTaskResponsePrivate::parseImportMigrationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportMigrationTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHub
} // namespace QtAws
