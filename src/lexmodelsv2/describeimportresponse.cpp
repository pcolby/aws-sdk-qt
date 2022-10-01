// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const DescribeImportResponse);
    return static_cast<const DescribeImportRequest *>(d->request);
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
