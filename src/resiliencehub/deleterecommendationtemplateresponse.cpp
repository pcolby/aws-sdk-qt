// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterecommendationtemplateresponse.h"
#include "deleterecommendationtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::DeleteRecommendationTemplateResponse
 * \brief The DeleteRecommendationTemplateResponse class provides an interace for ResilienceHub DeleteRecommendationTemplate responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::deleteRecommendationTemplate
 */

/*!
 * Constructs a DeleteRecommendationTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRecommendationTemplateResponse::DeleteRecommendationTemplateResponse(
        const DeleteRecommendationTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new DeleteRecommendationTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteRecommendationTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRecommendationTemplateRequest * DeleteRecommendationTemplateResponse::request() const
{
    Q_D(const DeleteRecommendationTemplateResponse);
    return static_cast<const DeleteRecommendationTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub DeleteRecommendationTemplate \a response.
 */
void DeleteRecommendationTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRecommendationTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::DeleteRecommendationTemplateResponsePrivate
 * \brief The DeleteRecommendationTemplateResponsePrivate class provides private implementation for DeleteRecommendationTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a DeleteRecommendationTemplateResponsePrivate object with public implementation \a q.
 */
DeleteRecommendationTemplateResponsePrivate::DeleteRecommendationTemplateResponsePrivate(
    DeleteRecommendationTemplateResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub DeleteRecommendationTemplate response element from \a xml.
 */
void DeleteRecommendationTemplateResponsePrivate::parseDeleteRecommendationTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRecommendationTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
