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

#include "describehyperparametertuningjobresponse.h"
#include "describehyperparametertuningjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeHyperParameterTuningJobResponse
 * \brief The DescribeHyperParameterTuningJobResponse class provides an interace for SageMaker DescribeHyperParameterTuningJob responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::describeHyperParameterTuningJob
 */

/*!
 * Constructs a DescribeHyperParameterTuningJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeHyperParameterTuningJobResponse::DescribeHyperParameterTuningJobResponse(
        const DescribeHyperParameterTuningJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeHyperParameterTuningJobResponsePrivate(this), parent)
{
    setRequest(new DescribeHyperParameterTuningJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeHyperParameterTuningJobRequest * DescribeHyperParameterTuningJobResponse::request() const
{
    Q_D(const DescribeHyperParameterTuningJobResponse);
    return static_cast<const DescribeHyperParameterTuningJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeHyperParameterTuningJob \a response.
 */
void DescribeHyperParameterTuningJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeHyperParameterTuningJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeHyperParameterTuningJobResponsePrivate
 * \brief The DescribeHyperParameterTuningJobResponsePrivate class provides private implementation for DescribeHyperParameterTuningJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeHyperParameterTuningJobResponsePrivate object with public implementation \a q.
 */
DescribeHyperParameterTuningJobResponsePrivate::DescribeHyperParameterTuningJobResponsePrivate(
    DescribeHyperParameterTuningJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeHyperParameterTuningJob response element from \a xml.
 */
void DescribeHyperParameterTuningJobResponsePrivate::parseDescribeHyperParameterTuningJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHyperParameterTuningJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
