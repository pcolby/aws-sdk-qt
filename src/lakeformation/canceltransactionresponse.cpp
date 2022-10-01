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
