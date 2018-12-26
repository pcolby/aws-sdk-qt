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

#include "getinsightresultsresponse.h"
#include "getinsightresultsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::GetInsightResultsResponse
 * \brief The GetInsightResultsResponse class provides an interace for SecurityHub GetInsightResults responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::getInsightResults
 */

/*!
 * Constructs a GetInsightResultsResponse object for \a reply to \a request, with parent \a parent.
 */
GetInsightResultsResponse::GetInsightResultsResponse(
        const GetInsightResultsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new GetInsightResultsResponsePrivate(this), parent)
{
    setRequest(new GetInsightResultsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInsightResultsRequest * GetInsightResultsResponse::request() const
{
    Q_D(const GetInsightResultsResponse);
    return static_cast<const GetInsightResultsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecurityHub GetInsightResults \a response.
 */
void GetInsightResultsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInsightResultsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::GetInsightResultsResponsePrivate
 * \brief The GetInsightResultsResponsePrivate class provides private implementation for GetInsightResultsResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a GetInsightResultsResponsePrivate object with public implementation \a q.
 */
GetInsightResultsResponsePrivate::GetInsightResultsResponsePrivate(
    GetInsightResultsResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub GetInsightResults response element from \a xml.
 */
void GetInsightResultsResponsePrivate::parseGetInsightResultsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInsightResultsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
