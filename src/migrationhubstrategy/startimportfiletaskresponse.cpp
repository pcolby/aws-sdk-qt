/*
    Copyright 2013-2021 Paul Colby

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

#include "startimportfiletaskresponse.h"
#include "startimportfiletaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::StartImportFileTaskResponse
 * \brief The StartImportFileTaskResponse class provides an interace for MigrationHubStrategy StartImportFileTask responses.
 *
 * \inmodule QtAwsMigrationHubStrategy
 *
 *  <fullname>Migration Hub Strategy Recommendations</fullname>
 * 
 *  This API reference provides descriptions, syntax, and other details about each of the actions and data types for
 *  Migration Hub Strategy Recommendations (Strategy Recommendations). The topic for each action shows the API request
 *  parameters and the response. Alternatively, you can use one of the AWS SDKs to access an API that is tailored to the
 *  programming language or platform that you're using. For more information, see <a
 *  href="http://aws.amazon.com/tools/#SDKs">AWS
 *
 * \sa MigrationHubStrategyClient::startImportFileTask
 */

/*!
 * Constructs a StartImportFileTaskResponse object for \a reply to \a request, with parent \a parent.
 */
StartImportFileTaskResponse::StartImportFileTaskResponse(
        const StartImportFileTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubStrategyResponse(new StartImportFileTaskResponsePrivate(this), parent)
{
    setRequest(new StartImportFileTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartImportFileTaskRequest * StartImportFileTaskResponse::request() const
{
    Q_D(const StartImportFileTaskResponse);
    return static_cast<const StartImportFileTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubStrategy StartImportFileTask \a response.
 */
void StartImportFileTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartImportFileTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubStrategy::StartImportFileTaskResponsePrivate
 * \brief The StartImportFileTaskResponsePrivate class provides private implementation for StartImportFileTaskResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a StartImportFileTaskResponsePrivate object with public implementation \a q.
 */
StartImportFileTaskResponsePrivate::StartImportFileTaskResponsePrivate(
    StartImportFileTaskResponse * const q) : MigrationHubStrategyResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubStrategy StartImportFileTask response element from \a xml.
 */
void StartImportFileTaskResponsePrivate::parseStartImportFileTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartImportFileTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubStrategy
} // namespace QtAws
