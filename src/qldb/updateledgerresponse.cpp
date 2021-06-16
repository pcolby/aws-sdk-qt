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

#include "updateledgerresponse.h"
#include "updateledgerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::UpdateLedgerResponse
 * \brief The UpdateLedgerResponse class provides an interace for QLDB UpdateLedger responses.
 *
 * \inmodule QtAwsQLDB
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::updateLedger
 */

/*!
 * Constructs a UpdateLedgerResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLedgerResponse::UpdateLedgerResponse(
        const UpdateLedgerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new UpdateLedgerResponsePrivate(this), parent)
{
    setRequest(new UpdateLedgerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLedgerRequest * UpdateLedgerResponse::request() const
{
    Q_D(const UpdateLedgerResponse);
    return static_cast<const UpdateLedgerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QLDB UpdateLedger \a response.
 */
void UpdateLedgerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLedgerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QLDB::UpdateLedgerResponsePrivate
 * \brief The UpdateLedgerResponsePrivate class provides private implementation for UpdateLedgerResponse.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a UpdateLedgerResponsePrivate object with public implementation \a q.
 */
UpdateLedgerResponsePrivate::UpdateLedgerResponsePrivate(
    UpdateLedgerResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a QLDB UpdateLedger response element from \a xml.
 */
void UpdateLedgerResponsePrivate::parseUpdateLedgerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLedgerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QLDB
} // namespace QtAws
