// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopdatasourcesyncjobresponse.h"
#include "stopdatasourcesyncjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::StopDataSourceSyncJobResponse
 * \brief The StopDataSourceSyncJobResponse class provides an interace for Kendra StopDataSourceSyncJob responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::stopDataSourceSyncJob
 */

/*!
 * Constructs a StopDataSourceSyncJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopDataSourceSyncJobResponse::StopDataSourceSyncJobResponse(
        const StopDataSourceSyncJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new StopDataSourceSyncJobResponsePrivate(this), parent)
{
    setRequest(new StopDataSourceSyncJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopDataSourceSyncJobRequest * StopDataSourceSyncJobResponse::request() const
{
    Q_D(const StopDataSourceSyncJobResponse);
    return static_cast<const StopDataSourceSyncJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra StopDataSourceSyncJob \a response.
 */
void StopDataSourceSyncJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopDataSourceSyncJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::StopDataSourceSyncJobResponsePrivate
 * \brief The StopDataSourceSyncJobResponsePrivate class provides private implementation for StopDataSourceSyncJobResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a StopDataSourceSyncJobResponsePrivate object with public implementation \a q.
 */
StopDataSourceSyncJobResponsePrivate::StopDataSourceSyncJobResponsePrivate(
    StopDataSourceSyncJobResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra StopDataSourceSyncJob response element from \a xml.
 */
void StopDataSourceSyncJobResponsePrivate::parseStopDataSourceSyncJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopDataSourceSyncJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
