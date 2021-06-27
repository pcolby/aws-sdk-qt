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

#include "describeworkforceresponse.h"
#include "describeworkforceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeWorkforceResponse
 * \brief The DescribeWorkforceResponse class provides an interace for SageMaker DescribeWorkforce responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::describeWorkforce
 */

/*!
 * Constructs a DescribeWorkforceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorkforceResponse::DescribeWorkforceResponse(
        const DescribeWorkforceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeWorkforceResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkforceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorkforceRequest * DescribeWorkforceResponse::request() const
{
    return static_cast<const DescribeWorkforceRequest *>(SageMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeWorkforce \a response.
 */
void DescribeWorkforceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorkforceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeWorkforceResponsePrivate
 * \brief The DescribeWorkforceResponsePrivate class provides private implementation for DescribeWorkforceResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeWorkforceResponsePrivate object with public implementation \a q.
 */
DescribeWorkforceResponsePrivate::DescribeWorkforceResponsePrivate(
    DescribeWorkforceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeWorkforce response element from \a xml.
 */
void DescribeWorkforceResponsePrivate::parseDescribeWorkforceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkforceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
