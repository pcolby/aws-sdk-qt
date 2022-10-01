// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedbclusterparametersresponse.h"
#include "describedbclusterparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBClusterParametersResponse
 * \brief The DescribeDBClusterParametersResponse class provides an interace for DocDb DescribeDBClusterParameters responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBClusterParameters
 */

/*!
 * Constructs a DescribeDBClusterParametersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDBClusterParametersResponse::DescribeDBClusterParametersResponse(
        const DescribeDBClusterParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DescribeDBClusterParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeDBClusterParametersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDBClusterParametersRequest * DescribeDBClusterParametersResponse::request() const
{
    Q_D(const DescribeDBClusterParametersResponse);
    return static_cast<const DescribeDBClusterParametersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DescribeDBClusterParameters \a response.
 */
void DescribeDBClusterParametersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDBClusterParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DescribeDBClusterParametersResponsePrivate
 * \brief The DescribeDBClusterParametersResponsePrivate class provides private implementation for DescribeDBClusterParametersResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBClusterParametersResponsePrivate object with public implementation \a q.
 */
DescribeDBClusterParametersResponsePrivate::DescribeDBClusterParametersResponsePrivate(
    DescribeDBClusterParametersResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DescribeDBClusterParameters response element from \a xml.
 */
void DescribeDBClusterParametersResponsePrivate::parseDescribeDBClusterParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBClusterParametersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
