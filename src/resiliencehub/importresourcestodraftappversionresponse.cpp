// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importresourcestodraftappversionresponse.h"
#include "importresourcestodraftappversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ImportResourcesToDraftAppVersionResponse
 * \brief The ImportResourcesToDraftAppVersionResponse class provides an interace for ResilienceHub ImportResourcesToDraftAppVersion responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::importResourcesToDraftAppVersion
 */

/*!
 * Constructs a ImportResourcesToDraftAppVersionResponse object for \a reply to \a request, with parent \a parent.
 */
ImportResourcesToDraftAppVersionResponse::ImportResourcesToDraftAppVersionResponse(
        const ImportResourcesToDraftAppVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new ImportResourcesToDraftAppVersionResponsePrivate(this), parent)
{
    setRequest(new ImportResourcesToDraftAppVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportResourcesToDraftAppVersionRequest * ImportResourcesToDraftAppVersionResponse::request() const
{
    Q_D(const ImportResourcesToDraftAppVersionResponse);
    return static_cast<const ImportResourcesToDraftAppVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub ImportResourcesToDraftAppVersion \a response.
 */
void ImportResourcesToDraftAppVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportResourcesToDraftAppVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::ImportResourcesToDraftAppVersionResponsePrivate
 * \brief The ImportResourcesToDraftAppVersionResponsePrivate class provides private implementation for ImportResourcesToDraftAppVersionResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ImportResourcesToDraftAppVersionResponsePrivate object with public implementation \a q.
 */
ImportResourcesToDraftAppVersionResponsePrivate::ImportResourcesToDraftAppVersionResponsePrivate(
    ImportResourcesToDraftAppVersionResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub ImportResourcesToDraftAppVersion response element from \a xml.
 */
void ImportResourcesToDraftAppVersionResponsePrivate::parseImportResourcesToDraftAppVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportResourcesToDraftAppVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
