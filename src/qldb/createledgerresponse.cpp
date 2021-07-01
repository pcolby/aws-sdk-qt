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

#include "createledgerresponse.h"
#include "createledgerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::CreateLedgerResponse
 * \brief The CreateLedgerResponse class provides an interace for QLDB CreateLedger responses.
 *
 * \inmodule QtAwsQLDB
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::createLedger
 */

/*!
 * Constructs a CreateLedgerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLedgerResponse::CreateLedgerResponse(
        const CreateLedgerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new CreateLedgerResponsePrivate(this), parent)
{
    setRequest(new CreateLedgerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLedgerRequest * CreateLedgerResponse::request() const
{
    Q_D(const CreateLedgerResponse);
    return static_cast<const CreateLedgerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QLDB CreateLedger \a response.
 */
void CreateLedgerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLedgerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QLDB::CreateLedgerResponsePrivate
 * \brief The CreateLedgerResponsePrivate class provides private implementation for CreateLedgerResponse.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a CreateLedgerResponsePrivate object with public implementation \a q.
 */
CreateLedgerResponsePrivate::CreateLedgerResponsePrivate(
    CreateLedgerResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a QLDB CreateLedger response element from \a xml.
 */
void CreateLedgerResponsePrivate::parseCreateLedgerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLedgerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QLDB
} // namespace QtAws
