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

#include "updateledgerpermissionsmoderesponse.h"
#include "updateledgerpermissionsmoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::UpdateLedgerPermissionsModeResponse
 * \brief The UpdateLedgerPermissionsModeResponse class provides an interace for QLDB UpdateLedgerPermissionsMode responses.
 *
 * \inmodule QtAwsQLDB
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::updateLedgerPermissionsMode
 */

/*!
 * Constructs a UpdateLedgerPermissionsModeResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLedgerPermissionsModeResponse::UpdateLedgerPermissionsModeResponse(
        const UpdateLedgerPermissionsModeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new UpdateLedgerPermissionsModeResponsePrivate(this), parent)
{
    setRequest(new UpdateLedgerPermissionsModeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLedgerPermissionsModeRequest * UpdateLedgerPermissionsModeResponse::request() const
{
    return static_cast<const UpdateLedgerPermissionsModeRequest *>(QldbResponse::request());
}

/*!
 * \reimp
 * Parses a successful QLDB UpdateLedgerPermissionsMode \a response.
 */
void UpdateLedgerPermissionsModeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLedgerPermissionsModeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QLDB::UpdateLedgerPermissionsModeResponsePrivate
 * \brief The UpdateLedgerPermissionsModeResponsePrivate class provides private implementation for UpdateLedgerPermissionsModeResponse.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a UpdateLedgerPermissionsModeResponsePrivate object with public implementation \a q.
 */
UpdateLedgerPermissionsModeResponsePrivate::UpdateLedgerPermissionsModeResponsePrivate(
    UpdateLedgerPermissionsModeResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a QLDB UpdateLedgerPermissionsMode response element from \a xml.
 */
void UpdateLedgerPermissionsModeResponsePrivate::parseUpdateLedgerPermissionsModeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLedgerPermissionsModeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QLDB
} // namespace QtAws
