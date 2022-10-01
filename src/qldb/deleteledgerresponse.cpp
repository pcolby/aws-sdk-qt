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

#include "deleteledgerresponse.h"
#include "deleteledgerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::DeleteLedgerResponse
 * \brief The DeleteLedgerResponse class provides an interace for Qldb DeleteLedger responses.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::deleteLedger
 */

/*!
 * Constructs a DeleteLedgerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLedgerResponse::DeleteLedgerResponse(
        const DeleteLedgerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new DeleteLedgerResponsePrivate(this), parent)
{
    setRequest(new DeleteLedgerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLedgerRequest * DeleteLedgerResponse::request() const
{
    Q_D(const DeleteLedgerResponse);
    return static_cast<const DeleteLedgerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Qldb DeleteLedger \a response.
 */
void DeleteLedgerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLedgerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Qldb::DeleteLedgerResponsePrivate
 * \brief The DeleteLedgerResponsePrivate class provides private implementation for DeleteLedgerResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a DeleteLedgerResponsePrivate object with public implementation \a q.
 */
DeleteLedgerResponsePrivate::DeleteLedgerResponsePrivate(
    DeleteLedgerResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a Qldb DeleteLedger response element from \a xml.
 */
void DeleteLedgerResponsePrivate::parseDeleteLedgerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLedgerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Qldb
} // namespace QtAws
