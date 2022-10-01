// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeslottyperesponse.h"
#include "describeslottyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeSlotTypeResponse
 * \brief The DescribeSlotTypeResponse class provides an interace for LexModelsV2 DescribeSlotType responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeSlotType
 */

/*!
 * Constructs a DescribeSlotTypeResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSlotTypeResponse::DescribeSlotTypeResponse(
        const DescribeSlotTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DescribeSlotTypeResponsePrivate(this), parent)
{
    setRequest(new DescribeSlotTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSlotTypeRequest * DescribeSlotTypeResponse::request() const
{
    Q_D(const DescribeSlotTypeResponse);
    return static_cast<const DescribeSlotTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DescribeSlotType \a response.
 */
void DescribeSlotTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSlotTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DescribeSlotTypeResponsePrivate
 * \brief The DescribeSlotTypeResponsePrivate class provides private implementation for DescribeSlotTypeResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeSlotTypeResponsePrivate object with public implementation \a q.
 */
DescribeSlotTypeResponsePrivate::DescribeSlotTypeResponsePrivate(
    DescribeSlotTypeResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DescribeSlotType response element from \a xml.
 */
void DescribeSlotTypeResponsePrivate::parseDescribeSlotTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSlotTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
