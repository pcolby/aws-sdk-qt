// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreusabledelegationsetlimitresponse.h"
#include "getreusabledelegationsetlimitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetReusableDelegationSetLimitResponse
 * \brief The GetReusableDelegationSetLimitResponse class provides an interace for Route53 GetReusableDelegationSetLimit responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getReusableDelegationSetLimit
 */

/*!
 * Constructs a GetReusableDelegationSetLimitResponse object for \a reply to \a request, with parent \a parent.
 */
GetReusableDelegationSetLimitResponse::GetReusableDelegationSetLimitResponse(
        const GetReusableDelegationSetLimitRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetReusableDelegationSetLimitResponsePrivate(this), parent)
{
    setRequest(new GetReusableDelegationSetLimitRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetReusableDelegationSetLimitRequest * GetReusableDelegationSetLimitResponse::request() const
{
    Q_D(const GetReusableDelegationSetLimitResponse);
    return static_cast<const GetReusableDelegationSetLimitRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetReusableDelegationSetLimit \a response.
 */
void GetReusableDelegationSetLimitResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetReusableDelegationSetLimitResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetReusableDelegationSetLimitResponsePrivate
 * \brief The GetReusableDelegationSetLimitResponsePrivate class provides private implementation for GetReusableDelegationSetLimitResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetReusableDelegationSetLimitResponsePrivate object with public implementation \a q.
 */
GetReusableDelegationSetLimitResponsePrivate::GetReusableDelegationSetLimitResponsePrivate(
    GetReusableDelegationSetLimitResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetReusableDelegationSetLimit response element from \a xml.
 */
void GetReusableDelegationSetLimitResponsePrivate::parseGetReusableDelegationSetLimitResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReusableDelegationSetLimitResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
