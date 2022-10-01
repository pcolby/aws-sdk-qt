// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "copydbclusterparametergroupresponse.h"
#include "copydbclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CopyDBClusterParameterGroupResponse
 * \brief The CopyDBClusterParameterGroupResponse class provides an interace for DocDb CopyDBClusterParameterGroup responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::copyDBClusterParameterGroup
 */

/*!
 * Constructs a CopyDBClusterParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CopyDBClusterParameterGroupResponse::CopyDBClusterParameterGroupResponse(
        const CopyDBClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new CopyDBClusterParameterGroupResponsePrivate(this), parent)
{
    setRequest(new CopyDBClusterParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CopyDBClusterParameterGroupRequest * CopyDBClusterParameterGroupResponse::request() const
{
    Q_D(const CopyDBClusterParameterGroupResponse);
    return static_cast<const CopyDBClusterParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb CopyDBClusterParameterGroup \a response.
 */
void CopyDBClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CopyDBClusterParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::CopyDBClusterParameterGroupResponsePrivate
 * \brief The CopyDBClusterParameterGroupResponsePrivate class provides private implementation for CopyDBClusterParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CopyDBClusterParameterGroupResponsePrivate object with public implementation \a q.
 */
CopyDBClusterParameterGroupResponsePrivate::CopyDBClusterParameterGroupResponsePrivate(
    CopyDBClusterParameterGroupResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb CopyDBClusterParameterGroup response element from \a xml.
 */
void CopyDBClusterParameterGroupResponsePrivate::parseCopyDBClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyDBClusterParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
