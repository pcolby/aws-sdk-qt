// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifydbparametergroupresponse.h"
#include "modifydbparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::ModifyDBParameterGroupResponse
 * \brief The ModifyDBParameterGroupResponse class provides an interace for Neptune ModifyDBParameterGroup responses.
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
 * \sa NeptuneClient::modifyDBParameterGroup
 */

/*!
 * Constructs a ModifyDBParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyDBParameterGroupResponse::ModifyDBParameterGroupResponse(
        const ModifyDBParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NeptuneResponse(new ModifyDBParameterGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyDBParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyDBParameterGroupRequest * ModifyDBParameterGroupResponse::request() const
{
    Q_D(const ModifyDBParameterGroupResponse);
    return static_cast<const ModifyDBParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Neptune ModifyDBParameterGroup \a response.
 */
void ModifyDBParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyDBParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Neptune::ModifyDBParameterGroupResponsePrivate
 * \brief The ModifyDBParameterGroupResponsePrivate class provides private implementation for ModifyDBParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a ModifyDBParameterGroupResponsePrivate object with public implementation \a q.
 */
ModifyDBParameterGroupResponsePrivate::ModifyDBParameterGroupResponsePrivate(
    ModifyDBParameterGroupResponse * const q) : NeptuneResponsePrivate(q)
{

}

/*!
 * Parses a Neptune ModifyDBParameterGroup response element from \a xml.
 */
void ModifyDBParameterGroupResponsePrivate::parseModifyDBParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Neptune
} // namespace QtAws
