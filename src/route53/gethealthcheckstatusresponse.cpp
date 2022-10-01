// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gethealthcheckstatusresponse.h"
#include "gethealthcheckstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHealthCheckStatusResponse
 * \brief The GetHealthCheckStatusResponse class provides an interace for Route53 GetHealthCheckStatus responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getHealthCheckStatus
 */

/*!
 * Constructs a GetHealthCheckStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetHealthCheckStatusResponse::GetHealthCheckStatusResponse(
        const GetHealthCheckStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetHealthCheckStatusResponsePrivate(this), parent)
{
    setRequest(new GetHealthCheckStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetHealthCheckStatusRequest * GetHealthCheckStatusResponse::request() const
{
    Q_D(const GetHealthCheckStatusResponse);
    return static_cast<const GetHealthCheckStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetHealthCheckStatus \a response.
 */
void GetHealthCheckStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetHealthCheckStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetHealthCheckStatusResponsePrivate
 * \brief The GetHealthCheckStatusResponsePrivate class provides private implementation for GetHealthCheckStatusResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetHealthCheckStatusResponsePrivate object with public implementation \a q.
 */
GetHealthCheckStatusResponsePrivate::GetHealthCheckStatusResponsePrivate(
    GetHealthCheckStatusResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetHealthCheckStatus response element from \a xml.
 */
void GetHealthCheckStatusResponsePrivate::parseGetHealthCheckStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHealthCheckStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
