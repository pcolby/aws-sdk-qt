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

#include "listsecurityconfigurationsresponse.h"
#include "listsecurityconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ListSecurityConfigurationsResponse
 * \brief The ListSecurityConfigurationsResponse class provides an interace for EMR ListSecurityConfigurations responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::listSecurityConfigurations
 */

/*!
 * Constructs a ListSecurityConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSecurityConfigurationsResponse::ListSecurityConfigurationsResponse(
        const ListSecurityConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ListSecurityConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListSecurityConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSecurityConfigurationsRequest * ListSecurityConfigurationsResponse::request() const
{
    Q_D(const ListSecurityConfigurationsResponse);
    return static_cast<const ListSecurityConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR ListSecurityConfigurations \a response.
 */
void ListSecurityConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSecurityConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::ListSecurityConfigurationsResponsePrivate
 * \brief The ListSecurityConfigurationsResponsePrivate class provides private implementation for ListSecurityConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a ListSecurityConfigurationsResponsePrivate object with public implementation \a q.
 */
ListSecurityConfigurationsResponsePrivate::ListSecurityConfigurationsResponsePrivate(
    ListSecurityConfigurationsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR ListSecurityConfigurations response element from \a xml.
 */
void ListSecurityConfigurationsResponsePrivate::parseListSecurityConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSecurityConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws
