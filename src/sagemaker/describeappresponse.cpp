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

#include "describeappresponse.h"
#include "describeappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeAppResponse
 * \brief The DescribeAppResponse class provides an interace for SageMaker DescribeApp responses.
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
 * \sa SageMakerClient::describeApp
 */

/*!
 * Constructs a DescribeAppResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAppResponse::DescribeAppResponse(
        const DescribeAppRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeAppResponsePrivate(this), parent)
{
    setRequest(new DescribeAppRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAppRequest * DescribeAppResponse::request() const
{
    Q_D(const DescribeAppResponse);
    return static_cast<const DescribeAppRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeApp \a response.
 */
void DescribeAppResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAppResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeAppResponsePrivate
 * \brief The DescribeAppResponsePrivate class provides private implementation for DescribeAppResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeAppResponsePrivate object with public implementation \a q.
 */
DescribeAppResponsePrivate::DescribeAppResponsePrivate(
    DescribeAppResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeApp response element from \a xml.
 */
void DescribeAppResponsePrivate::parseDescribeAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAppResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
