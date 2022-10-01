// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceltransactionresponse.h"
#include "canceltransactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::CancelTransactionResponse
 * \brief The CancelTransactionResponse class provides an interace for LakeFormation CancelTransaction responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::cancelTransaction
 */

/*!
 * Constructs a CancelTransactionResponse object for \a reply to \a request, with parent \a parent.
 */
CancelTransactionResponse::CancelTransactionResponse(
        const CancelTransactionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new CancelTransactionResponsePrivate(this), parent)
{
    setRequest(new CancelTransactionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelTransactionRequest * CancelTransactionResponse::request() const
{
    Q_D(const CancelTransactionResponse);
    return static_cast<const CancelTransactionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation CancelTransaction \a response.
 */
void CancelTransactionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelTransactionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::CancelTransactionResponsePrivate
 * \brief The CancelTransactionResponsePrivate class provides private implementation for CancelTransactionResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a CancelTransactionResponsePrivate object with public implementation \a q.
 */
CancelTransactionResponsePrivate::CancelTransactionResponsePrivate(
    CancelTransactionResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation CancelTransaction response element from \a xml.
 */
void CancelTransactionResponsePrivate::parseCancelTransactionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelTransactionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
