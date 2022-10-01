// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  resource-specific migration tool by providing a programmatic interface to Migration
 * 
 *  Hub>
 * 
 *  Remember that you must set your AWS Migration Hub home region before you call any of these APIs, or a
 *  <code>HomeRegionNotSetException</code> error will be returned. Also, you must make the API calls while in your home
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
