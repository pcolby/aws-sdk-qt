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

#include "getsolutionmetricsresponse.h"
#include "getsolutionmetricsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::GetSolutionMetricsResponse
 * \brief The GetSolutionMetricsResponse class provides an interace for Personalize GetSolutionMetrics responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::getSolutionMetrics
 */

/*!
 * Constructs a GetSolutionMetricsResponse object for \a reply to \a request, with parent \a parent.
 */
GetSolutionMetricsResponse::GetSolutionMetricsResponse(
        const GetSolutionMetricsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new GetSolutionMetricsResponsePrivate(this), parent)
{
    setRequest(new GetSolutionMetricsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSolutionMetricsRequest * GetSolutionMetricsResponse::request() const
{
    Q_D(const GetSolutionMetricsResponse);
    return static_cast<const GetSolutionMetricsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize GetSolutionMetrics \a response.
 */
void GetSolutionMetricsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSolutionMetricsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::GetSolutionMetricsResponsePrivate
 * \brief The GetSolutionMetricsResponsePrivate class provides private implementation for GetSolutionMetricsResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a GetSolutionMetricsResponsePrivate object with public implementation \a q.
 */
GetSolutionMetricsResponsePrivate::GetSolutionMetricsResponsePrivate(
    GetSolutionMetricsResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize GetSolutionMetrics response element from \a xml.
 */
void GetSolutionMetricsResponsePrivate::parseGetSolutionMetricsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSolutionMetricsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
