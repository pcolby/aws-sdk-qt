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

#include "describetrialcomponentresponse.h"
#include "describetrialcomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeTrialComponentResponse
 * \brief The DescribeTrialComponentResponse class provides an interace for SageMaker DescribeTrialComponent responses.
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
 * \sa SageMakerClient::describeTrialComponent
 */

/*!
 * Constructs a DescribeTrialComponentResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTrialComponentResponse::DescribeTrialComponentResponse(
        const DescribeTrialComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeTrialComponentResponsePrivate(this), parent)
{
    setRequest(new DescribeTrialComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTrialComponentRequest * DescribeTrialComponentResponse::request() const
{
    return static_cast<const DescribeTrialComponentRequest *>(SageMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeTrialComponent \a response.
 */
void DescribeTrialComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTrialComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeTrialComponentResponsePrivate
 * \brief The DescribeTrialComponentResponsePrivate class provides private implementation for DescribeTrialComponentResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeTrialComponentResponsePrivate object with public implementation \a q.
 */
DescribeTrialComponentResponsePrivate::DescribeTrialComponentResponsePrivate(
    DescribeTrialComponentResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeTrialComponent response element from \a xml.
 */
void DescribeTrialComponentResponsePrivate::parseDescribeTrialComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTrialComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
