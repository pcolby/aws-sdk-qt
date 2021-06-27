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

#include "describemlmodelsresponse.h"
#include "describemlmodelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DescribeMLModelsResponse
 * \brief The DescribeMLModelsResponse class provides an interace for MachineLearning DescribeMLModels responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::describeMLModels
 */

/*!
 * Constructs a DescribeMLModelsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeMLModelsResponse::DescribeMLModelsResponse(
        const DescribeMLModelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new DescribeMLModelsResponsePrivate(this), parent)
{
    setRequest(new DescribeMLModelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeMLModelsRequest * DescribeMLModelsResponse::request() const
{
    return static_cast<const DescribeMLModelsRequest *>(MachineLearningResponse::request());
}

/*!
 * \reimp
 * Parses a successful MachineLearning DescribeMLModels \a response.
 */
void DescribeMLModelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeMLModelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::DescribeMLModelsResponsePrivate
 * \brief The DescribeMLModelsResponsePrivate class provides private implementation for DescribeMLModelsResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DescribeMLModelsResponsePrivate object with public implementation \a q.
 */
DescribeMLModelsResponsePrivate::DescribeMLModelsResponsePrivate(
    DescribeMLModelsResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning DescribeMLModels response element from \a xml.
 */
void DescribeMLModelsResponsePrivate::parseDescribeMLModelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMLModelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
