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

#include "disableuserresponse.h"
#include "disableuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::DisableUserResponse
 * \brief The DisableUserResponse class provides an interace for FinspaceData DisableUser responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::disableUser
 */

/*!
 * Constructs a DisableUserResponse object for \a reply to \a request, with parent \a parent.
 */
DisableUserResponse::DisableUserResponse(
        const DisableUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new DisableUserResponsePrivate(this), parent)
{
    setRequest(new DisableUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableUserRequest * DisableUserResponse::request() const
{
    Q_D(const DisableUserResponse);
    return static_cast<const DisableUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData DisableUser \a response.
 */
void DisableUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::DisableUserResponsePrivate
 * \brief The DisableUserResponsePrivate class provides private implementation for DisableUserResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a DisableUserResponsePrivate object with public implementation \a q.
 */
DisableUserResponsePrivate::DisableUserResponsePrivate(
    DisableUserResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData DisableUser response element from \a xml.
 */
void DisableUserResponsePrivate::parseDisableUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
