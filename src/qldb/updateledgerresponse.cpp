// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateledgerresponse.h"
#include "updateledgerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::UpdateLedgerResponse
 * \brief The UpdateLedgerResponse class provides an interace for Qldb UpdateLedger responses.
 *
 * \inmodule QtAwsQldb
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
 * Parses a successful Qldb UpdateLedger \a response.
 */
void UpdateLedgerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLedgerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Qldb::UpdateLedgerResponsePrivate
 * \brief The UpdateLedgerResponsePrivate class provides private implementation for UpdateLedgerResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a UpdateLedgerResponsePrivate object with public implementation \a q.
 */
UpdateLedgerResponsePrivate::UpdateLedgerResponsePrivate(
    UpdateLedgerResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a Qldb UpdateLedger response element from \a xml.
 */
void UpdateLedgerResponsePrivate::parseUpdateLedgerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLedgerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Qldb
} // namespace QtAws
