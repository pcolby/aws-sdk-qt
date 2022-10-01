// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteclusterresponse.h"
#include "deleteclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::DeleteClusterResponse
 * \brief The DeleteClusterResponse class provides an interace for Route53RecoveryControlConfig DeleteCluster responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::deleteCluster
 */

/*!
 * Constructs a DeleteClusterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteClusterResponse::DeleteClusterResponse(
        const DeleteClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new DeleteClusterResponsePrivate(this), parent)
{
    setRequest(new DeleteClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteClusterRequest * DeleteClusterResponse::request() const
{
    Q_D(const DeleteClusterResponse);
    return static_cast<const DeleteClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig DeleteCluster \a response.
 */
void DeleteClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::DeleteClusterResponsePrivate
 * \brief The DeleteClusterResponsePrivate class provides private implementation for DeleteClusterResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a DeleteClusterResponsePrivate object with public implementation \a q.
 */
DeleteClusterResponsePrivate::DeleteClusterResponsePrivate(
    DeleteClusterResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig DeleteCluster response element from \a xml.
 */
void DeleteClusterResponsePrivate::parseDeleteClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
