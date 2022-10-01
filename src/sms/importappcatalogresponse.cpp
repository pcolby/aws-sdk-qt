// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importappcatalogresponse.h"
#include "importappcatalogresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::ImportAppCatalogResponse
 * \brief The ImportAppCatalogResponse class provides an interace for Sms ImportAppCatalog responses.
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
 * \sa SmsClient::importAppCatalog
 */

/*!
 * Constructs a ImportAppCatalogResponse object for \a reply to \a request, with parent \a parent.
 */
ImportAppCatalogResponse::ImportAppCatalogResponse(
        const ImportAppCatalogRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new ImportAppCatalogResponsePrivate(this), parent)
{
    setRequest(new ImportAppCatalogRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportAppCatalogRequest * ImportAppCatalogResponse::request() const
{
    Q_D(const ImportAppCatalogResponse);
    return static_cast<const ImportAppCatalogRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sms ImportAppCatalog \a response.
 */
void ImportAppCatalogResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportAppCatalogResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sms::ImportAppCatalogResponsePrivate
 * \brief The ImportAppCatalogResponsePrivate class provides private implementation for ImportAppCatalogResponse.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a ImportAppCatalogResponsePrivate object with public implementation \a q.
 */
ImportAppCatalogResponsePrivate::ImportAppCatalogResponsePrivate(
    ImportAppCatalogResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a Sms ImportAppCatalog response element from \a xml.
 */
void ImportAppCatalogResponsePrivate::parseImportAppCatalogResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportAppCatalogResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sms
} // namespace QtAws
