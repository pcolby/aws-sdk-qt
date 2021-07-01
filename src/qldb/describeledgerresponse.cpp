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

#include "describeledgerresponse.h"
#include "describeledgerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::DescribeLedgerResponse
 * \brief The DescribeLedgerResponse class provides an interace for QLDB DescribeLedger responses.
 *
 * \inmodule QtAwsQLDB
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
 * Parses a successful QLDB DescribeLedger \a response.
 */
void DescribeLedgerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLedgerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QLDB::DescribeLedgerResponsePrivate
 * \brief The DescribeLedgerResponsePrivate class provides private implementation for DescribeLedgerResponse.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a DescribeLedgerResponsePrivate object with public implementation \a q.
 */
DescribeLedgerResponsePrivate::DescribeLedgerResponsePrivate(
    DescribeLedgerResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a QLDB DescribeLedger response element from \a xml.
 */
void DescribeLedgerResponsePrivate::parseDescribeLedgerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLedgerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QLDB
} // namespace QtAws
