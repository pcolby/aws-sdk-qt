// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "publishappversionresponse.h"
#include "publishappversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::PublishAppVersionResponse
 * \brief The PublishAppVersionResponse class provides an interace for ResilienceHub PublishAppVersion responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::publishAppVersion
 */

/*!
 * Constructs a PublishAppVersionResponse object for \a reply to \a request, with parent \a parent.
 */
PublishAppVersionResponse::PublishAppVersionResponse(
        const PublishAppVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new PublishAppVersionResponsePrivate(this), parent)
{
    setRequest(new PublishAppVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PublishAppVersionRequest * PublishAppVersionResponse::request() const
{
    Q_D(const PublishAppVersionResponse);
    return static_cast<const PublishAppVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub PublishAppVersion \a response.
 */
void PublishAppVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PublishAppVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::PublishAppVersionResponsePrivate
 * \brief The PublishAppVersionResponsePrivate class provides private implementation for PublishAppVersionResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a PublishAppVersionResponsePrivate object with public implementation \a q.
 */
PublishAppVersionResponsePrivate::PublishAppVersionResponsePrivate(
    PublishAppVersionResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub PublishAppVersion response element from \a xml.
 */
void PublishAppVersionResponsePrivate::parsePublishAppVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PublishAppVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
