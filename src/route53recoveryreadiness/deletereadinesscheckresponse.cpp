// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereadinesscheckresponse.h"
#include "deletereadinesscheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteReadinessCheckResponse
 * \brief The DeleteReadinessCheckResponse class provides an interace for Route53RecoveryReadiness DeleteReadinessCheck responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::deleteReadinessCheck
 */

/*!
 * Constructs a DeleteReadinessCheckResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReadinessCheckResponse::DeleteReadinessCheckResponse(
        const DeleteReadinessCheckRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new DeleteReadinessCheckResponsePrivate(this), parent)
{
    setRequest(new DeleteReadinessCheckRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReadinessCheckRequest * DeleteReadinessCheckResponse::request() const
{
    Q_D(const DeleteReadinessCheckResponse);
    return static_cast<const DeleteReadinessCheckRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness DeleteReadinessCheck \a response.
 */
void DeleteReadinessCheckResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReadinessCheckResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteReadinessCheckResponsePrivate
 * \brief The DeleteReadinessCheckResponsePrivate class provides private implementation for DeleteReadinessCheckResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a DeleteReadinessCheckResponsePrivate object with public implementation \a q.
 */
DeleteReadinessCheckResponsePrivate::DeleteReadinessCheckResponsePrivate(
    DeleteReadinessCheckResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness DeleteReadinessCheck response element from \a xml.
 */
void DeleteReadinessCheckResponsePrivate::parseDeleteReadinessCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReadinessCheckResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
