/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeexportresponse.h"
#include "describeexportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeExportResponse
 * \brief The DescribeExportResponse class provides an interace for LexModelsV2 DescribeExport responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeExport
 */

/*!
 * Constructs a DescribeExportResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeExportResponse::DescribeExportResponse(
        const DescribeExportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DescribeExportResponsePrivate(this), parent)
{
    setRequest(new DescribeExportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeExportRequest * DescribeExportResponse::request() const
{
    return static_cast<const DescribeExportRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DescribeExport \a response.
 */
void DescribeExportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DescribeExportResponsePrivate
 * \brief The DescribeExportResponsePrivate class provides private implementation for DescribeExportResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeExportResponsePrivate object with public implementation \a q.
 */
DescribeExportResponsePrivate::DescribeExportResponsePrivate(
    DescribeExportResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DescribeExport response element from \a xml.
 */
void DescribeExportResponsePrivate::parseDescribeExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeExportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
