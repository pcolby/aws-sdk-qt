// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "failoverdbclusterresponse.h"
#include "failoverdbclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::FailoverDBClusterResponse
 * \brief The FailoverDBClusterResponse class provides an interace for DocDb FailoverDBCluster responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::failoverDBCluster
 */

/*!
 * Constructs a FailoverDBClusterResponse object for \a reply to \a request, with parent \a parent.
 */
FailoverDBClusterResponse::FailoverDBClusterResponse(
        const FailoverDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new FailoverDBClusterResponsePrivate(this), parent)
{
    setRequest(new FailoverDBClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const FailoverDBClusterRequest * FailoverDBClusterResponse::request() const
{
    Q_D(const FailoverDBClusterResponse);
    return static_cast<const FailoverDBClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb FailoverDBCluster \a response.
 */
void FailoverDBClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(FailoverDBClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::FailoverDBClusterResponsePrivate
 * \brief The FailoverDBClusterResponsePrivate class provides private implementation for FailoverDBClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a FailoverDBClusterResponsePrivate object with public implementation \a q.
 */
FailoverDBClusterResponsePrivate::FailoverDBClusterResponsePrivate(
    FailoverDBClusterResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb FailoverDBCluster response element from \a xml.
 */
void FailoverDBClusterResponsePrivate::parseFailoverDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("FailoverDBClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
