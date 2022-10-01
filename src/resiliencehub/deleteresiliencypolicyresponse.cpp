// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresiliencypolicyresponse.h"
#include "deleteresiliencypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::DeleteResiliencyPolicyResponse
 * \brief The DeleteResiliencyPolicyResponse class provides an interace for ResilienceHub DeleteResiliencyPolicy responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::deleteResiliencyPolicy
 */

/*!
 * Constructs a DeleteResiliencyPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteResiliencyPolicyResponse::DeleteResiliencyPolicyResponse(
        const DeleteResiliencyPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new DeleteResiliencyPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteResiliencyPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteResiliencyPolicyRequest * DeleteResiliencyPolicyResponse::request() const
{
    Q_D(const DeleteResiliencyPolicyResponse);
    return static_cast<const DeleteResiliencyPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub DeleteResiliencyPolicy \a response.
 */
void DeleteResiliencyPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteResiliencyPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::DeleteResiliencyPolicyResponsePrivate
 * \brief The DeleteResiliencyPolicyResponsePrivate class provides private implementation for DeleteResiliencyPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a DeleteResiliencyPolicyResponsePrivate object with public implementation \a q.
 */
DeleteResiliencyPolicyResponsePrivate::DeleteResiliencyPolicyResponsePrivate(
    DeleteResiliencyPolicyResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub DeleteResiliencyPolicy response element from \a xml.
 */
void DeleteResiliencyPolicyResponsePrivate::parseDeleteResiliencyPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResiliencyPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
