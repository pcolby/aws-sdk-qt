/*
    Copyright 2013-2019 Paul Colby

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

#include "getpersonalizedrankingresponse.h"
#include "getpersonalizedrankingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PersonalizeRuntime {

/*!
 * \class QtAws::PersonalizeRuntime::GetPersonalizedRankingResponse
 * \brief The GetPersonalizedRankingResponse class provides an interace for PersonalizeRuntime GetPersonalizedRanking responses.
 *
 * \inmodule QtAwsPersonalizeRuntime
 *
 *
 * \sa PersonalizeRuntimeClient::getPersonalizedRanking
 */

/*!
 * Constructs a GetPersonalizedRankingResponse object for \a reply to \a request, with parent \a parent.
 */
GetPersonalizedRankingResponse::GetPersonalizedRankingResponse(
        const GetPersonalizedRankingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeRuntimeResponse(new GetPersonalizedRankingResponsePrivate(this), parent)
{
    setRequest(new GetPersonalizedRankingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPersonalizedRankingRequest * GetPersonalizedRankingResponse::request() const
{
    Q_D(const GetPersonalizedRankingResponse);
    return static_cast<const GetPersonalizedRankingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PersonalizeRuntime GetPersonalizedRanking \a response.
 */
void GetPersonalizedRankingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPersonalizedRankingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PersonalizeRuntime::GetPersonalizedRankingResponsePrivate
 * \brief The GetPersonalizedRankingResponsePrivate class provides private implementation for GetPersonalizedRankingResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalizeRuntime
 */

/*!
 * Constructs a GetPersonalizedRankingResponsePrivate object with public implementation \a q.
 */
GetPersonalizedRankingResponsePrivate::GetPersonalizedRankingResponsePrivate(
    GetPersonalizedRankingResponse * const q) : PersonalizeRuntimeResponsePrivate(q)
{

}

/*!
 * Parses a PersonalizeRuntime GetPersonalizedRanking response element from \a xml.
 */
void GetPersonalizedRankingResponsePrivate::parseGetPersonalizedRankingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPersonalizedRankingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PersonalizeRuntime
} // namespace QtAws
