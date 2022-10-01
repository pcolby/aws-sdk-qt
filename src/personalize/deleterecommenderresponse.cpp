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

#include "deleterecommenderresponse.h"
#include "deleterecommenderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteRecommenderResponse
 * \brief The DeleteRecommenderResponse class provides an interace for Personalize DeleteRecommender responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteRecommender
 */

/*!
 * Constructs a DeleteRecommenderResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRecommenderResponse::DeleteRecommenderResponse(
        const DeleteRecommenderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DeleteRecommenderResponsePrivate(this), parent)
{
    setRequest(new DeleteRecommenderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRecommenderRequest * DeleteRecommenderResponse::request() const
{
    Q_D(const DeleteRecommenderResponse);
    return static_cast<const DeleteRecommenderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DeleteRecommender \a response.
 */
void DeleteRecommenderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRecommenderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DeleteRecommenderResponsePrivate
 * \brief The DeleteRecommenderResponsePrivate class provides private implementation for DeleteRecommenderResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteRecommenderResponsePrivate object with public implementation \a q.
 */
DeleteRecommenderResponsePrivate::DeleteRecommenderResponsePrivate(
    DeleteRecommenderResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DeleteRecommender response element from \a xml.
 */
void DeleteRecommenderResponsePrivate::parseDeleteRecommenderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRecommenderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
