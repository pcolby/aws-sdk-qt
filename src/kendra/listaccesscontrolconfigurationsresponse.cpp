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

#include "listaccesscontrolconfigurationsresponse.h"
#include "listaccesscontrolconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListAccessControlConfigurationsResponse
 * \brief The ListAccessControlConfigurationsResponse class provides an interace for Kendra ListAccessControlConfigurations responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listAccessControlConfigurations
 */

/*!
 * Constructs a ListAccessControlConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccessControlConfigurationsResponse::ListAccessControlConfigurationsResponse(
        const ListAccessControlConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new ListAccessControlConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListAccessControlConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccessControlConfigurationsRequest * ListAccessControlConfigurationsResponse::request() const
{
    Q_D(const ListAccessControlConfigurationsResponse);
    return static_cast<const ListAccessControlConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra ListAccessControlConfigurations \a response.
 */
void ListAccessControlConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccessControlConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::ListAccessControlConfigurationsResponsePrivate
 * \brief The ListAccessControlConfigurationsResponsePrivate class provides private implementation for ListAccessControlConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListAccessControlConfigurationsResponsePrivate object with public implementation \a q.
 */
ListAccessControlConfigurationsResponsePrivate::ListAccessControlConfigurationsResponsePrivate(
    ListAccessControlConfigurationsResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra ListAccessControlConfigurations response element from \a xml.
 */
void ListAccessControlConfigurationsResponsePrivate::parseListAccessControlConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccessControlConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
