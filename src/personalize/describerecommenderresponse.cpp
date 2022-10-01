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
