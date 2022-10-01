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

#include "updaterecommenderresponse.h"
#include "updaterecommenderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::UpdateRecommenderResponse
 * \brief The UpdateRecommenderResponse class provides an interace for Personalize UpdateRecommender responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::updateRecommender
 */

/*!
 * Constructs a UpdateRecommenderResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRecommenderResponse::UpdateRecommenderResponse(
        const UpdateRecommenderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new UpdateRecommenderResponsePrivate(this), parent)
{
    setRequest(new UpdateRecommenderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRecommenderRequest * UpdateRecommenderResponse::request() const
{
    Q_D(const UpdateRecommenderResponse);
    return static_cast<const UpdateRecommenderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize UpdateRecommender \a response.
 */
void UpdateRecommenderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRecommenderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::UpdateRecommenderResponsePrivate
 * \brief The UpdateRecommenderResponsePrivate class provides private implementation for UpdateRecommenderResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a UpdateRecommenderResponsePrivate object with public implementation \a q.
 */
UpdateRecommenderResponsePrivate::UpdateRecommenderResponsePrivate(
    UpdateRecommenderResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize UpdateRecommender response element from \a xml.
 */
void UpdateRecommenderResponsePrivate::parseUpdateRecommenderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRecommenderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
