// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappsresponse.h"
#include "listappsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListAppsResponse
 * \brief The ListAppsResponse class provides an interace for ResilienceHub ListApps responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listApps
 */

/*!
 * Constructs a ListAppsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAppsResponse::ListAppsResponse(
        const ListAppsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new ListAppsResponsePrivate(this), parent)
{
    setRequest(new ListAppsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAppsRequest * ListAppsResponse::request() const
{
    Q_D(const ListAppsResponse);
    return static_cast<const ListAppsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub ListApps \a response.
 */
void ListAppsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAppsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::ListAppsResponsePrivate
 * \brief The ListAppsResponsePrivate class provides private implementation for ListAppsResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListAppsResponsePrivate object with public implementation \a q.
 */
ListAppsResponsePrivate::ListAppsResponsePrivate(
    ListAppsResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub ListApps response element from \a xml.
 */
void ListAppsResponsePrivate::parseListAppsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
