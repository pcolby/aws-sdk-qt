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

#include "importservercatalogresponse.h"
#include "importservercatalogresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::ImportServerCatalogResponse
 * \brief The ImportServerCatalogResponse class provides an interace for SMS ImportServerCatalog responses.
 *
 * \inmodule QtAwsSMS
 *
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
 * Parses a successful SMS ImportServerCatalog \a response.
 */
void ImportServerCatalogResponse::parseSuccess(QIODevice &response)
{
    Q_D(ImportServerCatalogResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SMS::ImportServerCatalogResponsePrivate
 * \brief The ImportServerCatalogResponsePrivate class provides private implementation for ImportServerCatalogResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a ImportServerCatalogResponsePrivate object with public implementation \a q.
 */
ImportServerCatalogResponsePrivate::ImportServerCatalogResponsePrivate(
    ImportServerCatalogResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a SMS ImportServerCatalog response element from \a xml.
 */
void ImportServerCatalogResponsePrivate::parseImportServerCatalogResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportServerCatalogResponse"));
    /// @todo
}

} // namespace SMS
} // namespace QtAws
