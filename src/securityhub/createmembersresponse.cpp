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

#include "createmembersresponse.h"
#include "createmembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::CreateMembersResponse
 * \brief The CreateMembersResponse class provides an interace for SecurityHub CreateMembers responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::createMembers
 */

/*!
 * Constructs a CreateMembersResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMembersResponse::CreateMembersResponse(
        const CreateMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new CreateMembersResponsePrivate(this), parent)
{
    setRequest(new CreateMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMembersRequest * CreateMembersResponse::request() const
{
    Q_D(const CreateMembersResponse);
    return static_cast<const CreateMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecurityHub CreateMembers \a response.
 */
void CreateMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::CreateMembersResponsePrivate
 * \brief The CreateMembersResponsePrivate class provides private implementation for CreateMembersResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a CreateMembersResponsePrivate object with public implementation \a q.
 */
CreateMembersResponsePrivate::CreateMembersResponsePrivate(
    CreateMembersResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub CreateMembers response element from \a xml.
 */
void CreateMembersResponsePrivate::parseCreateMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMembersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
