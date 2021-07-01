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

#include "describeevaluationsresponse.h"
#include "describeevaluationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DescribeEvaluationsResponse
 * \brief The DescribeEvaluationsResponse class provides an interace for MachineLearning DescribeEvaluations responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::describeEvaluations
 */

/*!
 * Constructs a DescribeEvaluationsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEvaluationsResponse::DescribeEvaluationsResponse(
        const DescribeEvaluationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new DescribeEvaluationsResponsePrivate(this), parent)
{
    setRequest(new DescribeEvaluationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEvaluationsRequest * DescribeEvaluationsResponse::request() const
{
    Q_D(const DescribeEvaluationsResponse);
    return static_cast<const DescribeEvaluationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning DescribeEvaluations \a response.
 */
void DescribeEvaluationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEvaluationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::DescribeEvaluationsResponsePrivate
 * \brief The DescribeEvaluationsResponsePrivate class provides private implementation for DescribeEvaluationsResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DescribeEvaluationsResponsePrivate object with public implementation \a q.
 */
DescribeEvaluationsResponsePrivate::DescribeEvaluationsResponsePrivate(
    DescribeEvaluationsResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning DescribeEvaluations response element from \a xml.
 */
void DescribeEvaluationsResponsePrivate::parseDescribeEvaluationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEvaluationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
