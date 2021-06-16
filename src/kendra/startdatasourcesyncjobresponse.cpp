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

#include "startdatasourcesyncjobresponse.h"
#include "startdatasourcesyncjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::StartDataSourceSyncJobResponse
 * \brief The StartDataSourceSyncJobResponse class provides an interace for kendra StartDataSourceSyncJob responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::startDataSourceSyncJob
 */

/*!
 * Constructs a StartDataSourceSyncJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartDataSourceSyncJobResponse::StartDataSourceSyncJobResponse(
        const StartDataSourceSyncJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new StartDataSourceSyncJobResponsePrivate(this), parent)
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
 * Parses a successful kendra StartDataSourceSyncJob \a response.
 */
void StartDataSourceSyncJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDataSourceSyncJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::StartDataSourceSyncJobResponsePrivate
 * \brief The StartDataSourceSyncJobResponsePrivate class provides private implementation for StartDataSourceSyncJobResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a StartDataSourceSyncJobResponsePrivate object with public implementation \a q.
 */
StartDataSourceSyncJobResponsePrivate::StartDataSourceSyncJobResponsePrivate(
    StartDataSourceSyncJobResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra StartDataSourceSyncJob response element from \a xml.
 */
void StartDataSourceSyncJobResponsePrivate::parseStartDataSourceSyncJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDataSourceSyncJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws
