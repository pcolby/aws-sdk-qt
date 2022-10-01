/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
