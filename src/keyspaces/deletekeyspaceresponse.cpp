// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletekeyspaceresponse.h"
#include "deletekeyspaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Keyspaces {

/*!
 * \class QtAws::Keyspaces::DeleteKeyspaceResponse
 * \brief The DeleteKeyspaceResponse class provides an interace for Keyspaces DeleteKeyspace responses.
 *
 * \inmodule QtAwsKeyspaces
 *
 *  Amazon Keyspaces (for Apache Cassandra) is a scalable, highly available, and managed Apache Cassandra-compatible
 *  database service. Amazon Keyspaces makes it easy to migrate, run, and scale Cassandra workloads in the Amazon Web
 *  Services Cloud. With just a few clicks on the Amazon Web Services Management Console or a few lines of code, you can
 *  create keyspaces and tables in Amazon Keyspaces, without deploying any infrastructure or installing software.
 * 
 *  </p
 * 
 *  In addition to supporting Cassandra Query Language (CQL) requests via open-source Cassandra drivers, Amazon Keyspaces
 *  supports data definition language (DDL) operations to manage keyspaces and tables using the Amazon Web Services SDK and
 *  CLI. This API reference describes the supported DDL operations in
 * 
 *  detail>
 * 
 *  For the list of all supported CQL APIs, see <a
 *  href="https://docs.aws.amazon.com/keyspaces/latest/devguide/cassandra-apis.html">Supported Cassandra APIs, operations,
 *  and data types in Amazon Keyspaces</a> in the <i>Amazon Keyspaces Developer
 * 
 *  Guide</i>>
 * 
 *  To learn how Amazon Keyspaces API actions are recorded with CloudTrail, see <a
 *  href="https://docs.aws.amazon.com/keyspaces/latest/devguide/logging-using-cloudtrail.html#service-name-info-in-cloudtrail">Amazon
 *  Keyspaces information in CloudTrail</a> in the <i>Amazon Keyspaces Developer
 * 
 *  Guide</i>>
 * 
 *  For more information about Amazon Web Services APIs, for example how to implement retry logic or how to sign Amazon Web
 *  Services API requests, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-apis.html">Amazon Web Services
 *  APIs</a> in the <i>General
 *
 * \sa KeyspacesClient::deleteKeyspace
 */

/*!
 * Constructs a DeleteKeyspaceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteKeyspaceResponse::DeleteKeyspaceResponse(
        const DeleteKeyspaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KeyspacesResponse(new DeleteKeyspaceResponsePrivate(this), parent)
{
    setRequest(new DeleteKeyspaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteKeyspaceRequest * DeleteKeyspaceResponse::request() const
{
    Q_D(const DeleteKeyspaceResponse);
    return static_cast<const DeleteKeyspaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Keyspaces DeleteKeyspace \a response.
 */
void DeleteKeyspaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteKeyspaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Keyspaces::DeleteKeyspaceResponsePrivate
 * \brief The DeleteKeyspaceResponsePrivate class provides private implementation for DeleteKeyspaceResponse.
 * \internal
 *
 * \inmodule QtAwsKeyspaces
 */

/*!
 * Constructs a DeleteKeyspaceResponsePrivate object with public implementation \a q.
 */
DeleteKeyspaceResponsePrivate::DeleteKeyspaceResponsePrivate(
    DeleteKeyspaceResponse * const q) : KeyspacesResponsePrivate(q)
{

}

/*!
 * Parses a Keyspaces DeleteKeyspace response element from \a xml.
 */
void DeleteKeyspaceResponsePrivate::parseDeleteKeyspaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteKeyspaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Keyspaces
} // namespace QtAws
