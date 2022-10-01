// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresourcesetresponse.h"
#include "updateresourcesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateResourceSetResponse
 * \brief The UpdateResourceSetResponse class provides an interace for Route53RecoveryReadiness UpdateResourceSet responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::updateResourceSet
 */

/*!
 * Constructs a UpdateResourceSetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateResourceSetResponse::UpdateResourceSetResponse(
        const UpdateResourceSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new UpdateResourceSetResponsePrivate(this), parent)
{
    setRequest(new UpdateResourceSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateResourceSetRequest * UpdateResourceSetResponse::request() const
{
    Q_D(const UpdateResourceSetResponse);
    return static_cast<const UpdateResourceSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness UpdateResourceSet \a response.
 */
void UpdateResourceSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateResourceSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateResourceSetResponsePrivate
 * \brief The UpdateResourceSetResponsePrivate class provides private implementation for UpdateResourceSetResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a UpdateResourceSetResponsePrivate object with public implementation \a q.
 */
UpdateResourceSetResponsePrivate::UpdateResourceSetResponsePrivate(
    UpdateResourceSetResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness UpdateResourceSet response element from \a xml.
 */
void UpdateResourceSetResponsePrivate::parseUpdateResourceSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResourceSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
