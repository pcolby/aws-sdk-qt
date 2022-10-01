// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedatasourceresponse.h"
#include "describedatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeDataSourceResponse
 * \brief The DescribeDataSourceResponse class provides an interace for Kendra DescribeDataSource responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeDataSource
 */

/*!
 * Constructs a DescribeDataSourceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDataSourceResponse::DescribeDataSourceResponse(
        const DescribeDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DescribeDataSourceResponsePrivate(this), parent)
{
    setRequest(new DescribeDataSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDataSourceRequest * DescribeDataSourceResponse::request() const
{
    Q_D(const DescribeDataSourceResponse);
    return static_cast<const DescribeDataSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DescribeDataSource \a response.
 */
void DescribeDataSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DescribeDataSourceResponsePrivate
 * \brief The DescribeDataSourceResponsePrivate class provides private implementation for DescribeDataSourceResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeDataSourceResponsePrivate object with public implementation \a q.
 */
DescribeDataSourceResponsePrivate::DescribeDataSourceResponsePrivate(
    DescribeDataSourceResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DescribeDataSource response element from \a xml.
 */
void DescribeDataSourceResponsePrivate::parseDescribeDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDataSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
