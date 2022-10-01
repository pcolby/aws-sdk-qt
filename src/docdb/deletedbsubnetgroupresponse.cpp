// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedbsubnetgroupresponse.h"
#include "deletedbsubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DeleteDBSubnetGroupResponse
 * \brief The DeleteDBSubnetGroupResponse class provides an interace for DocDb DeleteDBSubnetGroup responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::deleteDBSubnetGroup
 */

/*!
 * Constructs a DeleteDBSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDBSubnetGroupResponse::DeleteDBSubnetGroupResponse(
        const DeleteDBSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DeleteDBSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteDBSubnetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDBSubnetGroupRequest * DeleteDBSubnetGroupResponse::request() const
{
    Q_D(const DeleteDBSubnetGroupResponse);
    return static_cast<const DeleteDBSubnetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DeleteDBSubnetGroup \a response.
 */
void DeleteDBSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDBSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DeleteDBSubnetGroupResponsePrivate
 * \brief The DeleteDBSubnetGroupResponsePrivate class provides private implementation for DeleteDBSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DeleteDBSubnetGroupResponsePrivate object with public implementation \a q.
 */
DeleteDBSubnetGroupResponsePrivate::DeleteDBSubnetGroupResponsePrivate(
    DeleteDBSubnetGroupResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DeleteDBSubnetGroup response element from \a xml.
 */
void DeleteDBSubnetGroupResponsePrivate::parseDeleteDBSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDBSubnetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
