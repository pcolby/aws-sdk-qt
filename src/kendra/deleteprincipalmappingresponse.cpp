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

#include "deleteprincipalmappingresponse.h"
#include "deleteprincipalmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeletePrincipalMappingResponse
 * \brief The DeletePrincipalMappingResponse class provides an interace for Kendra DeletePrincipalMapping responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deletePrincipalMapping
 */

/*!
 * Constructs a DeletePrincipalMappingResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePrincipalMappingResponse::DeletePrincipalMappingResponse(
        const DeletePrincipalMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DeletePrincipalMappingResponsePrivate(this), parent)
{
    setRequest(new DeletePrincipalMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePrincipalMappingRequest * DeletePrincipalMappingResponse::request() const
{
    Q_D(const DeletePrincipalMappingResponse);
    return static_cast<const DeletePrincipalMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DeletePrincipalMapping \a response.
 */
void DeletePrincipalMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePrincipalMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DeletePrincipalMappingResponsePrivate
 * \brief The DeletePrincipalMappingResponsePrivate class provides private implementation for DeletePrincipalMappingResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeletePrincipalMappingResponsePrivate object with public implementation \a q.
 */
DeletePrincipalMappingResponsePrivate::DeletePrincipalMappingResponsePrivate(
    DeletePrincipalMappingResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DeletePrincipalMapping response element from \a xml.
 */
void DeletePrincipalMappingResponsePrivate::parseDeletePrincipalMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePrincipalMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
