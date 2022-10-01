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

#include "putprincipalmappingresponse.h"
#include "putprincipalmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::PutPrincipalMappingResponse
 * \brief The PutPrincipalMappingResponse class provides an interace for Kendra PutPrincipalMapping responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::putPrincipalMapping
 */

/*!
 * Constructs a PutPrincipalMappingResponse object for \a reply to \a request, with parent \a parent.
 */
PutPrincipalMappingResponse::PutPrincipalMappingResponse(
        const PutPrincipalMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new PutPrincipalMappingResponsePrivate(this), parent)
{
    setRequest(new PutPrincipalMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutPrincipalMappingRequest * PutPrincipalMappingResponse::request() const
{
    Q_D(const PutPrincipalMappingResponse);
    return static_cast<const PutPrincipalMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra PutPrincipalMapping \a response.
 */
void PutPrincipalMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutPrincipalMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::PutPrincipalMappingResponsePrivate
 * \brief The PutPrincipalMappingResponsePrivate class provides private implementation for PutPrincipalMappingResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a PutPrincipalMappingResponsePrivate object with public implementation \a q.
 */
PutPrincipalMappingResponsePrivate::PutPrincipalMappingResponsePrivate(
    PutPrincipalMappingResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra PutPrincipalMapping response element from \a xml.
 */
void PutPrincipalMappingResponsePrivate::parsePutPrincipalMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutPrincipalMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
