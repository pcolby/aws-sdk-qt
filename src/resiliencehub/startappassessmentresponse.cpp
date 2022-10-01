// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startappassessmentresponse.h"
#include "startappassessmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::StartAppAssessmentResponse
 * \brief The StartAppAssessmentResponse class provides an interace for ResilienceHub StartAppAssessment responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::startAppAssessment
 */

/*!
 * Constructs a StartAppAssessmentResponse object for \a reply to \a request, with parent \a parent.
 */
StartAppAssessmentResponse::StartAppAssessmentResponse(
        const StartAppAssessmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new StartAppAssessmentResponsePrivate(this), parent)
{
    setRequest(new StartAppAssessmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartAppAssessmentRequest * StartAppAssessmentResponse::request() const
{
    Q_D(const StartAppAssessmentResponse);
    return static_cast<const StartAppAssessmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub StartAppAssessment \a response.
 */
void StartAppAssessmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartAppAssessmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::StartAppAssessmentResponsePrivate
 * \brief The StartAppAssessmentResponsePrivate class provides private implementation for StartAppAssessmentResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a StartAppAssessmentResponsePrivate object with public implementation \a q.
 */
StartAppAssessmentResponsePrivate::StartAppAssessmentResponsePrivate(
    StartAppAssessmentResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub StartAppAssessment response element from \a xml.
 */
void StartAppAssessmentResponsePrivate::parseStartAppAssessmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartAppAssessmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
