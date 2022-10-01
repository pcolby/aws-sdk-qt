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

#include "gettracegraphresponse.h"
#include "gettracegraphresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetTraceGraphResponse
 * \brief The GetTraceGraphResponse class provides an interace for XRay GetTraceGraph responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getTraceGraph
 */

/*!
 * Constructs a GetTraceGraphResponse object for \a reply to \a request, with parent \a parent.
 */
GetTraceGraphResponse::GetTraceGraphResponse(
        const GetTraceGraphRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetTraceGraphResponsePrivate(this), parent)
{
    setRequest(new GetTraceGraphRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTraceGraphRequest * GetTraceGraphResponse::request() const
{
    Q_D(const GetTraceGraphResponse);
    return static_cast<const GetTraceGraphRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetTraceGraph \a response.
 */
void GetTraceGraphResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTraceGraphResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetTraceGraphResponsePrivate
 * \brief The GetTraceGraphResponsePrivate class provides private implementation for GetTraceGraphResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetTraceGraphResponsePrivate object with public implementation \a q.
 */
GetTraceGraphResponsePrivate::GetTraceGraphResponsePrivate(
    GetTraceGraphResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetTraceGraph response element from \a xml.
 */
void GetTraceGraphResponsePrivate::parseGetTraceGraphResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTraceGraphResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
