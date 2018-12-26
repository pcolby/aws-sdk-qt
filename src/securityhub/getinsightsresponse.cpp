/*
    Copyright 2013-2018 Paul Colby

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

#include "getinsightsresponse.h"
#include "getinsightsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::GetInsightsResponse
 * \brief The GetInsightsResponse class provides an interace for SecurityHub GetInsights responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::getInsights
 */

/*!
 * Constructs a GetInsightsResponse object for \a reply to \a request, with parent \a parent.
 */
GetInsightsResponse::GetInsightsResponse(
        const GetInsightsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new GetInsightsResponsePrivate(this), parent)
{
    setRequest(new GetInsightsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInsightsRequest * GetInsightsResponse::request() const
{
    Q_D(const GetInsightsResponse);
    return static_cast<const GetInsightsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecurityHub GetInsights \a response.
 */
void GetInsightsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInsightsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::GetInsightsResponsePrivate
 * \brief The GetInsightsResponsePrivate class provides private implementation for GetInsightsResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a GetInsightsResponsePrivate object with public implementation \a q.
 */
GetInsightsResponsePrivate::GetInsightsResponsePrivate(
    GetInsightsResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub GetInsights response element from \a xml.
 */
void GetInsightsResponsePrivate::parseGetInsightsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInsightsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
