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

#include "deletemembersresponse.h"
#include "deletemembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::DeleteMembersResponse
 * \brief The DeleteMembersResponse class provides an interace for SecurityHub DeleteMembers responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::deleteMembers
 */

/*!
 * Constructs a DeleteMembersResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMembersResponse::DeleteMembersResponse(
        const DeleteMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new DeleteMembersResponsePrivate(this), parent)
{
    setRequest(new DeleteMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMembersRequest * DeleteMembersResponse::request() const
{
    Q_D(const DeleteMembersResponse);
    return static_cast<const DeleteMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecurityHub DeleteMembers \a response.
 */
void DeleteMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::DeleteMembersResponsePrivate
 * \brief The DeleteMembersResponsePrivate class provides private implementation for DeleteMembersResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a DeleteMembersResponsePrivate object with public implementation \a q.
 */
DeleteMembersResponsePrivate::DeleteMembersResponsePrivate(
    DeleteMembersResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub DeleteMembers response element from \a xml.
 */
void DeleteMembersResponsePrivate::parseDeleteMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMembersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
