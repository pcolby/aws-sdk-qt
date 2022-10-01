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

#include "startrecommenderresponse.h"
#include "startrecommenderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::StartRecommenderResponse
 * \brief The StartRecommenderResponse class provides an interace for Personalize StartRecommender responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::startRecommender
 */

/*!
 * Constructs a StartRecommenderResponse object for \a reply to \a request, with parent \a parent.
 */
StartRecommenderResponse::StartRecommenderResponse(
        const StartRecommenderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new StartRecommenderResponsePrivate(this), parent)
{
    setRequest(new StartRecommenderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartRecommenderRequest * StartRecommenderResponse::request() const
{
    Q_D(const StartRecommenderResponse);
    return static_cast<const StartRecommenderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize StartRecommender \a response.
 */
void StartRecommenderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartRecommenderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::StartRecommenderResponsePrivate
 * \brief The StartRecommenderResponsePrivate class provides private implementation for StartRecommenderResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a StartRecommenderResponsePrivate object with public implementation \a q.
 */
StartRecommenderResponsePrivate::StartRecommenderResponsePrivate(
    StartRecommenderResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize StartRecommender response element from \a xml.
 */
void StartRecommenderResponsePrivate::parseStartRecommenderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartRecommenderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
