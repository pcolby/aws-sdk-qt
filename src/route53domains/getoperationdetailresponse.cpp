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

#include "getoperationdetailresponse.h"
#include "getoperationdetailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::GetOperationDetailResponse
 * \brief The GetOperationDetailResponse class provides an interace for Route53Domains GetOperationDetail responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::getOperationDetail
 */

/*!
 * Constructs a GetOperationDetailResponse object for \a reply to \a request, with parent \a parent.
 */
GetOperationDetailResponse::GetOperationDetailResponse(
        const GetOperationDetailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new GetOperationDetailResponsePrivate(this), parent)
{
    setRequest(new GetOperationDetailRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOperationDetailRequest * GetOperationDetailResponse::request() const
{
    return static_cast<const GetOperationDetailRequest *>(Route53DomainsResponse::request());
}

/*!
 * \reimp
 * Parses a successful Route53Domains GetOperationDetail \a response.
 */
void GetOperationDetailResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOperationDetailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::GetOperationDetailResponsePrivate
 * \brief The GetOperationDetailResponsePrivate class provides private implementation for GetOperationDetailResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a GetOperationDetailResponsePrivate object with public implementation \a q.
 */
GetOperationDetailResponsePrivate::GetOperationDetailResponsePrivate(
    GetOperationDetailResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains GetOperationDetail response element from \a xml.
 */
void GetOperationDetailResponsePrivate::parseGetOperationDetailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOperationDetailResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
