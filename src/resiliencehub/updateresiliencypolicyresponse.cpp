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

#include "updateresiliencypolicyresponse.h"
#include "updateresiliencypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::UpdateResiliencyPolicyResponse
 * \brief The UpdateResiliencyPolicyResponse class provides an interace for ResilienceHub UpdateResiliencyPolicy responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::updateResiliencyPolicy
 */

/*!
 * Constructs a UpdateResiliencyPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateResiliencyPolicyResponse::UpdateResiliencyPolicyResponse(
        const UpdateResiliencyPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new UpdateResiliencyPolicyResponsePrivate(this), parent)
{
    setRequest(new UpdateResiliencyPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateResiliencyPolicyRequest * UpdateResiliencyPolicyResponse::request() const
{
    Q_D(const UpdateResiliencyPolicyResponse);
    return static_cast<const UpdateResiliencyPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub UpdateResiliencyPolicy \a response.
 */
void UpdateResiliencyPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateResiliencyPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::UpdateResiliencyPolicyResponsePrivate
 * \brief The UpdateResiliencyPolicyResponsePrivate class provides private implementation for UpdateResiliencyPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a UpdateResiliencyPolicyResponsePrivate object with public implementation \a q.
 */
UpdateResiliencyPolicyResponsePrivate::UpdateResiliencyPolicyResponsePrivate(
    UpdateResiliencyPolicyResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub UpdateResiliencyPolicy response element from \a xml.
 */
void UpdateResiliencyPolicyResponsePrivate::parseUpdateResiliencyPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResiliencyPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
