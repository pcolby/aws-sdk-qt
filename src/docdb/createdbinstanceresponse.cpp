// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdbinstanceresponse.h"
#include "createdbinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CreateDBInstanceResponse
 * \brief The CreateDBInstanceResponse class provides an interace for DocDb CreateDBInstance responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::createDBInstance
 */

/*!
 * Constructs a CreateDBInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDBInstanceResponse::CreateDBInstanceResponse(
        const CreateDBInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new CreateDBInstanceResponsePrivate(this), parent)
{
    setRequest(new CreateDBInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDBInstanceRequest * CreateDBInstanceResponse::request() const
{
    Q_D(const CreateDBInstanceResponse);
    return static_cast<const CreateDBInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb CreateDBInstance \a response.
 */
void CreateDBInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDBInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::CreateDBInstanceResponsePrivate
 * \brief The CreateDBInstanceResponsePrivate class provides private implementation for CreateDBInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CreateDBInstanceResponsePrivate object with public implementation \a q.
 */
CreateDBInstanceResponsePrivate::CreateDBInstanceResponsePrivate(
    CreateDBInstanceResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb CreateDBInstance response element from \a xml.
 */
void CreateDBInstanceResponsePrivate::parseCreateDBInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
