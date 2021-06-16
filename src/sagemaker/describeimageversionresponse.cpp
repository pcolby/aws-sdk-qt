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

#include "describeimageversionresponse.h"
#include "describeimageversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeImageVersionResponse
 * \brief The DescribeImageVersionResponse class provides an interace for SageMaker DescribeImageVersion responses.
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
 * \sa SageMakerClient::describeImageVersion
 */

/*!
 * Constructs a DescribeImageVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeImageVersionResponse::DescribeImageVersionResponse(
        const DescribeImageVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeImageVersionResponsePrivate(this), parent)
{
    setRequest(new DescribeImageVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeImageVersionRequest * DescribeImageVersionResponse::request() const
{
    Q_D(const DescribeImageVersionResponse);
    return static_cast<const DescribeImageVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeImageVersion \a response.
 */
void DescribeImageVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeImageVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeImageVersionResponsePrivate
 * \brief The DescribeImageVersionResponsePrivate class provides private implementation for DescribeImageVersionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeImageVersionResponsePrivate object with public implementation \a q.
 */
DescribeImageVersionResponsePrivate::DescribeImageVersionResponsePrivate(
    DescribeImageVersionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeImageVersion response element from \a xml.
 */
void DescribeImageVersionResponsePrivate::parseDescribeImageVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImageVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
