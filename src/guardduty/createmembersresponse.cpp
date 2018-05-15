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
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::CreateMembersResponse
 * \brief The CreateMembersResponse class provides an interace for GuardDuty CreateMembers responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::createMembers
 */

/*!
 * Constructs a CreateMembersResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMembersResponse::CreateMembersResponse(
        const CreateMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new CreateMembersResponsePrivate(this), parent)
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
 * Parses a successful GuardDuty CreateMembers \a response.
 */
void CreateMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::CreateMembersResponsePrivate
 * \brief The CreateMembersResponsePrivate class provides private implementation for CreateMembersResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a CreateMembersResponsePrivate object with public implementation \a q.
 */
CreateMembersResponsePrivate::CreateMembersResponsePrivate(
    CreateMembersResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty CreateMembers response element from \a xml.
 */
void CreateMembersResponsePrivate::parseCreateMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMembersResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
