// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdatasourcesyncjobresponse.h"
#include "startdatasourcesyncjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::StartDataSourceSyncJobResponse
 * \brief The StartDataSourceSyncJobResponse class provides an interace for Kendra StartDataSourceSyncJob responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::startDataSourceSyncJob
 */

/*!
 * Constructs a StartDataSourceSyncJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartDataSourceSyncJobResponse::StartDataSourceSyncJobResponse(
        const StartDataSourceSyncJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new StartDataSourceSyncJobResponsePrivate(this), parent)
{
    setRequest(new StartDataSourceSyncJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDataSourceSyncJobRequest * StartDataSourceSyncJobResponse::request() const
{
    Q_D(const StartDataSourceSyncJobResponse);
    return static_cast<const StartDataSourceSyncJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra StartDataSourceSyncJob \a response.
 */
void StartDataSourceSyncJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDataSourceSyncJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::StartDataSourceSyncJobResponsePrivate
 * \brief The StartDataSourceSyncJobResponsePrivate class provides private implementation for StartDataSourceSyncJobResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a StartDataSourceSyncJobResponsePrivate object with public implementation \a q.
 */
StartDataSourceSyncJobResponsePrivate::StartDataSourceSyncJobResponsePrivate(
    StartDataSourceSyncJobResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra StartDataSourceSyncJob response element from \a xml.
 */
void StartDataSourceSyncJobResponsePrivate::parseStartDataSourceSyncJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDataSourceSyncJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
