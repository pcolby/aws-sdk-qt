// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeledgerresponse.h"
#include "describeledgerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::DescribeLedgerResponse
 * \brief The DescribeLedgerResponse class provides an interace for Qldb DescribeLedger responses.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::describeLedger
 */

/*!
 * Constructs a DescribeLedgerResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLedgerResponse::DescribeLedgerResponse(
        const DescribeLedgerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new DescribeLedgerResponsePrivate(this), parent)
{
    setRequest(new DescribeLedgerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLedgerRequest * DescribeLedgerResponse::request() const
{
    Q_D(const DescribeLedgerResponse);
    return static_cast<const DescribeLedgerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Qldb DescribeLedger \a response.
 */
void DescribeLedgerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLedgerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Qldb::DescribeLedgerResponsePrivate
 * \brief The DescribeLedgerResponsePrivate class provides private implementation for DescribeLedgerResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a DescribeLedgerResponsePrivate object with public implementation \a q.
 */
DescribeLedgerResponsePrivate::DescribeLedgerResponsePrivate(
    DescribeLedgerResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a Qldb DescribeLedger response element from \a xml.
 */
void DescribeLedgerResponsePrivate::parseDescribeLedgerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLedgerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Qldb
} // namespace QtAws
