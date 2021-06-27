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

#include "describedatasetresponse.h"
#include "describedatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutforVision {

/*!
 * \class QtAws::LookoutforVision::DescribeDatasetResponse
 * \brief The DescribeDatasetResponse class provides an interace for LookoutforVision DescribeDataset responses.
 *
 * \inmodule QtAwsLookoutforVision
 *
 *  This is the Amazon Lookout for Vision API Reference. It provides descriptions of actions, data types, common parameters,
 *  and common
 * 
 *  errors>
 * 
 *  Amazon Lookout for Vision enables you to find visual defects in industrial products, accurately and at scale. It uses
 *  computer vision to identify missing components in an industrial product, damage to vehicles or structures,
 *  irregularities in production lines, and even minuscule defects in silicon wafers — or any other physical item where
 *  quality is important such as a missing capacitor on printed circuit
 *
 * \sa LookoutforVisionClient::describeDataset
 */

/*!
 * Constructs a DescribeDatasetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDatasetResponse::DescribeDatasetResponse(
        const DescribeDatasetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutforVisionResponse(new DescribeDatasetResponsePrivate(this), parent)
{
    setRequest(new DescribeDatasetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDatasetRequest * DescribeDatasetResponse::request() const
{
    return static_cast<const DescribeDatasetRequest *>(LookoutforVisionResponse::request());
}

/*!
 * \reimp
 * Parses a successful LookoutforVision DescribeDataset \a response.
 */
void DescribeDatasetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDatasetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutforVision::DescribeDatasetResponsePrivate
 * \brief The DescribeDatasetResponsePrivate class provides private implementation for DescribeDatasetResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutforVision
 */

/*!
 * Constructs a DescribeDatasetResponsePrivate object with public implementation \a q.
 */
DescribeDatasetResponsePrivate::DescribeDatasetResponsePrivate(
    DescribeDatasetResponse * const q) : LookoutforVisionResponsePrivate(q)
{

}

/*!
 * Parses a LookoutforVision DescribeDataset response element from \a xml.
 */
void DescribeDatasetResponsePrivate::parseDescribeDatasetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDatasetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutforVision
} // namespace QtAws
