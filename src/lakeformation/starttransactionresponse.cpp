// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
