// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putresourceattributesresponse.h"
#include "putresourceattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::PutResourceAttributesResponse
 * \brief The PutResourceAttributesResponse class provides an interace for MigrationHub PutResourceAttributes responses.
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
 * \sa MigrationHubClient::putResourceAttributes
 */

/*!
 * Constructs a PutResourceAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
PutResourceAttributesResponse::PutResourceAttributesResponse(
        const PutResourceAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new PutResourceAttributesResponsePrivate(this), parent)
{
    setRequest(new PutResourceAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutResourceAttributesRequest * PutResourceAttributesResponse::request() const
{
    Q_D(const PutResourceAttributesResponse);
    return static_cast<const PutResourceAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHub PutResourceAttributes \a response.
 */
void PutResourceAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutResourceAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHub::PutResourceAttributesResponsePrivate
 * \brief The PutResourceAttributesResponsePrivate class provides private implementation for PutResourceAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a PutResourceAttributesResponsePrivate object with public implementation \a q.
 */
PutResourceAttributesResponsePrivate::PutResourceAttributesResponsePrivate(
    PutResourceAttributesResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHub PutResourceAttributes response element from \a xml.
 */
void PutResourceAttributesResponsePrivate::parsePutResourceAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutResourceAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHub
} // namespace QtAws
