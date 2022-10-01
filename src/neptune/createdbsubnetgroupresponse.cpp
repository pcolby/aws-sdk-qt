// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdbsubnetgroupresponse.h"
#include "createdbsubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::CreateDBSubnetGroupResponse
 * \brief The CreateDBSubnetGroupResponse class provides an interace for Neptune CreateDBSubnetGroup responses.
 *
 * \inmodule QtAwsNeptune
 *
 *  <fullname>Amazon Neptune</fullname>
 * 
 *  Amazon Neptune is a fast, reliable, fully-managed graph database service that makes it easy to build and run
 *  applications that work with highly connected datasets. The core of Amazon Neptune is a purpose-built, high-performance
 *  graph database engine optimized for storing billions of relationships and querying the graph with milliseconds latency.
 *  Amazon Neptune supports popular graph models Property Graph and W3C's RDF, and their respective query languages Apache
 *  TinkerPop Gremlin and SPARQL, allowing you to easily build queries that efficiently navigate highly connected datasets.
 *  Neptune powers graph use cases such as recommendation engines, fraud detection, knowledge graphs, drug discovery, and
 *  network
 * 
 *  security>
 * 
 *  This interface reference for Amazon Neptune contains documentation for a programming or command line interface you can
 *  use to manage Amazon Neptune. Note that Amazon Neptune is asynchronous, which means that some interfaces might require
 *  techniques such as polling or callback functions to determine when a command has been applied. In this reference, the
 *  parameter descriptions indicate whether a command is applied immediately, on the next instance reboot, or during the
 *  maintenance window. The reference structure is as follows, and we list following some related topics from the user
 *
 * \sa NeptuneClient::createDBSubnetGroup
 */

/*!
 * Constructs a CreateDBSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDBSubnetGroupResponse::CreateDBSubnetGroupResponse(
        const CreateDBSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NeptuneResponse(new CreateDBSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new CreateDBSubnetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDBSubnetGroupRequest * CreateDBSubnetGroupResponse::request() const
{
    Q_D(const CreateDBSubnetGroupResponse);
    return static_cast<const CreateDBSubnetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Neptune CreateDBSubnetGroup \a response.
 */
void CreateDBSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDBSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Neptune::CreateDBSubnetGroupResponsePrivate
 * \brief The CreateDBSubnetGroupResponsePrivate class provides private implementation for CreateDBSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a CreateDBSubnetGroupResponsePrivate object with public implementation \a q.
 */
CreateDBSubnetGroupResponsePrivate::CreateDBSubnetGroupResponsePrivate(
    CreateDBSubnetGroupResponse * const q) : NeptuneResponsePrivate(q)
{

}

/*!
 * Parses a Neptune CreateDBSubnetGroup response element from \a xml.
 */
void CreateDBSubnetGroupResponsePrivate::parseCreateDBSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBSubnetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Neptune
} // namespace QtAws
