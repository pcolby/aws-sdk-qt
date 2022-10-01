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

#include "getinsightimpactgraphresponse.h"
#include "getinsightimpactgraphresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetInsightImpactGraphResponse
 * \brief The GetInsightImpactGraphResponse class provides an interace for XRay GetInsightImpactGraph responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getInsightImpactGraph
 */

/*!
 * Constructs a GetInsightImpactGraphResponse object for \a reply to \a request, with parent \a parent.
 */
GetInsightImpactGraphResponse::GetInsightImpactGraphResponse(
        const GetInsightImpactGraphRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetInsightImpactGraphResponsePrivate(this), parent)
{
    setRequest(new GetInsightImpactGraphRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInsightImpactGraphRequest * GetInsightImpactGraphResponse::request() const
{
    Q_D(const GetInsightImpactGraphResponse);
    return static_cast<const GetInsightImpactGraphRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetInsightImpactGraph \a response.
 */
void GetInsightImpactGraphResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInsightImpactGraphResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetInsightImpactGraphResponsePrivate
 * \brief The GetInsightImpactGraphResponsePrivate class provides private implementation for GetInsightImpactGraphResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetInsightImpactGraphResponsePrivate object with public implementation \a q.
 */
GetInsightImpactGraphResponsePrivate::GetInsightImpactGraphResponsePrivate(
    GetInsightImpactGraphResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetInsightImpactGraph response element from \a xml.
 */
void GetInsightImpactGraphResponsePrivate::parseGetInsightImpactGraphResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInsightImpactGraphResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
