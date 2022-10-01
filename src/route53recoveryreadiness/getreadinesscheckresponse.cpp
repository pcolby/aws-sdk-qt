// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreadinesscheckresponse.h"
#include "getreadinesscheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetReadinessCheckResponse
 * \brief The GetReadinessCheckResponse class provides an interace for Route53RecoveryReadiness GetReadinessCheck responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getReadinessCheck
 */

/*!
 * Constructs a GetReadinessCheckResponse object for \a reply to \a request, with parent \a parent.
 */
GetReadinessCheckResponse::GetReadinessCheckResponse(
        const GetReadinessCheckRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new GetReadinessCheckResponsePrivate(this), parent)
{
    setRequest(new GetReadinessCheckRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetReadinessCheckRequest * GetReadinessCheckResponse::request() const
{
    Q_D(const GetReadinessCheckResponse);
    return static_cast<const GetReadinessCheckRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness GetReadinessCheck \a response.
 */
void GetReadinessCheckResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetReadinessCheckResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetReadinessCheckResponsePrivate
 * \brief The GetReadinessCheckResponsePrivate class provides private implementation for GetReadinessCheckResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetReadinessCheckResponsePrivate object with public implementation \a q.
 */
GetReadinessCheckResponsePrivate::GetReadinessCheckResponsePrivate(
    GetReadinessCheckResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness GetReadinessCheck response element from \a xml.
 */
void GetReadinessCheckResponsePrivate::parseGetReadinessCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReadinessCheckResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
