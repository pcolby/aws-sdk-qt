// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdbclusterparametergroupresponse.h"
#include "createdbclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CreateDBClusterParameterGroupResponse
 * \brief The CreateDBClusterParameterGroupResponse class provides an interace for DocDb CreateDBClusterParameterGroup responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::createDBClusterParameterGroup
 */

/*!
 * Constructs a CreateDBClusterParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDBClusterParameterGroupResponse::CreateDBClusterParameterGroupResponse(
        const CreateDBClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new CreateDBClusterParameterGroupResponsePrivate(this), parent)
{
    setRequest(new CreateDBClusterParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDBClusterParameterGroupRequest * CreateDBClusterParameterGroupResponse::request() const
{
    Q_D(const CreateDBClusterParameterGroupResponse);
    return static_cast<const CreateDBClusterParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb CreateDBClusterParameterGroup \a response.
 */
void CreateDBClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDBClusterParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::CreateDBClusterParameterGroupResponsePrivate
 * \brief The CreateDBClusterParameterGroupResponsePrivate class provides private implementation for CreateDBClusterParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CreateDBClusterParameterGroupResponsePrivate object with public implementation \a q.
 */
CreateDBClusterParameterGroupResponsePrivate::CreateDBClusterParameterGroupResponsePrivate(
    CreateDBClusterParameterGroupResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb CreateDBClusterParameterGroup response element from \a xml.
 */
void CreateDBClusterParameterGroupResponsePrivate::parseCreateDBClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBClusterParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
