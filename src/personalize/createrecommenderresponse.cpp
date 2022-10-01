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

#include "createrecommenderresponse.h"
#include "createrecommenderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateRecommenderResponse
 * \brief The CreateRecommenderResponse class provides an interace for Personalize CreateRecommender responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createRecommender
 */

/*!
 * Constructs a CreateRecommenderResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRecommenderResponse::CreateRecommenderResponse(
        const CreateRecommenderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new CreateRecommenderResponsePrivate(this), parent)
{
    setRequest(new CreateRecommenderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRecommenderRequest * CreateRecommenderResponse::request() const
{
    Q_D(const CreateRecommenderResponse);
    return static_cast<const CreateRecommenderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize CreateRecommender \a response.
 */
void CreateRecommenderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRecommenderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::CreateRecommenderResponsePrivate
 * \brief The CreateRecommenderResponsePrivate class provides private implementation for CreateRecommenderResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateRecommenderResponsePrivate object with public implementation \a q.
 */
CreateRecommenderResponsePrivate::CreateRecommenderResponsePrivate(
    CreateRecommenderResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize CreateRecommender response element from \a xml.
 */
void CreateRecommenderResponsePrivate::parseCreateRecommenderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRecommenderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
