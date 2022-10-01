// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createledgerresponse.h"
#include "createledgerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::CreateLedgerResponse
 * \brief The CreateLedgerResponse class provides an interace for Qldb CreateLedger responses.
 *
 * \inmodule QtAwsQldb
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
 * Parses a successful Qldb CreateLedger \a response.
 */
void CreateLedgerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLedgerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Qldb::CreateLedgerResponsePrivate
 * \brief The CreateLedgerResponsePrivate class provides private implementation for CreateLedgerResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a CreateLedgerResponsePrivate object with public implementation \a q.
 */
CreateLedgerResponsePrivate::CreateLedgerResponsePrivate(
    CreateLedgerResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a Qldb CreateLedger response element from \a xml.
 */
void CreateLedgerResponsePrivate::parseCreateLedgerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLedgerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Qldb
} // namespace QtAws
