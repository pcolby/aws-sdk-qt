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

#include "listexperienceentitiesresponse.h"
#include "listexperienceentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListExperienceEntitiesResponse
 * \brief The ListExperienceEntitiesResponse class provides an interace for Kendra ListExperienceEntities responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listExperienceEntities
 */

/*!
 * Constructs a ListExperienceEntitiesResponse object for \a reply to \a request, with parent \a parent.
 */
ListExperienceEntitiesResponse::ListExperienceEntitiesResponse(
        const ListExperienceEntitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new ListExperienceEntitiesResponsePrivate(this), parent)
{
    setRequest(new ListExperienceEntitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExperienceEntitiesRequest * ListExperienceEntitiesResponse::request() const
{
    Q_D(const ListExperienceEntitiesResponse);
    return static_cast<const ListExperienceEntitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra ListExperienceEntities \a response.
 */
void ListExperienceEntitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExperienceEntitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::ListExperienceEntitiesResponsePrivate
 * \brief The ListExperienceEntitiesResponsePrivate class provides private implementation for ListExperienceEntitiesResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListExperienceEntitiesResponsePrivate object with public implementation \a q.
 */
ListExperienceEntitiesResponsePrivate::ListExperienceEntitiesResponsePrivate(
    ListExperienceEntitiesResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra ListExperienceEntities response element from \a xml.
 */
void ListExperienceEntitiesResponsePrivate::parseListExperienceEntitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExperienceEntitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
