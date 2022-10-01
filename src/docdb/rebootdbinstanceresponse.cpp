// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rebootdbinstanceresponse.h"
#include "rebootdbinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::RebootDBInstanceResponse
 * \brief The RebootDBInstanceResponse class provides an interace for DocDb RebootDBInstance responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::rebootDBInstance
 */

/*!
 * Constructs a RebootDBInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
RebootDBInstanceResponse::RebootDBInstanceResponse(
        const RebootDBInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new RebootDBInstanceResponsePrivate(this), parent)
{
    setRequest(new RebootDBInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RebootDBInstanceRequest * RebootDBInstanceResponse::request() const
{
    Q_D(const RebootDBInstanceResponse);
    return static_cast<const RebootDBInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb RebootDBInstance \a response.
 */
void RebootDBInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RebootDBInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::RebootDBInstanceResponsePrivate
 * \brief The RebootDBInstanceResponsePrivate class provides private implementation for RebootDBInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a RebootDBInstanceResponsePrivate object with public implementation \a q.
 */
RebootDBInstanceResponsePrivate::RebootDBInstanceResponsePrivate(
    RebootDBInstanceResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb RebootDBInstance response element from \a xml.
 */
void RebootDBInstanceResponsePrivate::parseRebootDBInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootDBInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
