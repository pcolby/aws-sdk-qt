// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccountlimitresponse.h"
#include "getaccountlimitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetAccountLimitResponse
 * \brief The GetAccountLimitResponse class provides an interace for Route53 GetAccountLimit responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getAccountLimit
 */

/*!
 * Constructs a GetAccountLimitResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccountLimitResponse::GetAccountLimitResponse(
        const GetAccountLimitRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetAccountLimitResponsePrivate(this), parent)
{
    setRequest(new GetAccountLimitRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccountLimitRequest * GetAccountLimitResponse::request() const
{
    Q_D(const GetAccountLimitResponse);
    return static_cast<const GetAccountLimitRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetAccountLimit \a response.
 */
void GetAccountLimitResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccountLimitResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetAccountLimitResponsePrivate
 * \brief The GetAccountLimitResponsePrivate class provides private implementation for GetAccountLimitResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetAccountLimitResponsePrivate object with public implementation \a q.
 */
GetAccountLimitResponsePrivate::GetAccountLimitResponsePrivate(
    GetAccountLimitResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetAccountLimit response element from \a xml.
 */
void GetAccountLimitResponsePrivate::parseGetAccountLimitResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountLimitResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
