// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifydbinstanceresponse.h"
#include "modifydbinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ModifyDBInstanceResponse
 * \brief The ModifyDBInstanceResponse class provides an interace for DocDb ModifyDBInstance responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::modifyDBInstance
 */

/*!
 * Constructs a ModifyDBInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyDBInstanceResponse::ModifyDBInstanceResponse(
        const ModifyDBInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new ModifyDBInstanceResponsePrivate(this), parent)
{
    setRequest(new ModifyDBInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyDBInstanceRequest * ModifyDBInstanceResponse::request() const
{
    Q_D(const ModifyDBInstanceResponse);
    return static_cast<const ModifyDBInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb ModifyDBInstance \a response.
 */
void ModifyDBInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyDBInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::ModifyDBInstanceResponsePrivate
 * \brief The ModifyDBInstanceResponsePrivate class provides private implementation for ModifyDBInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ModifyDBInstanceResponsePrivate object with public implementation \a q.
 */
ModifyDBInstanceResponsePrivate::ModifyDBInstanceResponsePrivate(
    ModifyDBInstanceResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb ModifyDBInstance response element from \a xml.
 */
void ModifyDBInstanceResponsePrivate::parseModifyDBInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
