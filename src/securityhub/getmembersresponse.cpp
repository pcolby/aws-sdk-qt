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

#include "getmembersresponse.h"
#include "getmembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::GetMembersResponse
 * \brief The GetMembersResponse class provides an interace for SecurityHub GetMembers responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::getMembers
 */

/*!
 * Constructs a GetMembersResponse object for \a reply to \a request, with parent \a parent.
 */
GetMembersResponse::GetMembersResponse(
        const GetMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new GetMembersResponsePrivate(this), parent)
{
    setRequest(new GetMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMembersRequest * GetMembersResponse::request() const
{
    Q_D(const GetMembersResponse);
    return static_cast<const GetMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecurityHub GetMembers \a response.
 */
void GetMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::GetMembersResponsePrivate
 * \brief The GetMembersResponsePrivate class provides private implementation for GetMembersResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a GetMembersResponsePrivate object with public implementation \a q.
 */
GetMembersResponsePrivate::GetMembersResponsePrivate(
    GetMembersResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub GetMembers response element from \a xml.
 */
void GetMembersResponsePrivate::parseGetMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMembersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
