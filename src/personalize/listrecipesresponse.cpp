/*
    Copyright 2013-2020 Paul Colby

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

#include "listrecipesresponse.h"
#include "listrecipesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListRecipesResponse
 * \brief The ListRecipesResponse class provides an interace for Personalize ListRecipes responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listRecipes
 */

/*!
 * Constructs a ListRecipesResponse object for \a reply to \a request, with parent \a parent.
 */
ListRecipesResponse::ListRecipesResponse(
        const ListRecipesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new ListRecipesResponsePrivate(this), parent)
{
    setRequest(new ListRecipesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRecipesRequest * ListRecipesResponse::request() const
{
    Q_D(const ListRecipesResponse);
    return static_cast<const ListRecipesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize ListRecipes \a response.
 */
void ListRecipesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRecipesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::ListRecipesResponsePrivate
 * \brief The ListRecipesResponsePrivate class provides private implementation for ListRecipesResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListRecipesResponsePrivate object with public implementation \a q.
 */
ListRecipesResponsePrivate::ListRecipesResponsePrivate(
    ListRecipesResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize ListRecipes response element from \a xml.
 */
void ListRecipesResponsePrivate::parseListRecipesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRecipesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
