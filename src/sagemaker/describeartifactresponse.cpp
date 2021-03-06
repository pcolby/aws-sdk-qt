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

#include "describeartifactresponse.h"
#include "describeartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeArtifactResponse
 * \brief The DescribeArtifactResponse class provides an interace for SageMaker DescribeArtifact responses.
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
 * \sa SageMakerClient::describeArtifact
 */

/*!
 * Constructs a DescribeArtifactResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeArtifactResponse::DescribeArtifactResponse(
        const DescribeArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeArtifactResponsePrivate(this), parent)
{
    setRequest(new DescribeArtifactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeArtifactRequest * DescribeArtifactResponse::request() const
{
    Q_D(const DescribeArtifactResponse);
    return static_cast<const DescribeArtifactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeArtifact \a response.
 */
void DescribeArtifactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeArtifactResponsePrivate
 * \brief The DescribeArtifactResponsePrivate class provides private implementation for DescribeArtifactResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeArtifactResponsePrivate object with public implementation \a q.
 */
DescribeArtifactResponsePrivate::DescribeArtifactResponsePrivate(
    DescribeArtifactResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeArtifact response element from \a xml.
 */
void DescribeArtifactResponsePrivate::parseDescribeArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeArtifactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
