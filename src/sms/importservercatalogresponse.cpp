// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importservercatalogresponse.h"
#include "importservercatalogresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::ImportServerCatalogResponse
 * \brief The ImportServerCatalogResponse class provides an interace for Sms ImportServerCatalog responses.
 *
 * \inmodule QtAwsSms
 *
 *  <b>
 * 
 *  <b>Product update</b>
 * 
 *  </p
 * 
 *  We recommend <a href="http://aws.amazon.com/application-migration-service">Amazon Web Services Application Migration
 *  Service</a> (Amazon Web Services MGN) as the primary migration service for lift-and-shift migrations. If Amazon Web
 *  Services MGN is unavailable in a specific Amazon Web Services Region, you can use the Server Migration Service APIs
 *  through March
 * 
 *  2023> </b>
 * 
 *  Server Migration Service (Server Migration Service) makes it easier and faster for you to migrate your on-premises
 *  workloads to Amazon Web Services. To learn more about Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/server-migration-service/">Server Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">Server Migration Service User Guide</a>
 *
 * \sa SmsClient::importServerCatalog
 */

/*!
 * Constructs a ImportServerCatalogResponse object for \a reply to \a request, with parent \a parent.
 */
ImportServerCatalogResponse::ImportServerCatalogResponse(
        const ImportServerCatalogRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new ImportServerCatalogResponsePrivate(this), parent)
{
    setRequest(new ImportServerCatalogRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportServerCatalogRequest * ImportServerCatalogResponse::request() const
{
    Q_D(const ImportServerCatalogResponse);
    return static_cast<const ImportServerCatalogRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sms ImportServerCatalog \a response.
 */
void ImportServerCatalogResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportServerCatalogResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sms::ImportServerCatalogResponsePrivate
 * \brief The ImportServerCatalogResponsePrivate class provides private implementation for ImportServerCatalogResponse.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a ImportServerCatalogResponsePrivate object with public implementation \a q.
 */
ImportServerCatalogResponsePrivate::ImportServerCatalogResponsePrivate(
    ImportServerCatalogResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a Sms ImportServerCatalog response element from \a xml.
 */
void ImportServerCatalogResponsePrivate::parseImportServerCatalogResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportServerCatalogResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sms
} // namespace QtAws
