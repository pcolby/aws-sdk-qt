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

#include "resetuserpasswordresponse.h"
#include "resetuserpasswordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ResetUserPasswordResponse
 * \brief The ResetUserPasswordResponse class provides an interace for FinspaceData ResetUserPassword responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::resetUserPassword
 */

/*!
 * Constructs a ResetUserPasswordResponse object for \a reply to \a request, with parent \a parent.
 */
ResetUserPasswordResponse::ResetUserPasswordResponse(
        const ResetUserPasswordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new ResetUserPasswordResponsePrivate(this), parent)
{
    setRequest(new ResetUserPasswordRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetUserPasswordRequest * ResetUserPasswordResponse::request() const
{
    Q_D(const ResetUserPasswordResponse);
    return static_cast<const ResetUserPasswordRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData ResetUserPassword \a response.
 */
void ResetUserPasswordResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetUserPasswordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::ResetUserPasswordResponsePrivate
 * \brief The ResetUserPasswordResponsePrivate class provides private implementation for ResetUserPasswordResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ResetUserPasswordResponsePrivate object with public implementation \a q.
 */
ResetUserPasswordResponsePrivate::ResetUserPasswordResponsePrivate(
    ResetUserPasswordResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData ResetUserPassword response element from \a xml.
 */
void ResetUserPasswordResponsePrivate::parseResetUserPasswordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetUserPasswordResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
