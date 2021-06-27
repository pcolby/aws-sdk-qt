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

#include "describeimportresponse.h"
#include "describeimportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeImportResponse
 * \brief The DescribeImportResponse class provides an interace for LexModelsV2 DescribeImport responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeImport
 */

/*!
 * Constructs a DescribeImportResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeImportResponse::DescribeImportResponse(
        const DescribeImportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DescribeImportResponsePrivate(this), parent)
{
    setRequest(new DescribeImportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeImportRequest * DescribeImportResponse::request() const
{
    return static_cast<const DescribeImportRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DescribeImport \a response.
 */
void DescribeImportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeImportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DescribeImportResponsePrivate
 * \brief The DescribeImportResponsePrivate class provides private implementation for DescribeImportResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeImportResponsePrivate object with public implementation \a q.
 */
DescribeImportResponsePrivate::DescribeImportResponsePrivate(
    DescribeImportResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DescribeImport response element from \a xml.
 */
void DescribeImportResponsePrivate::parseDescribeImportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
