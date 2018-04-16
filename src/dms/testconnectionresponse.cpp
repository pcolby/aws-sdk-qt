/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "testconnectionresponse.h"
#include "testconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::TestConnectionResponse
 *
 * \brief The TestConnectionResponse class provides an interace for DatabaseMigrationService TestConnection responses.
 *
 * \ingroup DatabaseMigrationService
 *
 *  <fullname>AWS Database Migration Service</fullname>
 * 
 *  AWS Database Migration Service (AWS DMS) can migrate your data to and from the most widely used commercial and
 *  open-source databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL,
 *  and SAP Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well
 *  as heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about AWS DMS, see the AWS DMS user guide at <a
 *  href="http://docs.aws.amazon.com/dms/latest/userguide/Welcome.html"> What Is AWS Database Migration Service? </a>
 *
 * \sa DatabaseMigrationServiceClient::testConnection
 */

/*!
 * @brief  Constructs a new TestConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TestConnectionResponse::TestConnectionResponse(
        const TestConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new TestConnectionResponsePrivate(this), parent)
{
    setRequest(new TestConnectionRequest(request));
    setReply(reply);
}

const TestConnectionRequest * TestConnectionResponse::request() const
{
    Q_D(const TestConnectionResponse);
    return static_cast<const TestConnectionRequest *>(d->request);
}

/*!
 * @brief  Parse a DatabaseMigrationService TestConnection response.
 *
 * @param  response  Response to parse.
 */
void TestConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(TestConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class TestConnectionResponsePrivate
 *
 * \brief Private implementation for TestConnectionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new TestConnectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TestConnectionResponse instance.
 */
TestConnectionResponsePrivate::TestConnectionResponsePrivate(
    TestConnectionResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DatabaseMigrationService TestConnectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TestConnectionResponsePrivate::parseTestConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestConnectionResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
