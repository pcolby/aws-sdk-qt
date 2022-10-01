// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createresiliencypolicyresponse.h"
#include "createresiliencypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::CreateResiliencyPolicyResponse
 * \brief The CreateResiliencyPolicyResponse class provides an interace for ResilienceHub CreateResiliencyPolicy responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::createResiliencyPolicy
 */

/*!
 * Constructs a CreateResiliencyPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateResiliencyPolicyResponse::CreateResiliencyPolicyResponse(
        const CreateResiliencyPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new CreateResiliencyPolicyResponsePrivate(this), parent)
{
    setRequest(new CreateResiliencyPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateResiliencyPolicyRequest * CreateResiliencyPolicyResponse::request() const
{
    Q_D(const CreateResiliencyPolicyResponse);
    return static_cast<const CreateResiliencyPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub CreateResiliencyPolicy \a response.
 */
void CreateResiliencyPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateResiliencyPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::CreateResiliencyPolicyResponsePrivate
 * \brief The CreateResiliencyPolicyResponsePrivate class provides private implementation for CreateResiliencyPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a CreateResiliencyPolicyResponsePrivate object with public implementation \a q.
 */
CreateResiliencyPolicyResponsePrivate::CreateResiliencyPolicyResponsePrivate(
    CreateResiliencyPolicyResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub CreateResiliencyPolicy response element from \a xml.
 */
void CreateResiliencyPolicyResponsePrivate::parseCreateResiliencyPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResiliencyPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
