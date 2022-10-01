// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gethealthcheckresponse.h"
#include "gethealthcheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHealthCheckResponse
 * \brief The GetHealthCheckResponse class provides an interace for Route53 GetHealthCheck responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getHealthCheck
 */

/*!
 * Constructs a GetHealthCheckResponse object for \a reply to \a request, with parent \a parent.
 */
GetHealthCheckResponse::GetHealthCheckResponse(
        const GetHealthCheckRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetHealthCheckResponsePrivate(this), parent)
{
    setRequest(new GetHealthCheckRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetHealthCheckRequest * GetHealthCheckResponse::request() const
{
    Q_D(const GetHealthCheckResponse);
    return static_cast<const GetHealthCheckRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetHealthCheck \a response.
 */
void GetHealthCheckResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetHealthCheckResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetHealthCheckResponsePrivate
 * \brief The GetHealthCheckResponsePrivate class provides private implementation for GetHealthCheckResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetHealthCheckResponsePrivate object with public implementation \a q.
 */
GetHealthCheckResponsePrivate::GetHealthCheckResponsePrivate(
    GetHealthCheckResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetHealthCheck response element from \a xml.
 */
void GetHealthCheckResponsePrivate::parseGetHealthCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHealthCheckResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
