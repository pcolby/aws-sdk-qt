// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdbsubnetgroupresponse.h"
#include "createdbsubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CreateDBSubnetGroupResponse
 * \brief The CreateDBSubnetGroupResponse class provides an interace for DocDb CreateDBSubnetGroup responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::createDBSubnetGroup
 */

/*!
 * Constructs a CreateDBSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDBSubnetGroupResponse::CreateDBSubnetGroupResponse(
        const CreateDBSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new CreateDBSubnetGroupResponsePrivate(this), parent)
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
 * Parses a successful DocDb CreateDBSubnetGroup \a response.
 */
void CreateDBSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDBSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::CreateDBSubnetGroupResponsePrivate
 * \brief The CreateDBSubnetGroupResponsePrivate class provides private implementation for CreateDBSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CreateDBSubnetGroupResponsePrivate object with public implementation \a q.
 */
CreateDBSubnetGroupResponsePrivate::CreateDBSubnetGroupResponsePrivate(
    CreateDBSubnetGroupResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb CreateDBSubnetGroup response element from \a xml.
 */
void CreateDBSubnetGroupResponsePrivate::parseCreateDBSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBSubnetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
