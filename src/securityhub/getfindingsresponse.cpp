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

#include "getfindingsresponse.h"
#include "getfindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::GetFindingsResponse
 * \brief The GetFindingsResponse class provides an interace for SecurityHub GetFindings responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::getFindings
 */

/*!
 * Constructs a GetFindingsResponse object for \a reply to \a request, with parent \a parent.
 */
GetFindingsResponse::GetFindingsResponse(
        const GetFindingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new GetFindingsResponsePrivate(this), parent)
{
    setRequest(new GetFindingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFindingsRequest * GetFindingsResponse::request() const
{
    Q_D(const GetFindingsResponse);
    return static_cast<const GetFindingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecurityHub GetFindings \a response.
 */
void GetFindingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFindingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::GetFindingsResponsePrivate
 * \brief The GetFindingsResponsePrivate class provides private implementation for GetFindingsResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a GetFindingsResponsePrivate object with public implementation \a q.
 */
GetFindingsResponsePrivate::GetFindingsResponsePrivate(
    GetFindingsResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub GetFindings response element from \a xml.
 */
void GetFindingsResponsePrivate::parseGetFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFindingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
