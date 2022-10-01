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

#include "listrecommendersresponse.h"
#include "listrecommendersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListRecommendersResponse
 * \brief The ListRecommendersResponse class provides an interace for Personalize ListRecommenders responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listRecommenders
 */

/*!
 * Constructs a ListRecommendersResponse object for \a reply to \a request, with parent \a parent.
 */
ListRecommendersResponse::ListRecommendersResponse(
        const ListRecommendersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new ListRecommendersResponsePrivate(this), parent)
{
    setRequest(new ListRecommendersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRecommendersRequest * ListRecommendersResponse::request() const
{
    Q_D(const ListRecommendersResponse);
    return static_cast<const ListRecommendersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize ListRecommenders \a response.
 */
void ListRecommendersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRecommendersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::ListRecommendersResponsePrivate
 * \brief The ListRecommendersResponsePrivate class provides private implementation for ListRecommendersResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListRecommendersResponsePrivate object with public implementation \a q.
 */
ListRecommendersResponsePrivate::ListRecommendersResponsePrivate(
    ListRecommendersResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize ListRecommenders response element from \a xml.
 */
void ListRecommendersResponsePrivate::parseListRecommendersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRecommendersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
