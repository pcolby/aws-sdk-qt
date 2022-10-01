// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateappresponse.h"
#include "updateappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::UpdateAppResponse
 * \brief The UpdateAppResponse class provides an interace for ResilienceHub UpdateApp responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::updateApp
 */

/*!
 * Constructs a UpdateAppResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAppResponse::UpdateAppResponse(
        const UpdateAppRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new UpdateAppResponsePrivate(this), parent)
{
    setRequest(new UpdateAppRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAppRequest * UpdateAppResponse::request() const
{
    Q_D(const UpdateAppResponse);
    return static_cast<const UpdateAppRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub UpdateApp \a response.
 */
void UpdateAppResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAppResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::UpdateAppResponsePrivate
 * \brief The UpdateAppResponsePrivate class provides private implementation for UpdateAppResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a UpdateAppResponsePrivate object with public implementation \a q.
 */
UpdateAppResponsePrivate::UpdateAppResponsePrivate(
    UpdateAppResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub UpdateApp response element from \a xml.
 */
void UpdateAppResponsePrivate::parseUpdateAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAppResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
