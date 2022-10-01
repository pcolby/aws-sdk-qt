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

#include "extendtransactionresponse.h"
#include "extendtransactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::ExtendTransactionResponse
 * \brief The ExtendTransactionResponse class provides an interace for LakeFormation ExtendTransaction responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::extendTransaction
 */

/*!
 * Constructs a ExtendTransactionResponse object for \a reply to \a request, with parent \a parent.
 */
ExtendTransactionResponse::ExtendTransactionResponse(
        const ExtendTransactionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new ExtendTransactionResponsePrivate(this), parent)
{
    setRequest(new ExtendTransactionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExtendTransactionRequest * ExtendTransactionResponse::request() const
{
    Q_D(const ExtendTransactionResponse);
    return static_cast<const ExtendTransactionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation ExtendTransaction \a response.
 */
void ExtendTransactionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExtendTransactionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::ExtendTransactionResponsePrivate
 * \brief The ExtendTransactionResponsePrivate class provides private implementation for ExtendTransactionResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a ExtendTransactionResponsePrivate object with public implementation \a q.
 */
ExtendTransactionResponsePrivate::ExtendTransactionResponsePrivate(
    ExtendTransactionResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation ExtendTransaction response element from \a xml.
 */
void ExtendTransactionResponsePrivate::parseExtendTransactionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExtendTransactionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
