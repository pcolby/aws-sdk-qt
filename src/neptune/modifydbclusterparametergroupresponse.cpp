/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "modifydbclusterparametergroupresponse.h"
#include "modifydbclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::ModifyDBClusterParameterGroupResponse
 * \brief The ModifyDBClusterParameterGroupResponse class provides an interace for Neptune ModifyDBClusterParameterGroup responses.
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
 * \sa NeptuneClient::modifyDBClusterParameterGroup
 */

/*!
 * Constructs a ModifyDBClusterParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyDBClusterParameterGroupResponse::ModifyDBClusterParameterGroupResponse(
        const ModifyDBClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NeptuneResponse(new ModifyDBClusterParameterGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyDBClusterParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyDBClusterParameterGroupRequest * ModifyDBClusterParameterGroupResponse::request() const
{
    Q_D(const ModifyDBClusterParameterGroupResponse);
    return static_cast<const ModifyDBClusterParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Neptune ModifyDBClusterParameterGroup \a response.
 */
void ModifyDBClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyDBClusterParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Neptune::ModifyDBClusterParameterGroupResponsePrivate
 * \brief The ModifyDBClusterParameterGroupResponsePrivate class provides private implementation for ModifyDBClusterParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a ModifyDBClusterParameterGroupResponsePrivate object with public implementation \a q.
 */
ModifyDBClusterParameterGroupResponsePrivate::ModifyDBClusterParameterGroupResponsePrivate(
    ModifyDBClusterParameterGroupResponse * const q) : NeptuneResponsePrivate(q)
{

}

/*!
 * Parses a Neptune ModifyDBClusterParameterGroup response element from \a xml.
 */
void ModifyDBClusterParameterGroupResponsePrivate::parseModifyDBClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBClusterParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Neptune
} // namespace QtAws
