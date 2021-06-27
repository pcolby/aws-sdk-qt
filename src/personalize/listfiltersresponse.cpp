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

#include "listfiltersresponse.h"
#include "listfiltersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListFiltersResponse
 * \brief The ListFiltersResponse class provides an interace for Personalize ListFilters responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listFilters
 */

/*!
 * Constructs a ListFiltersResponse object for \a reply to \a request, with parent \a parent.
 */
ListFiltersResponse::ListFiltersResponse(
        const ListFiltersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new ListFiltersResponsePrivate(this), parent)
{
    setRequest(new ListFiltersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFiltersRequest * ListFiltersResponse::request() const
{
    return static_cast<const ListFiltersRequest *>(PersonalizeResponse::request());
}

/*!
 * \reimp
 * Parses a successful Personalize ListFilters \a response.
 */
void ListFiltersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFiltersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::ListFiltersResponsePrivate
 * \brief The ListFiltersResponsePrivate class provides private implementation for ListFiltersResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListFiltersResponsePrivate object with public implementation \a q.
 */
ListFiltersResponsePrivate::ListFiltersResponsePrivate(
    ListFiltersResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize ListFilters response element from \a xml.
 */
void ListFiltersResponsePrivate::parseListFiltersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFiltersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
