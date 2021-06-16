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

#include "describedeviceresponse.h"
#include "describedeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeDeviceResponse
 * \brief The DescribeDeviceResponse class provides an interace for SageMaker DescribeDevice responses.
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
 * \sa SageMakerClient::describeDevice
 */

/*!
 * Constructs a DescribeDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDeviceResponse::DescribeDeviceResponse(
        const DescribeDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeDeviceResponsePrivate(this), parent)
{
    setRequest(new DescribeDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDeviceRequest * DescribeDeviceResponse::request() const
{
    Q_D(const DescribeDeviceResponse);
    return static_cast<const DescribeDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeDevice \a response.
 */
void DescribeDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeDeviceResponsePrivate
 * \brief The DescribeDeviceResponsePrivate class provides private implementation for DescribeDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeDeviceResponsePrivate object with public implementation \a q.
 */
DescribeDeviceResponsePrivate::DescribeDeviceResponsePrivate(
    DescribeDeviceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeDevice response element from \a xml.
 */
void DescribeDeviceResponsePrivate::parseDescribeDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
