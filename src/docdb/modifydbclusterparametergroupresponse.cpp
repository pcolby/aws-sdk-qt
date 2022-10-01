// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifydbclusterparametergroupresponse.h"
#include "modifydbclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ModifyDBClusterParameterGroupResponse
 * \brief The ModifyDBClusterParameterGroupResponse class provides an interace for DocDb ModifyDBClusterParameterGroup responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::modifyDBClusterParameterGroup
 */

/*!
 * Constructs a ModifyDBClusterParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyDBClusterParameterGroupResponse::ModifyDBClusterParameterGroupResponse(
        const ModifyDBClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new ModifyDBClusterParameterGroupResponsePrivate(this), parent)
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
 * Parses a successful DocDb ModifyDBClusterParameterGroup \a response.
 */
void ModifyDBClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyDBClusterParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::ModifyDBClusterParameterGroupResponsePrivate
 * \brief The ModifyDBClusterParameterGroupResponsePrivate class provides private implementation for ModifyDBClusterParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ModifyDBClusterParameterGroupResponsePrivate object with public implementation \a q.
 */
ModifyDBClusterParameterGroupResponsePrivate::ModifyDBClusterParameterGroupResponsePrivate(
    ModifyDBClusterParameterGroupResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb ModifyDBClusterParameterGroup response element from \a xml.
 */
void ModifyDBClusterParameterGroupResponsePrivate::parseModifyDBClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBClusterParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
