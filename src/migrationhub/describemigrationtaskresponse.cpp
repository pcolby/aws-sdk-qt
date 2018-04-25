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

#include "describemigrationtaskresponse.h"
#include "describemigrationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::DescribeMigrationTaskResponse
 * \brief The DescribeMigrationTaskResponse class provides an interace for MigrationHub DescribeMigrationTask responses.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::describeMigrationTask
 */

/*!
 * Constructs a DescribeMigrationTaskResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeMigrationTaskResponse::DescribeMigrationTaskResponse(
        const DescribeMigrationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new DescribeMigrationTaskResponsePrivate(this), parent)
{
    setRequest(new DescribeMigrationTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeMigrationTaskRequest * DescribeMigrationTaskResponse::request() const
{
    Q_D(const DescribeMigrationTaskResponse);
    return static_cast<const DescribeMigrationTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHub DescribeMigrationTask \a response.
 */
void DescribeMigrationTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeMigrationTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHub::DescribeMigrationTaskResponsePrivate
 * \brief The DescribeMigrationTaskResponsePrivate class provides private implementation for DescribeMigrationTaskResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a DescribeMigrationTaskResponsePrivate object with public implementation \a q.
 */
DescribeMigrationTaskResponsePrivate::DescribeMigrationTaskResponsePrivate(
    DescribeMigrationTaskResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHub DescribeMigrationTask response element from \a xml.
 */
void DescribeMigrationTaskResponsePrivate::parseDescribeMigrationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMigrationTaskResponse"));
    /// @todo
}

} // namespace MigrationHub
} // namespace QtAws
