// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcreatedartifactsresponse.h"
#include "listcreatedartifactsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::ListCreatedArtifactsResponse
 * \brief The ListCreatedArtifactsResponse class provides an interace for MigrationHub ListCreatedArtifacts responses.
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
 * \sa MigrationHubClient::listCreatedArtifacts
 */

/*!
 * Constructs a ListCreatedArtifactsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCreatedArtifactsResponse::ListCreatedArtifactsResponse(
        const ListCreatedArtifactsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new ListCreatedArtifactsResponsePrivate(this), parent)
{
    setRequest(new ListCreatedArtifactsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCreatedArtifactsRequest * ListCreatedArtifactsResponse::request() const
{
    Q_D(const ListCreatedArtifactsResponse);
    return static_cast<const ListCreatedArtifactsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHub ListCreatedArtifacts \a response.
 */
void ListCreatedArtifactsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCreatedArtifactsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHub::ListCreatedArtifactsResponsePrivate
 * \brief The ListCreatedArtifactsResponsePrivate class provides private implementation for ListCreatedArtifactsResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a ListCreatedArtifactsResponsePrivate object with public implementation \a q.
 */
ListCreatedArtifactsResponsePrivate::ListCreatedArtifactsResponsePrivate(
    ListCreatedArtifactsResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHub ListCreatedArtifacts response element from \a xml.
 */
void ListCreatedArtifactsResponsePrivate::parseListCreatedArtifactsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCreatedArtifactsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHub
} // namespace QtAws
