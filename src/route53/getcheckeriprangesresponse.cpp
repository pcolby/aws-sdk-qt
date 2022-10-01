// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcheckeriprangesresponse.h"
#include "getcheckeriprangesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetCheckerIpRangesResponse
 * \brief The GetCheckerIpRangesResponse class provides an interace for Route53 GetCheckerIpRanges responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getCheckerIpRanges
 */

/*!
 * Constructs a GetCheckerIpRangesResponse object for \a reply to \a request, with parent \a parent.
 */
GetCheckerIpRangesResponse::GetCheckerIpRangesResponse(
        const GetCheckerIpRangesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetCheckerIpRangesResponsePrivate(this), parent)
{
    setRequest(new GetCheckerIpRangesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCheckerIpRangesRequest * GetCheckerIpRangesResponse::request() const
{
    Q_D(const GetCheckerIpRangesResponse);
    return static_cast<const GetCheckerIpRangesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetCheckerIpRanges \a response.
 */
void GetCheckerIpRangesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCheckerIpRangesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetCheckerIpRangesResponsePrivate
 * \brief The GetCheckerIpRangesResponsePrivate class provides private implementation for GetCheckerIpRangesResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetCheckerIpRangesResponsePrivate object with public implementation \a q.
 */
GetCheckerIpRangesResponsePrivate::GetCheckerIpRangesResponsePrivate(
    GetCheckerIpRangesResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetCheckerIpRanges response element from \a xml.
 */
void GetCheckerIpRangesResponsePrivate::parseGetCheckerIpRangesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCheckerIpRangesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
