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

#include "describeprincipalmappingresponse.h"
#include "describeprincipalmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribePrincipalMappingResponse
 * \brief The DescribePrincipalMappingResponse class provides an interace for Kendra DescribePrincipalMapping responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describePrincipalMapping
 */

/*!
 * Constructs a DescribePrincipalMappingResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePrincipalMappingResponse::DescribePrincipalMappingResponse(
        const DescribePrincipalMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DescribePrincipalMappingResponsePrivate(this), parent)
{
    setRequest(new DescribePrincipalMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePrincipalMappingRequest * DescribePrincipalMappingResponse::request() const
{
    Q_D(const DescribePrincipalMappingResponse);
    return static_cast<const DescribePrincipalMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DescribePrincipalMapping \a response.
 */
void DescribePrincipalMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePrincipalMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DescribePrincipalMappingResponsePrivate
 * \brief The DescribePrincipalMappingResponsePrivate class provides private implementation for DescribePrincipalMappingResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribePrincipalMappingResponsePrivate object with public implementation \a q.
 */
DescribePrincipalMappingResponsePrivate::DescribePrincipalMappingResponsePrivate(
    DescribePrincipalMappingResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DescribePrincipalMapping response element from \a xml.
 */
void DescribePrincipalMappingResponsePrivate::parseDescribePrincipalMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePrincipalMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
