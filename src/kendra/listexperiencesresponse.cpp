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

#include "listexperiencesresponse.h"
#include "listexperiencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListExperiencesResponse
 * \brief The ListExperiencesResponse class provides an interace for Kendra ListExperiences responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listExperiences
 */

/*!
 * Constructs a ListExperiencesResponse object for \a reply to \a request, with parent \a parent.
 */
ListExperiencesResponse::ListExperiencesResponse(
        const ListExperiencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new ListExperiencesResponsePrivate(this), parent)
{
    setRequest(new ListExperiencesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExperiencesRequest * ListExperiencesResponse::request() const
{
    Q_D(const ListExperiencesResponse);
    return static_cast<const ListExperiencesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra ListExperiences \a response.
 */
void ListExperiencesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExperiencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::ListExperiencesResponsePrivate
 * \brief The ListExperiencesResponsePrivate class provides private implementation for ListExperiencesResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListExperiencesResponsePrivate object with public implementation \a q.
 */
ListExperiencesResponsePrivate::ListExperiencesResponsePrivate(
    ListExperiencesResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra ListExperiences response element from \a xml.
 */
void ListExperiencesResponsePrivate::parseListExperiencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExperiencesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
