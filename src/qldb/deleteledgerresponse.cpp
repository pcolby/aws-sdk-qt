// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
