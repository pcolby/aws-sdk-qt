// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resetdbclusterparametergroupresponse.h"
#include "resetdbclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ResetDBClusterParameterGroupResponse
 * \brief The ResetDBClusterParameterGroupResponse class provides an interace for DocDb ResetDBClusterParameterGroup responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::resetDBClusterParameterGroup
 */

/*!
 * Constructs a ResetDBClusterParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ResetDBClusterParameterGroupResponse::ResetDBClusterParameterGroupResponse(
        const ResetDBClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new ResetDBClusterParameterGroupResponsePrivate(this), parent)
{
    setRequest(new ResetDBClusterParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetDBClusterParameterGroupRequest * ResetDBClusterParameterGroupResponse::request() const
{
    Q_D(const ResetDBClusterParameterGroupResponse);
    return static_cast<const ResetDBClusterParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb ResetDBClusterParameterGroup \a response.
 */
void ResetDBClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetDBClusterParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::ResetDBClusterParameterGroupResponsePrivate
 * \brief The ResetDBClusterParameterGroupResponsePrivate class provides private implementation for ResetDBClusterParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ResetDBClusterParameterGroupResponsePrivate object with public implementation \a q.
 */
ResetDBClusterParameterGroupResponsePrivate::ResetDBClusterParameterGroupResponsePrivate(
    ResetDBClusterParameterGroupResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb ResetDBClusterParameterGroup response element from \a xml.
 */
void ResetDBClusterParameterGroupResponsePrivate::parseResetDBClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetDBClusterParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
