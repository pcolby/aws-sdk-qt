// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteclusterresponse.h"
#include "deleteclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::DeleteClusterResponse
 * \brief The DeleteClusterResponse class provides an interace for Kafka DeleteCluster responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::deleteCluster
 */

/*!
 * Constructs a DeleteClusterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteClusterResponse::DeleteClusterResponse(
        const DeleteClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new DeleteClusterResponsePrivate(this), parent)
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
 * Parses a successful Kafka DeleteCluster \a response.
 */
void DeleteClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::DeleteClusterResponsePrivate
 * \brief The DeleteClusterResponsePrivate class provides private implementation for DeleteClusterResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a DeleteClusterResponsePrivate object with public implementation \a q.
 */
DeleteClusterResponsePrivate::DeleteClusterResponsePrivate(
    DeleteClusterResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka DeleteCluster response element from \a xml.
 */
void DeleteClusterResponsePrivate::parseDeleteClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
