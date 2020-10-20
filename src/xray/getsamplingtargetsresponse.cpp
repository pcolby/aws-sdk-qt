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

#include "getsamplingtargetsresponse.h"
#include "getsamplingtargetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetSamplingTargetsResponse
 * \brief The GetSamplingTargetsResponse class provides an interace for XRay GetSamplingTargets responses.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::getSamplingTargets
 */

/*!
 * Constructs a GetSamplingTargetsResponse object for \a reply to \a request, with parent \a parent.
 */
GetSamplingTargetsResponse::GetSamplingTargetsResponse(
        const GetSamplingTargetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetSamplingTargetsResponsePrivate(this), parent)
{
    setRequest(new GetSamplingTargetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSamplingTargetsRequest * GetSamplingTargetsResponse::request() const
{
    Q_D(const GetSamplingTargetsResponse);
    return static_cast<const GetSamplingTargetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetSamplingTargets \a response.
 */
void GetSamplingTargetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSamplingTargetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetSamplingTargetsResponsePrivate
 * \brief The GetSamplingTargetsResponsePrivate class provides private implementation for GetSamplingTargetsResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetSamplingTargetsResponsePrivate object with public implementation \a q.
 */
GetSamplingTargetsResponsePrivate::GetSamplingTargetsResponsePrivate(
    GetSamplingTargetsResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetSamplingTargets response element from \a xml.
 */
void GetSamplingTargetsResponsePrivate::parseGetSamplingTargetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSamplingTargetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
