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

#include "getrecommendationsresponse.h"
#include "getrecommendationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PersonalizeRuntime {

/*!
 * \class QtAws::PersonalizeRuntime::GetRecommendationsResponse
 * \brief The GetRecommendationsResponse class provides an interace for PersonalizeRuntime GetRecommendations responses.
 *
 * \inmodule QtAwsPersonalizeRuntime
 *
 *
 * \sa PersonalizeRuntimeClient::getRecommendations
 */

/*!
 * Constructs a GetRecommendationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetRecommendationsResponse::GetRecommendationsResponse(
        const GetRecommendationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeRuntimeResponse(new GetRecommendationsResponsePrivate(this), parent)
{
    setRequest(new GetRecommendationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRecommendationsRequest * GetRecommendationsResponse::request() const
{
    Q_D(const GetRecommendationsResponse);
    return static_cast<const GetRecommendationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PersonalizeRuntime GetRecommendations \a response.
 */
void GetRecommendationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRecommendationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PersonalizeRuntime::GetRecommendationsResponsePrivate
 * \brief The GetRecommendationsResponsePrivate class provides private implementation for GetRecommendationsResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalizeRuntime
 */

/*!
 * Constructs a GetRecommendationsResponsePrivate object with public implementation \a q.
 */
GetRecommendationsResponsePrivate::GetRecommendationsResponsePrivate(
    GetRecommendationsResponse * const q) : PersonalizeRuntimeResponsePrivate(q)
{

}

/*!
 * Parses a PersonalizeRuntime GetRecommendations response element from \a xml.
 */
void GetRecommendationsResponsePrivate::parseGetRecommendationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRecommendationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PersonalizeRuntime
} // namespace QtAws
