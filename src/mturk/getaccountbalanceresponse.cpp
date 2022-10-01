// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccountbalanceresponse.h"
#include "getaccountbalanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::GetAccountBalanceResponse
 * \brief The GetAccountBalanceResponse class provides an interace for MTurk GetAccountBalance responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::getAccountBalance
 */

/*!
 * Constructs a GetAccountBalanceResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccountBalanceResponse::GetAccountBalanceResponse(
        const GetAccountBalanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new GetAccountBalanceResponsePrivate(this), parent)
{
    setRequest(new GetAccountBalanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccountBalanceRequest * GetAccountBalanceResponse::request() const
{
    Q_D(const GetAccountBalanceResponse);
    return static_cast<const GetAccountBalanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk GetAccountBalance \a response.
 */
void GetAccountBalanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccountBalanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::GetAccountBalanceResponsePrivate
 * \brief The GetAccountBalanceResponsePrivate class provides private implementation for GetAccountBalanceResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a GetAccountBalanceResponsePrivate object with public implementation \a q.
 */
GetAccountBalanceResponsePrivate::GetAccountBalanceResponsePrivate(
    GetAccountBalanceResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk GetAccountBalance response element from \a xml.
 */
void GetAccountBalanceResponsePrivate::parseGetAccountBalanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountBalanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
