// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapplicationstatesresponse.h"
#include "listapplicationstatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::ListApplicationStatesResponse
 * \brief The ListApplicationStatesResponse class provides an interace for MigrationHub ListApplicationStates responses.
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
 * \sa MigrationHubClient::listApplicationStates
 */

/*!
 * Constructs a ListApplicationStatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListApplicationStatesResponse::ListApplicationStatesResponse(
        const ListApplicationStatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new ListApplicationStatesResponsePrivate(this), parent)
{
    setRequest(new ListApplicationStatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListApplicationStatesRequest * ListApplicationStatesResponse::request() const
{
    Q_D(const ListApplicationStatesResponse);
    return static_cast<const ListApplicationStatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHub ListApplicationStates \a response.
 */
void ListApplicationStatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListApplicationStatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHub::ListApplicationStatesResponsePrivate
 * \brief The ListApplicationStatesResponsePrivate class provides private implementation for ListApplicationStatesResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a ListApplicationStatesResponsePrivate object with public implementation \a q.
 */
ListApplicationStatesResponsePrivate::ListApplicationStatesResponsePrivate(
    ListApplicationStatesResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHub ListApplicationStates response element from \a xml.
 */
void ListApplicationStatesResponsePrivate::parseListApplicationStatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListApplicationStatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHub
} // namespace QtAws
