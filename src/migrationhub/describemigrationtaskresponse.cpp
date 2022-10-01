// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  resource-specific migration tool by providing a programmatic interface to Migration
 * 
 *  Hub>
 * 
 *  Remember that you must set your AWS Migration Hub home region before you call any of these APIs, or a
 *  <code>HomeRegionNotSetException</code> error will be returned. Also, you must make the API calls while in your home
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
    //Q_D(DescribeMigrationTaskResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHub
} // namespace QtAws
