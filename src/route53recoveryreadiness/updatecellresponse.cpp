// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecellresponse.h"
#include "updatecellresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateCellResponse
 * \brief The UpdateCellResponse class provides an interace for Route53RecoveryReadiness UpdateCell responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::updateCell
 */

/*!
 * Constructs a UpdateCellResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCellResponse::UpdateCellResponse(
        const UpdateCellRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new UpdateCellResponsePrivate(this), parent)
{
    setRequest(new UpdateCellRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCellRequest * UpdateCellResponse::request() const
{
    Q_D(const UpdateCellResponse);
    return static_cast<const UpdateCellRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness UpdateCell \a response.
 */
void UpdateCellResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCellResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateCellResponsePrivate
 * \brief The UpdateCellResponsePrivate class provides private implementation for UpdateCellResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a UpdateCellResponsePrivate object with public implementation \a q.
 */
UpdateCellResponsePrivate::UpdateCellResponsePrivate(
    UpdateCellResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness UpdateCell response element from \a xml.
 */
void UpdateCellResponsePrivate::parseUpdateCellResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCellResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
