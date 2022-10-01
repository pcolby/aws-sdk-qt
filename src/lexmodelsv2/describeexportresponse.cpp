// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const DescribeExportResponse);
    return static_cast<const DescribeExportRequest *>(d->request);
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
