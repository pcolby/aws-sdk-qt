// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
