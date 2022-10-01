// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createappresponse.h"
#include "createappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::CreateAppResponse
 * \brief The CreateAppResponse class provides an interace for ResilienceHub CreateApp responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::createApp
 */

/*!
 * Constructs a CreateAppResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAppResponse::CreateAppResponse(
        const CreateAppRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new CreateAppResponsePrivate(this), parent)
{
    setRequest(new CreateAppRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAppRequest * CreateAppResponse::request() const
{
    Q_D(const CreateAppResponse);
    return static_cast<const CreateAppRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub CreateApp \a response.
 */
void CreateAppResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAppResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::CreateAppResponsePrivate
 * \brief The CreateAppResponsePrivate class provides private implementation for CreateAppResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a CreateAppResponsePrivate object with public implementation \a q.
 */
CreateAppResponsePrivate::CreateAppResponsePrivate(
    CreateAppResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub CreateApp response element from \a xml.
 */
void CreateAppResponsePrivate::parseCreateAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAppResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
