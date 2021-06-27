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
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeDatasetResponse
 * \brief The DescribeDatasetResponse class provides an interace for Personalize DescribeDataset responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeDataset
 */

/*!
 * Constructs a DescribeDatasetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDatasetResponse::DescribeDatasetResponse(
        const DescribeDatasetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DescribeDatasetResponsePrivate(this), parent)
{
    setRequest(new DescribeDatasetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDatasetRequest * DescribeDatasetResponse::request() const
{
    return static_cast<const DescribeDatasetRequest *>(PersonalizeResponse::request());
}

/*!
 * \reimp
 * Parses a successful Personalize DescribeDataset \a response.
 */
void DescribeDatasetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDatasetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DescribeDatasetResponsePrivate
 * \brief The DescribeDatasetResponsePrivate class provides private implementation for DescribeDatasetResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeDatasetResponsePrivate object with public implementation \a q.
 */
DescribeDatasetResponsePrivate::DescribeDatasetResponsePrivate(
    DescribeDatasetResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DescribeDataset response element from \a xml.
 */
void DescribeDatasetResponsePrivate::parseDescribeDatasetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDatasetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
