// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listclustersresponse.h"
#include "listclustersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListClustersResponse
 * \brief The ListClustersResponse class provides an interace for Route53RecoveryControlConfig ListClusters responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::listClusters
 */

/*!
 * Constructs a ListClustersResponse object for \a reply to \a request, with parent \a parent.
 */
ListClustersResponse::ListClustersResponse(
        const ListClustersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new ListClustersResponsePrivate(this), parent)
{
    setRequest(new ListClustersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListClustersRequest * ListClustersResponse::request() const
{
    Q_D(const ListClustersResponse);
    return static_cast<const ListClustersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig ListClusters \a response.
 */
void ListClustersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListClustersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListClustersResponsePrivate
 * \brief The ListClustersResponsePrivate class provides private implementation for ListClustersResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a ListClustersResponsePrivate object with public implementation \a q.
 */
ListClustersResponsePrivate::ListClustersResponsePrivate(
    ListClustersResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig ListClusters response element from \a xml.
 */
void ListClustersResponsePrivate::parseListClustersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListClustersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
