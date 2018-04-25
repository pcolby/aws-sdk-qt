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

#include "deleteservercatalogresponse.h"
#include "deleteservercatalogresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::DeleteServerCatalogResponse
 * \brief The DeleteServerCatalogResponse class provides an interace for SMS DeleteServerCatalog responses.
 *
 * \inmodule QtAwsSMS
 *
 *
 * \sa SmsClient::deleteServerCatalog
 */

/*!
 * Constructs a DeleteServerCatalogResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteServerCatalogResponse::DeleteServerCatalogResponse(
        const DeleteServerCatalogRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new DeleteServerCatalogResponsePrivate(this), parent)
{
    setRequest(new DeleteServerCatalogRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteServerCatalogRequest * DeleteServerCatalogResponse::request() const
{
    Q_D(const DeleteServerCatalogResponse);
    return static_cast<const DeleteServerCatalogRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SMS DeleteServerCatalog \a response.
 */
void DeleteServerCatalogResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteServerCatalogResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SMS::DeleteServerCatalogResponsePrivate
 * \brief The DeleteServerCatalogResponsePrivate class provides private implementation for DeleteServerCatalogResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a DeleteServerCatalogResponsePrivate object with public implementation \a q.
 */
DeleteServerCatalogResponsePrivate::DeleteServerCatalogResponsePrivate(
    DeleteServerCatalogResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a SMS DeleteServerCatalog response element from \a xml.
 */
void DeleteServerCatalogResponsePrivate::parseDeleteServerCatalogResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteServerCatalogResponse"));
    /// @todo
}

} // namespace SMS
} // namespace QtAws
