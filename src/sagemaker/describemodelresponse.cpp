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

#include "describemodelresponse.h"
#include "describemodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeModelResponse
 * \brief The DescribeModelResponse class provides an interace for SageMaker DescribeModel responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::describeModel
 */

/*!
 * Constructs a DescribeModelResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeModelResponse::DescribeModelResponse(
        const DescribeModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeModelResponsePrivate(this), parent)
{
    setRequest(new DescribeModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeModelRequest * DescribeModelResponse::request() const
{
    Q_D(const DescribeModelResponse);
    return static_cast<const DescribeModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeModel \a response.
 */
void DescribeModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeModelResponsePrivate
 * \brief The DescribeModelResponsePrivate class provides private implementation for DescribeModelResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeModelResponsePrivate object with public implementation \a q.
 */
DescribeModelResponsePrivate::DescribeModelResponsePrivate(
    DescribeModelResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeModel response element from \a xml.
 */
void DescribeModelResponsePrivate::parseDescribeModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
