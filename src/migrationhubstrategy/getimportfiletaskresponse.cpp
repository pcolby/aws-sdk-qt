// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getimportfiletaskresponse.h"
#include "getimportfiletaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::GetImportFileTaskResponse
 * \brief The GetImportFileTaskResponse class provides an interace for MigrationHubStrategy GetImportFileTask responses.
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
 * \sa MigrationHubStrategyClient::getImportFileTask
 */

/*!
 * Constructs a GetImportFileTaskResponse object for \a reply to \a request, with parent \a parent.
 */
GetImportFileTaskResponse::GetImportFileTaskResponse(
        const GetImportFileTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubStrategyResponse(new GetImportFileTaskResponsePrivate(this), parent)
{
    setRequest(new GetImportFileTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetImportFileTaskRequest * GetImportFileTaskResponse::request() const
{
    Q_D(const GetImportFileTaskResponse);
    return static_cast<const GetImportFileTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubStrategy GetImportFileTask \a response.
 */
void GetImportFileTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetImportFileTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubStrategy::GetImportFileTaskResponsePrivate
 * \brief The GetImportFileTaskResponsePrivate class provides private implementation for GetImportFileTaskResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a GetImportFileTaskResponsePrivate object with public implementation \a q.
 */
GetImportFileTaskResponsePrivate::GetImportFileTaskResponsePrivate(
    GetImportFileTaskResponse * const q) : MigrationHubStrategyResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubStrategy GetImportFileTask response element from \a xml.
 */
void GetImportFileTaskResponsePrivate::parseGetImportFileTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImportFileTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubStrategy
} // namespace QtAws
