// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const GetOperationDetailResponse);
    return static_cast<const GetOperationDetailRequest *>(d->request);
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
