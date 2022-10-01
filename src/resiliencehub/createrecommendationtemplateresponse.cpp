// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrecommendationtemplateresponse.h"
#include "createrecommendationtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::CreateRecommendationTemplateResponse
 * \brief The CreateRecommendationTemplateResponse class provides an interace for ResilienceHub CreateRecommendationTemplate responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::createRecommendationTemplate
 */

/*!
 * Constructs a CreateRecommendationTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRecommendationTemplateResponse::CreateRecommendationTemplateResponse(
        const CreateRecommendationTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new CreateRecommendationTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateRecommendationTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRecommendationTemplateRequest * CreateRecommendationTemplateResponse::request() const
{
    Q_D(const CreateRecommendationTemplateResponse);
    return static_cast<const CreateRecommendationTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub CreateRecommendationTemplate \a response.
 */
void CreateRecommendationTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRecommendationTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::CreateRecommendationTemplateResponsePrivate
 * \brief The CreateRecommendationTemplateResponsePrivate class provides private implementation for CreateRecommendationTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a CreateRecommendationTemplateResponsePrivate object with public implementation \a q.
 */
CreateRecommendationTemplateResponsePrivate::CreateRecommendationTemplateResponsePrivate(
    CreateRecommendationTemplateResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub CreateRecommendationTemplate response element from \a xml.
 */
void CreateRecommendationTemplateResponsePrivate::parseCreateRecommendationTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRecommendationTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
