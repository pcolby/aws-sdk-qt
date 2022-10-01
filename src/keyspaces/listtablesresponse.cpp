// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtablesresponse.h"
#include "listtablesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Keyspaces {

/*!
 * \class QtAws::Keyspaces::ListTablesResponse
 * \brief The ListTablesResponse class provides an interace for Keyspaces ListTables responses.
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
 * \sa KeyspacesClient::listTables
 */

/*!
 * Constructs a ListTablesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTablesResponse::ListTablesResponse(
        const ListTablesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KeyspacesResponse(new ListTablesResponsePrivate(this), parent)
{
    setRequest(new ListTablesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTablesRequest * ListTablesResponse::request() const
{
    Q_D(const ListTablesResponse);
    return static_cast<const ListTablesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Keyspaces ListTables \a response.
 */
void ListTablesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTablesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Keyspaces::ListTablesResponsePrivate
 * \brief The ListTablesResponsePrivate class provides private implementation for ListTablesResponse.
 * \internal
 *
 * \inmodule QtAwsKeyspaces
 */

/*!
 * Constructs a ListTablesResponsePrivate object with public implementation \a q.
 */
ListTablesResponsePrivate::ListTablesResponsePrivate(
    ListTablesResponse * const q) : KeyspacesResponsePrivate(q)
{

}

/*!
 * Parses a Keyspaces ListTables response element from \a xml.
 */
void ListTablesResponsePrivate::parseListTablesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTablesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Keyspaces
} // namespace QtAws
