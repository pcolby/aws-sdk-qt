// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedbinstanceresponse.h"
#include "deletedbinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DeleteDBInstanceResponse
 * \brief The DeleteDBInstanceResponse class provides an interace for DocDb DeleteDBInstance responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::deleteDBInstance
 */

/*!
 * Constructs a DeleteDBInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDBInstanceResponse::DeleteDBInstanceResponse(
        const DeleteDBInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DeleteDBInstanceResponsePrivate(this), parent)
{
    setRequest(new DeleteDBInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDBInstanceRequest * DeleteDBInstanceResponse::request() const
{
    Q_D(const DeleteDBInstanceResponse);
    return static_cast<const DeleteDBInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DeleteDBInstance \a response.
 */
void DeleteDBInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDBInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DeleteDBInstanceResponsePrivate
 * \brief The DeleteDBInstanceResponsePrivate class provides private implementation for DeleteDBInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DeleteDBInstanceResponsePrivate object with public implementation \a q.
 */
DeleteDBInstanceResponsePrivate::DeleteDBInstanceResponsePrivate(
    DeleteDBInstanceResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DeleteDBInstance response element from \a xml.
 */
void DeleteDBInstanceResponsePrivate::parseDeleteDBInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDBInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
