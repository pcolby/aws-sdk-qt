// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedbclusterparametergroupresponse.h"
#include "deletedbclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DeleteDBClusterParameterGroupResponse
 * \brief The DeleteDBClusterParameterGroupResponse class provides an interace for DocDb DeleteDBClusterParameterGroup responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::deleteDBClusterParameterGroup
 */

/*!
 * Constructs a DeleteDBClusterParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDBClusterParameterGroupResponse::DeleteDBClusterParameterGroupResponse(
        const DeleteDBClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DeleteDBClusterParameterGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteDBClusterParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDBClusterParameterGroupRequest * DeleteDBClusterParameterGroupResponse::request() const
{
    Q_D(const DeleteDBClusterParameterGroupResponse);
    return static_cast<const DeleteDBClusterParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DeleteDBClusterParameterGroup \a response.
 */
void DeleteDBClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDBClusterParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DeleteDBClusterParameterGroupResponsePrivate
 * \brief The DeleteDBClusterParameterGroupResponsePrivate class provides private implementation for DeleteDBClusterParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DeleteDBClusterParameterGroupResponsePrivate object with public implementation \a q.
 */
DeleteDBClusterParameterGroupResponsePrivate::DeleteDBClusterParameterGroupResponsePrivate(
    DeleteDBClusterParameterGroupResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DeleteDBClusterParameterGroup response element from \a xml.
 */
void DeleteDBClusterParameterGroupResponsePrivate::parseDeleteDBClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDBClusterParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
