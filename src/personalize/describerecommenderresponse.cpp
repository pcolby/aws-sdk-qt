// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerecommenderresponse.h"
#include "describerecommenderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeRecommenderResponse
 * \brief The DescribeRecommenderResponse class provides an interace for Personalize DescribeRecommender responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeRecommender
 */

/*!
 * Constructs a DescribeRecommenderResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRecommenderResponse::DescribeRecommenderResponse(
        const DescribeRecommenderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DescribeRecommenderResponsePrivate(this), parent)
{
    setRequest(new DescribeRecommenderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRecommenderRequest * DescribeRecommenderResponse::request() const
{
    Q_D(const DescribeRecommenderResponse);
    return static_cast<const DescribeRecommenderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DescribeRecommender \a response.
 */
void DescribeRecommenderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRecommenderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DescribeRecommenderResponsePrivate
 * \brief The DescribeRecommenderResponsePrivate class provides private implementation for DescribeRecommenderResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeRecommenderResponsePrivate object with public implementation \a q.
 */
DescribeRecommenderResponsePrivate::DescribeRecommenderResponsePrivate(
    DescribeRecommenderResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DescribeRecommender response element from \a xml.
 */
void DescribeRecommenderResponsePrivate::parseDescribeRecommenderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRecommenderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
