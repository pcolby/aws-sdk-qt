/*
    Copyright 2013-2018 Paul Colby

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

#include "resetdbparametergroupresponse.h"
#include "resetdbparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::ResetDBParameterGroupResponse
 * \brief The ResetDBParameterGroupResponse class provides an interace for Neptune ResetDBParameterGroup responses.
 *
 * \inmodule QtAwsNeptune
 *
 *  <fullname>Amazon Neptune</fullname>
 * 
 * 
 *  </p
 * 
 *  Amazon Neptune is a fast, reliable, fully-managed graph database service that makes it easy to build and run
 *  applications that work with highly connected datasets. The core of Amazon Neptune is a purpose-built, high-performance
 *  graph database engine optimized for storing billions of relationships and querying the graph with milliseconds latency.
 *  Amazon Neptune supports popular graph models Property Graph and W3C's RDF, and their respective query languages Apache
 *  TinkerPop Gremlin and SPARQL, allowing you to easily build queries that efficiently navigate highly connected datasets.
 *  Neptune powers graph use cases such as recommendation engines, fraud detection, knowledge graphs, drug discovery, and
 *  network security.
 * 
 *  </p
 * 
 *  This interface reference for Amazon Neptune contains documentation for a programming or command line interface you can
 *  use to manage Amazon Neptune. Note that Amazon Neptune is asynchronous, which means that some interfaces might require
 *  techniques such as polling or callback functions to determine when a command has been applied. In this reference, the
 *  parameter descriptions indicate whether a command is applied immediately, on the next instance reboot, or during the
 *  maintenance window. The reference structure is as follows, and we list following some related topics from the user
 * 
 *  guide>
 * 
 *  <b>Amazon Neptune API Reference</b>
 *
 * \sa NeptuneClient::resetDBParameterGroup
 */

/*!
 * Constructs a ResetDBParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ResetDBParameterGroupResponse::ResetDBParameterGroupResponse(
        const ResetDBParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NeptuneResponse(new ResetDBParameterGroupResponsePrivate(this), parent)
{
    setRequest(new ResetDBParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetDBParameterGroupRequest * ResetDBParameterGroupResponse::request() const
{
    Q_D(const ResetDBParameterGroupResponse);
    return static_cast<const ResetDBParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Neptune ResetDBParameterGroup \a response.
 */
void ResetDBParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetDBParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Neptune::ResetDBParameterGroupResponsePrivate
 * \brief The ResetDBParameterGroupResponsePrivate class provides private implementation for ResetDBParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a ResetDBParameterGroupResponsePrivate object with public implementation \a q.
 */
ResetDBParameterGroupResponsePrivate::ResetDBParameterGroupResponsePrivate(
    ResetDBParameterGroupResponse * const q) : NeptuneResponsePrivate(q)
{

}

/*!
 * Parses a Neptune ResetDBParameterGroup response element from \a xml.
 */
void ResetDBParameterGroupResponsePrivate::parseResetDBParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetDBParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Neptune
} // namespace QtAws
