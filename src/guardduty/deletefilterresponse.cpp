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

#include "deletefilterresponse.h"
#include "deletefilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::DeleteFilterResponse
 * \brief The DeleteFilterResponse class provides an interace for GuardDuty DeleteFilter responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::deleteFilter
 */

/*!
 * Constructs a DeleteFilterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFilterResponse::DeleteFilterResponse(
        const DeleteFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new DeleteFilterResponsePrivate(this), parent)
{
    setRequest(new DeleteFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFilterRequest * DeleteFilterResponse::request() const
{
    Q_D(const DeleteFilterResponse);
    return static_cast<const DeleteFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty DeleteFilter \a response.
 */
void DeleteFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::DeleteFilterResponsePrivate
 * \brief The DeleteFilterResponsePrivate class provides private implementation for DeleteFilterResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a DeleteFilterResponsePrivate object with public implementation \a q.
 */
DeleteFilterResponsePrivate::DeleteFilterResponsePrivate(
    DeleteFilterResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty DeleteFilter response element from \a xml.
 */
void DeleteFilterResponsePrivate::parseDeleteFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFilterResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
