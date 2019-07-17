/*
    Copyright 2013-2019 Paul Colby

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

#include "describecompilationjobresponse.h"
#include "describecompilationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeCompilationJobResponse
 * \brief The DescribeCompilationJobResponse class provides an interace for SageMaker DescribeCompilationJob responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::describeCompilationJob
 */

/*!
 * Constructs a DescribeCompilationJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCompilationJobResponse::DescribeCompilationJobResponse(
        const DescribeCompilationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeCompilationJobResponsePrivate(this), parent)
{
    setRequest(new DescribeCompilationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCompilationJobRequest * DescribeCompilationJobResponse::request() const
{
    Q_D(const DescribeCompilationJobResponse);
    return static_cast<const DescribeCompilationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeCompilationJob \a response.
 */
void DescribeCompilationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCompilationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeCompilationJobResponsePrivate
 * \brief The DescribeCompilationJobResponsePrivate class provides private implementation for DescribeCompilationJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeCompilationJobResponsePrivate object with public implementation \a q.
 */
DescribeCompilationJobResponsePrivate::DescribeCompilationJobResponsePrivate(
    DescribeCompilationJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeCompilationJob response element from \a xml.
 */
void DescribeCompilationJobResponsePrivate::parseDescribeCompilationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCompilationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
