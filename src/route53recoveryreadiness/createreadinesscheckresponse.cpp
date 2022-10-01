// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreadinesscheckresponse.h"
#include "createreadinesscheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateReadinessCheckResponse
 * \brief The CreateReadinessCheckResponse class provides an interace for Route53RecoveryReadiness CreateReadinessCheck responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::createReadinessCheck
 */

/*!
 * Constructs a CreateReadinessCheckResponse object for \a reply to \a request, with parent \a parent.
 */
CreateReadinessCheckResponse::CreateReadinessCheckResponse(
        const CreateReadinessCheckRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new CreateReadinessCheckResponsePrivate(this), parent)
{
    setRequest(new CreateReadinessCheckRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateReadinessCheckRequest * CreateReadinessCheckResponse::request() const
{
    Q_D(const CreateReadinessCheckResponse);
    return static_cast<const CreateReadinessCheckRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness CreateReadinessCheck \a response.
 */
void CreateReadinessCheckResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateReadinessCheckResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateReadinessCheckResponsePrivate
 * \brief The CreateReadinessCheckResponsePrivate class provides private implementation for CreateReadinessCheckResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a CreateReadinessCheckResponsePrivate object with public implementation \a q.
 */
CreateReadinessCheckResponsePrivate::CreateReadinessCheckResponsePrivate(
    CreateReadinessCheckResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness CreateReadinessCheck response element from \a xml.
 */
void CreateReadinessCheckResponsePrivate::parseCreateReadinessCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReadinessCheckResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
