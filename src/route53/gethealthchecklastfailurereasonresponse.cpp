// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gethealthchecklastfailurereasonresponse.h"
#include "gethealthchecklastfailurereasonresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHealthCheckLastFailureReasonResponse
 * \brief The GetHealthCheckLastFailureReasonResponse class provides an interace for Route53 GetHealthCheckLastFailureReason responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getHealthCheckLastFailureReason
 */

/*!
 * Constructs a GetHealthCheckLastFailureReasonResponse object for \a reply to \a request, with parent \a parent.
 */
GetHealthCheckLastFailureReasonResponse::GetHealthCheckLastFailureReasonResponse(
        const GetHealthCheckLastFailureReasonRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetHealthCheckLastFailureReasonResponsePrivate(this), parent)
{
    setRequest(new GetHealthCheckLastFailureReasonRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetHealthCheckLastFailureReasonRequest * GetHealthCheckLastFailureReasonResponse::request() const
{
    Q_D(const GetHealthCheckLastFailureReasonResponse);
    return static_cast<const GetHealthCheckLastFailureReasonRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetHealthCheckLastFailureReason \a response.
 */
void GetHealthCheckLastFailureReasonResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetHealthCheckLastFailureReasonResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetHealthCheckLastFailureReasonResponsePrivate
 * \brief The GetHealthCheckLastFailureReasonResponsePrivate class provides private implementation for GetHealthCheckLastFailureReasonResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetHealthCheckLastFailureReasonResponsePrivate object with public implementation \a q.
 */
GetHealthCheckLastFailureReasonResponsePrivate::GetHealthCheckLastFailureReasonResponsePrivate(
    GetHealthCheckLastFailureReasonResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetHealthCheckLastFailureReason response element from \a xml.
 */
void GetHealthCheckLastFailureReasonResponsePrivate::parseGetHealthCheckLastFailureReasonResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHealthCheckLastFailureReasonResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
