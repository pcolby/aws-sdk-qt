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

#include "starttransactionresponse.h"
#include "starttransactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::StartTransactionResponse
 * \brief The StartTransactionResponse class provides an interace for LakeFormation StartTransaction responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::startTransaction
 */

/*!
 * Constructs a StartTransactionResponse object for \a reply to \a request, with parent \a parent.
 */
StartTransactionResponse::StartTransactionResponse(
        const StartTransactionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new StartTransactionResponsePrivate(this), parent)
{
    setRequest(new StartTransactionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartTransactionRequest * StartTransactionResponse::request() const
{
    Q_D(const StartTransactionResponse);
    return static_cast<const StartTransactionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation StartTransaction \a response.
 */
void StartTransactionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartTransactionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::StartTransactionResponsePrivate
 * \brief The StartTransactionResponsePrivate class provides private implementation for StartTransactionResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a StartTransactionResponsePrivate object with public implementation \a q.
 */
StartTransactionResponsePrivate::StartTransactionResponsePrivate(
    StartTransactionResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation StartTransaction response element from \a xml.
 */
void StartTransactionResponsePrivate::parseStartTransactionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTransactionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
