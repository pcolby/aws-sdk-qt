/*
    Copyright 2013-2018 Paul Colby

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
    Q_D(GetCheckerIpRangesResponse);
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
    /// @todo
}

} // namespace Route53
} // namespace QtAws
