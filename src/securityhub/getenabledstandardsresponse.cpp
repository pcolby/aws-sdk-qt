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

#include "getenabledstandardsresponse.h"
#include "getenabledstandardsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::GetEnabledStandardsResponse
 * \brief The GetEnabledStandardsResponse class provides an interace for SecurityHub GetEnabledStandards responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::getEnabledStandards
 */

/*!
 * Constructs a GetEnabledStandardsResponse object for \a reply to \a request, with parent \a parent.
 */
GetEnabledStandardsResponse::GetEnabledStandardsResponse(
        const GetEnabledStandardsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new GetEnabledStandardsResponsePrivate(this), parent)
{
    setRequest(new GetEnabledStandardsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEnabledStandardsRequest * GetEnabledStandardsResponse::request() const
{
    Q_D(const GetEnabledStandardsResponse);
    return static_cast<const GetEnabledStandardsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecurityHub GetEnabledStandards \a response.
 */
void GetEnabledStandardsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEnabledStandardsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::GetEnabledStandardsResponsePrivate
 * \brief The GetEnabledStandardsResponsePrivate class provides private implementation for GetEnabledStandardsResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a GetEnabledStandardsResponsePrivate object with public implementation \a q.
 */
GetEnabledStandardsResponsePrivate::GetEnabledStandardsResponsePrivate(
    GetEnabledStandardsResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub GetEnabledStandards response element from \a xml.
 */
void GetEnabledStandardsResponsePrivate::parseGetEnabledStandardsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEnabledStandardsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
