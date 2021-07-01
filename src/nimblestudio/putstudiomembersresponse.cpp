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

#include "putstudiomembersresponse.h"
#include "putstudiomembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::PutStudioMembersResponse
 * \brief The PutStudioMembersResponse class provides an interace for NimbleStudio PutStudioMembers responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::putStudioMembers
 */

/*!
 * Constructs a PutStudioMembersResponse object for \a reply to \a request, with parent \a parent.
 */
PutStudioMembersResponse::PutStudioMembersResponse(
        const PutStudioMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new PutStudioMembersResponsePrivate(this), parent)
{
    setRequest(new PutStudioMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutStudioMembersRequest * PutStudioMembersResponse::request() const
{
    Q_D(const PutStudioMembersResponse);
    return static_cast<const PutStudioMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio PutStudioMembers \a response.
 */
void PutStudioMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutStudioMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::PutStudioMembersResponsePrivate
 * \brief The PutStudioMembersResponsePrivate class provides private implementation for PutStudioMembersResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a PutStudioMembersResponsePrivate object with public implementation \a q.
 */
PutStudioMembersResponsePrivate::PutStudioMembersResponsePrivate(
    PutStudioMembersResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio PutStudioMembers response element from \a xml.
 */
void PutStudioMembersResponsePrivate::parsePutStudioMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutStudioMembersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
