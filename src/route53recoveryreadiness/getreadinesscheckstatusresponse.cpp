// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreadinesscheckstatusresponse.h"
#include "getreadinesscheckstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetReadinessCheckStatusResponse
 * \brief The GetReadinessCheckStatusResponse class provides an interace for Route53RecoveryReadiness GetReadinessCheckStatus responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getReadinessCheckStatus
 */

/*!
 * Constructs a GetReadinessCheckStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetReadinessCheckStatusResponse::GetReadinessCheckStatusResponse(
        const GetReadinessCheckStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new GetReadinessCheckStatusResponsePrivate(this), parent)
{
    setRequest(new GetReadinessCheckStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetReadinessCheckStatusRequest * GetReadinessCheckStatusResponse::request() const
{
    Q_D(const GetReadinessCheckStatusResponse);
    return static_cast<const GetReadinessCheckStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness GetReadinessCheckStatus \a response.
 */
void GetReadinessCheckStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetReadinessCheckStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetReadinessCheckStatusResponsePrivate
 * \brief The GetReadinessCheckStatusResponsePrivate class provides private implementation for GetReadinessCheckStatusResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetReadinessCheckStatusResponsePrivate object with public implementation \a q.
 */
GetReadinessCheckStatusResponsePrivate::GetReadinessCheckStatusResponsePrivate(
    GetReadinessCheckStatusResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness GetReadinessCheckStatus response element from \a xml.
 */
void GetReadinessCheckStatusResponsePrivate::parseGetReadinessCheckStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReadinessCheckStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
