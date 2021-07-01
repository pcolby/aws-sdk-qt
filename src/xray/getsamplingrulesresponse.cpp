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

#include "getsamplingrulesresponse.h"
#include "getsamplingrulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetSamplingRulesResponse
 * \brief The GetSamplingRulesResponse class provides an interace for XRay GetSamplingRules responses.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::getSamplingRules
 */

/*!
 * Constructs a GetSamplingRulesResponse object for \a reply to \a request, with parent \a parent.
 */
GetSamplingRulesResponse::GetSamplingRulesResponse(
        const GetSamplingRulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetSamplingRulesResponsePrivate(this), parent)
{
    setRequest(new GetSamplingRulesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSamplingRulesRequest * GetSamplingRulesResponse::request() const
{
    Q_D(const GetSamplingRulesResponse);
    return static_cast<const GetSamplingRulesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetSamplingRules \a response.
 */
void GetSamplingRulesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSamplingRulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetSamplingRulesResponsePrivate
 * \brief The GetSamplingRulesResponsePrivate class provides private implementation for GetSamplingRulesResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetSamplingRulesResponsePrivate object with public implementation \a q.
 */
GetSamplingRulesResponsePrivate::GetSamplingRulesResponsePrivate(
    GetSamplingRulesResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetSamplingRules response element from \a xml.
 */
void GetSamplingRulesResponsePrivate::parseGetSamplingRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSamplingRulesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
