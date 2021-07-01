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

#include "describedatasetgroupresponse.h"
#include "describedatasetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeDatasetGroupResponse
 * \brief The DescribeDatasetGroupResponse class provides an interace for Personalize DescribeDatasetGroup responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeDatasetGroup
 */

/*!
 * Constructs a DescribeDatasetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDatasetGroupResponse::DescribeDatasetGroupResponse(
        const DescribeDatasetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DescribeDatasetGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeDatasetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDatasetGroupRequest * DescribeDatasetGroupResponse::request() const
{
    Q_D(const DescribeDatasetGroupResponse);
    return static_cast<const DescribeDatasetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DescribeDatasetGroup \a response.
 */
void DescribeDatasetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDatasetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DescribeDatasetGroupResponsePrivate
 * \brief The DescribeDatasetGroupResponsePrivate class provides private implementation for DescribeDatasetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeDatasetGroupResponsePrivate object with public implementation \a q.
 */
DescribeDatasetGroupResponsePrivate::DescribeDatasetGroupResponsePrivate(
    DescribeDatasetGroupResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DescribeDatasetGroup response element from \a xml.
 */
void DescribeDatasetGroupResponsePrivate::parseDescribeDatasetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDatasetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
