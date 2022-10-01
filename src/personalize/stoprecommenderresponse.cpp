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

#include "stoprecommenderresponse.h"
#include "stoprecommenderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::StopRecommenderResponse
 * \brief The StopRecommenderResponse class provides an interace for Personalize StopRecommender responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::stopRecommender
 */

/*!
 * Constructs a StopRecommenderResponse object for \a reply to \a request, with parent \a parent.
 */
StopRecommenderResponse::StopRecommenderResponse(
        const StopRecommenderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new StopRecommenderResponsePrivate(this), parent)
{
    setRequest(new StopRecommenderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopRecommenderRequest * StopRecommenderResponse::request() const
{
    Q_D(const StopRecommenderResponse);
    return static_cast<const StopRecommenderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize StopRecommender \a response.
 */
void StopRecommenderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopRecommenderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::StopRecommenderResponsePrivate
 * \brief The StopRecommenderResponsePrivate class provides private implementation for StopRecommenderResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a StopRecommenderResponsePrivate object with public implementation \a q.
 */
StopRecommenderResponsePrivate::StopRecommenderResponsePrivate(
    StopRecommenderResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize StopRecommender response element from \a xml.
 */
void StopRecommenderResponsePrivate::parseStopRecommenderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopRecommenderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
