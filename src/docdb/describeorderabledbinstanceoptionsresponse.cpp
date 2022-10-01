// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeorderabledbinstanceoptionsresponse.h"
#include "describeorderabledbinstanceoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeOrderableDBInstanceOptionsResponse
 * \brief The DescribeOrderableDBInstanceOptionsResponse class provides an interace for DocDb DescribeOrderableDBInstanceOptions responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeOrderableDBInstanceOptions
 */

/*!
 * Constructs a DescribeOrderableDBInstanceOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeOrderableDBInstanceOptionsResponse::DescribeOrderableDBInstanceOptionsResponse(
        const DescribeOrderableDBInstanceOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DescribeOrderableDBInstanceOptionsResponsePrivate(this), parent)
{
    setRequest(new DescribeOrderableDBInstanceOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeOrderableDBInstanceOptionsRequest * DescribeOrderableDBInstanceOptionsResponse::request() const
{
    Q_D(const DescribeOrderableDBInstanceOptionsResponse);
    return static_cast<const DescribeOrderableDBInstanceOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DescribeOrderableDBInstanceOptions \a response.
 */
void DescribeOrderableDBInstanceOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeOrderableDBInstanceOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DescribeOrderableDBInstanceOptionsResponsePrivate
 * \brief The DescribeOrderableDBInstanceOptionsResponsePrivate class provides private implementation for DescribeOrderableDBInstanceOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeOrderableDBInstanceOptionsResponsePrivate object with public implementation \a q.
 */
DescribeOrderableDBInstanceOptionsResponsePrivate::DescribeOrderableDBInstanceOptionsResponsePrivate(
    DescribeOrderableDBInstanceOptionsResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DescribeOrderableDBInstanceOptions response element from \a xml.
 */
void DescribeOrderableDBInstanceOptionsResponsePrivate::parseDescribeOrderableDBInstanceOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOrderableDBInstanceOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
